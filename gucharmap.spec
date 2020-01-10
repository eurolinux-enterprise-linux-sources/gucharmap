%define glib2_version 2.32.0
%define gtk3_version 3.15.9

Name:           gucharmap
Version:        10.0.4
Release:        1%{?dist}
Summary:        Unicode character picker and font browser

License:        GPLv3+ and GFDL and MIT
# GPL for the source code, GFDL for the docs, MIT for Unicode data
URL:            https://wiki.gnome.org/Apps/Gucharmap
Source:         https://download.gnome.org/sources/gucharmap/10.0/gucharmap-%{version}.tar.xz
Source1:        Unihan.zip

# Backported from upstream
Patch0:         0001-build-Explicitly-link-to-libdl.patch

# no Unihan in RHEL
Patch1:         fix-locale-unihan.patch

BuildRequires:  libappstream-glib
BuildRequires:  glib2-devel >= %{glib2_version}
BuildRequires:  gtk3-devel >= %{gtk3_version}
BuildRequires:  gobject-introspection-devel
BuildRequires:  gettext
BuildRequires:  intltool
BuildRequires:  itstool
BuildRequires:  /usr/bin/appstream-util
BuildRequires:  /usr/bin/desktop-file-validate
BuildRequires:  unicode-ucd
BuildRequires:  perl(Env)
# for patch0
BuildRequires:  autoconf automake yelp-tools

Requires:       %{name}-libs%{?_isa} = %{version}-%{release}

%description
This program allows you to browse through all the available Unicode
characters and categories for the installed fonts, and to examine their
detailed properties. It is an easy way to find the character you might
only know by its Unicode name or code point.

%package libs
Summary: libgucharmap library

%description libs
The %{name}-libs package contains the libgucharmap library.

%package devel
Summary: Libraries and headers for libgucharmap
Requires: %{name}-libs%{?_isa} = %{version}-%{release}

%description devel
The gucharmap-devel package contains header files and other resources
needed to use the libgucharmap library.

%prep
%autosetup -p1

%build
cp %{SOURCE1} %{_builddir}/%{?buildsubdir}
# for patch0
autoreconf -fi

%configure --with-gtk=3.0 \
           --enable-introspection \
           --with-unicode-data=%{_datadir}/unicode/ucd
make %{?_smp_mflags}

%install
%make_install

# Update the screenshot shown in the software center
#
# NOTE: It would be *awesome* if this file was pushed upstream.
#
# See http://people.freedesktop.org/~hughsient/appdata/#screenshots for more details.
#
appstream-util replace-screenshots $RPM_BUILD_ROOT%{_datadir}/metainfo/gucharmap.appdata.xml \
  https://raw.githubusercontent.com/hughsie/fedora-appstream/master/screenshots-extra/gucharmap/a.png \
  https://raw.githubusercontent.com/hughsie/fedora-appstream/master/screenshots-extra/gucharmap/b.png 

rm $RPM_BUILD_ROOT/%{_libdir}/*.la

%find_lang gucharmap --with-gnome

%check
desktop-file-validate $RPM_BUILD_ROOT%{_datadir}/applications/gucharmap.desktop

%post libs -p /sbin/ldconfig
%postun libs -p /sbin/ldconfig

%post
update-desktop-database &> /dev/null || :
touch --no-create %{_datadir}/icons/hicolor &>/dev/null || :

%postun
update-desktop-database &> /dev/null || :
if [ $1 -eq 0 ] ; then
  touch --no-create %{_datadir}/icons/hicolor &>/dev/null
  gtk-update-icon-cache %{_datadir}/icons/hicolor &>/dev/null || :
  glib-compile-schemas %{_datadir}/glib-2.0/schemas &>/dev/null || :
fi

%posttrans
gtk-update-icon-cache %{_datadir}/icons/hicolor &>/dev/null || :
glib-compile-schemas %{_datadir}/glib-2.0/schemas &>/dev/null || :

%files -f gucharmap.lang
%license COPYING
%doc AUTHORS NEWS
%{_bindir}/charmap
%{_bindir}/gucharmap
%{_bindir}/gnome-character-map
%{_datadir}/applications/gucharmap.desktop
%{_datadir}/glib-2.0/schemas/org.gnome.Charmap.enums.xml
%{_datadir}/glib-2.0/schemas/org.gnome.Charmap.gschema.xml
%{_datadir}/metainfo/gucharmap.appdata.xml

%files libs
%license COPYING
%{_libdir}/libgucharmap_2_90.so.*
%{_libdir}/girepository-1.0/

%files devel
%{_includedir}/gucharmap-2.90
%{_libdir}/libgucharmap_2_90.so
%{_libdir}/pkgconfig/gucharmap-2.90.pc
%{_datadir}/gir-1.0


%changelog
* Wed Jun 06 2018 Richard Hughes <rhughes@redhat.com> - 10.0.4-1
- Update to 10.0.4
- Resolves: #1569279

* Fri Mar 10 2017 Kalev Lember <klember@redhat.com> - 3.18.2-1
- Update to 3.18.2
- Resolves: #1386984

* Fri Jul 01 2016 Kalev Lember <klember@redhat.com> - 3.14.2-2
- Update translations
- Resolves: #1304259

* Mon Mar 23 2015 Richard Hughes <rhughes@redhat.com> - 3.14.2-1
- Update to 3.14.2
- Resolves: #1174590

* Fri Jan 24 2014 Daniel Mach <dmach@redhat.com> - 3.8.2-3
- Mass rebuild 2014-01-24

* Fri Dec 27 2013 Daniel Mach <dmach@redhat.com> - 3.8.2-2
- Mass rebuild 2013-12-27

* Mon May 13 2013 Richard Hughes <rhughes@redhat.com> - 3.8.2-1
- Update to 3.8.2

* Mon Apr 15 2013 Kalev Lember <kalevlember@gmail.com> - 3.8.1-1
- Update to 3.8.1

* Tue Mar 26 2013 Kalev Lember <kalevlember@gmail.com> - 3.8.0-1
- Update to 3.8.0

* Tue Mar 19 2013 Richard Hughes <rhughes@redhat.com> - 3.7.92-1
- Update to 3.7.92

* Fri Feb 22 2013 Kalev Lember <kalevlember@gmail.com> - 3.6.1-3
- Drop the desktop file vendor prefix

* Thu Feb 14 2013 Fedora Release Engineering <rel-eng@lists.fedoraproject.org> - 3.6.1-2
- Rebuilt for https://fedoraproject.org/wiki/Fedora_19_Mass_Rebuild

* Tue Nov 13 2012 Kalev Lember <kalevlember@gmail.com> - 3.6.1-1
- Update to 3.6.1

* Tue Oct 16 2012 Kalev Lember <kalevlember@gmail.com> - 3.6.0-1
- Update to 3.6.0

* Tue Sep 25 2012 Matthias Clasen <mclasen@redhat.com> - 3.5.99-1
- Update to 3.5.99

* Tue Aug 21 2012 Richard Hughes <hughsient@gmail.com> - 3.5.90-1
- Update to 3.5.90

* Fri Jul 27 2012 Fedora Release Engineering <rel-eng@lists.fedoraproject.org> - 3.5.1-2
- Rebuilt for https://fedoraproject.org/wiki/Fedora_18_Mass_Rebuild

* Mon Jun 25 2012 Richard Hughes <hughsient@gmail.com> - 3.5.1-1
- Update to 3.5.1

* Thu Jun 07 2012 Richard Hughes <hughsient@gmail.com> - 3.5.0-1
- Update to 3.5.0

* Tue Apr 24 2012 Kalev Lember <kalevlember@gmail.com> - 3.4.1.1-2
- Silence rpm scriptlet output

* Tue Apr 17 2012 Kalev Lember <kalevlember@gmail.com> - 3.4.1.1-1
- Update to 3.4.1.1

* Tue Mar 27 2012 Kalev Lember <kalevlember@gmail.com> - 3.4.0.1-1
- Update to 3.4.0.1

* Wed Mar  7 2012 Matthias Clasen <mclasen@redhat.com> - 3.3.1-2
- Fix pc file

* Tue Feb  7 2012 Matthias Clasen <mclasen@redhat.com> - 3.3.1-1
- Update to 3.3.1

* Fri Jan 13 2012 Fedora Release Engineering <rel-eng@lists.fedoraproject.org> - 3.3.0-2
- Rebuilt for https://fedoraproject.org/wiki/Fedora_17_Mass_Rebuild

* Tue Dec 20 2011 Matthias Clasen <mclasen@redhat.com> - 3.3.0-1
- Update to 3.3.0

* Tue Nov 22 2011 Matthias Clasen <mclasen@redhat.com> - 3.2.2-1
- Update to 3.2.2

* Wed Oct 26 2011 Fedora Release Engineering <rel-eng@lists.fedoraproject.org> - 3.2.1-2
- Rebuilt for glibc bug#747377

* Tue Oct 18 2011 Matthias Clasen <mclasen@redhat.com> - 3.2.1-1
- Update to 3.2.1

* Tue Sep 27 2011 Ray <rstrode@redhat.com> - 3.2.0-1
- Update to 3.2.0

* Tue Sep 20 2011 Matthias Clasen <mclasen@redhat.com> - 3.1.92-1
- Update to 3.1.92

* Sat May 07 2011 Christopher Aillon <caillon@redhat.com> - 3.0.1-2
- Update scriptlets

* Mon Apr 25 2011 Matthias Clasen <mclasen@redhat.com> - 3.0.1-1
- Update to 3.0.1

* Mon Apr  4 2011 Matthias Clasen <mclasen@redhat.com> - 3.0.0-1
- Update to 3.0.0

* Thu Feb 24 2011 Matthias Clasen <mclasen@redhat.com> - 2.33.2-6
- Enable introspection

* Thu Feb 10 2011 Matthias Clasen <mclasen@redhat.com> - 2.33.2-5
- Rebuild against newer gtk

* Wed Feb 09 2011 Fedora Release Engineering <rel-eng@lists.fedoraproject.org> - 2.33.2-4
- Rebuilt for https://fedoraproject.org/wiki/Fedora_15_Mass_Rebuild

* Wed Feb  2 2011 Matthias Clasen <mclasen@redhat.com> - 2.33.2-3
- Rebuild

* Mon Jan 10 2011 Matthias Clasen <mclasen@redhat.com> - 2.33.2-2
- Rebuild

* Fri Jan  7 2011 Matthias Clasen <mclasen@redhat.com> - 2.33.2-1
- Update to 2.33.2

* Fri Dec  3 2010 Matthias Clasen <mclasen@redhat.com> - 2.33.2-0.2.gitc50414f
- Rebuild against new gtk

* Tue Nov  2 2010 Matthias Clasen <mclasen@redhat.com> - 2.33.2-0.1.gitc50414f
- Git snapshot that builds against new gtk3

* Mon Nov  1 2010 Matthias Clasen <mclasen@redhat.com> - 2.33.0-3
- Update license field to match changed license (#639133)

* Wed Oct  6 2010 Paul Howarth <paul@city-fan.org> - 2.33.0-2
- gtk2 dependencies become gtk3 dependencies

* Mon Oct  4 2010 Matthias Clasen <mclasen@redhat.com> - 2.33.0-1
- Update to 2.33.0

* Wed Sep 29 2010 Matthias Clasen <mclasen@redhat.com> - 2.32.0-1
- Update to 2.32.0

* Tue Aug 31 2010 Matthias Clasen <mclasen@redhat.com> - 2.31.91-1
- Update to 2.31.91

* Thu Aug 19 2010 Matthias Clasen <mclasen@redhat.com> - 2.31.90-1
- Update to 2.31.90

* Mon Apr 26 2010 Matthias Clasen <mclasen@redhat.com> - 2.30.1-1
- Update to 2.30.1

* Mon Mar 29 2010 Matthias Clasen <mclasen@redhat.com> - 2.30.0-1
- Update to 2.30.0

* Thu Mar 11 2010 Matthias Clasen <mclasen@redhat.com> - 2.29.92-1
- Update to 2.29.92

* Fri Dec  4 2009 Matthias Clasen <mclasen@redhat.com> - 2.29.1-1
- Update to 2.29.1

* Mon Oct 19 2009 Matthias Clasen <mclasen@redhat.com> - 2.28.1-1
- Update to 2.28.1

* Mon Sep 21 2009 Matthias Clasen <mclasen@redhat.com> - 2.28.0-1
- Update to 2.28.0

* Fri Jul 24 2009 Fedora Release Engineering <rel-eng@lists.fedoraproject.org> - 2.26.3.1-3
- Rebuilt for https://fedoraproject.org/wiki/Fedora_12_Mass_Rebuild

* Wed Jul 15 2009 Matthias Clasen <mclasen@redhat.com> - 2.26.3.1-2
- Fix some stubborn button images

* Sun Jul 12 2009 Matthias Clasen <mclasen@redhat.com> - 2.26.3.1-1
- Update to 2.26.3.1

* Mon Apr 13 2009 Matthias Clasen <mclasen@redhat.com> - 2.26.1-1
- Update to 2.26.1

* Mon Mar 16 2009 Matthias Clasen <mclasen@redhat.com> - 2.26.0-1
- Update to 2.26.0

* Tue Feb 24 2009 Fedora Release Engineering <rel-eng@lists.fedoraproject.org> - 2.25.91-2
- Rebuilt for https://fedoraproject.org/wiki/Fedora_11_Mass_Rebuild

* Wed Feb 18 2009 Matthias Clasen <mclasen@redhat.com> - 2.25.91-1
- Update to 2.25.91

* Thu Jan 15 2009 Matthias Clasen <mclasen@redhat.com> - 2.24.3-1
- Update to 2.24.3

* Mon Oct 20 2008 Matthias Clasen <mclasen@redhat.com> - 2.24.1-1
- Update to 2.24.1

* Wed Oct  8 2008 Matthias Clasen <mclasen@redhat.com> - 2.24.0-2
- Save some space

* Mon Sep 22 2008 Matthias Clasen <mclasen@redhat.com> - 2.24.0-1
- Update to 2.24.0

* Tue Sep  2 2008 Matthias Clasen <mclasen@redhat.com> - 2.23.91-1
- Update to 2.23.91

* Mon Aug  4 2008 Matthias Clasen <mclasen@redhat.com> - 2.23.6-1
- Update to 2.23.6

* Tue Jul 29 2008 Tom "spot" Callaway <tcallawa@redhat.com> - 2.23.4-2
- fix license tag

* Tue Jun 17 2008 Matthias Clasen <mclasen@redhat.com> - 2.23.4-1
- Update to 2.23.4

* Mon Apr  7 2008 Matthias Clasen <mclasen@redhat.com> - 2.22.1-1
- Update to 2.22.1

* Sun Mar  9 2008 Matthias Clasen <mclasen@redhat.com> - 2.22.0-1
- Update to 2.22.0

* Wed Jan 30 2008 Matthias Clasen <mclasen@redhat.com> - 2.21.90-1
- Update to 2.21.90

* Tue Jan 15 2008 Matthias Clasen <mclasen@redhat.com> - 2.21.5-1
- Update to 2.21.5

* Tue Dec 18 2007 Matthias Clasen <mclasen@redhat.com> - 2.21.4-1
- Update to 2.21.4

* Thu Dec  6 2007 Matthias Clasen <mclasen@redhat.com> - 2.21.3-1
- Update to 2.21.3

* Tue Sep 18 2007 Matthias Clasen <mclasen@redhat.com> - 1.10.1-1
- Update to 1.10.1

* Tue Aug  7 2007 Matthias Clasen <mclasen@redhat.com> - 1.10.0-2
- Update license field
- Use %%find_lang for help files

* Tue Mar 13 2007 Matthias Clasen <mclasen@redhat.com> - 1.10.0-1
- Update to 1.10.0

* Mon Sep  4 2006 Matthias Clasen <mclasen@redhat.com> - 1.8.0-1
- Update to 1.8.0
- Require pgkconfig for the -devel package

* Thu Aug 02 2006 Matthias Clasen <mclasen@redhat.com> 
- Rebuild 

* Wed Aug 02 2006 Behdad Esfahbod <besfahbo@redhat.com> - 1.7.0-1
- Update to 1.7.0

* Wed Jul 12 2006 Jesse Keating <jkeating@redhat.com> - 1.6.0-8.1
- rebuild

* Fri Jun  9 2006 Matthias Clasen <mclasen@redhat.com> 1.6.0-8
- Add missing BuildRequires

* Fri Jun  2 2006 Matthias Clasen <mclasen@redhat.com> 1.6.0-7
- Rebuild

* Tue Apr 18 2006 Matthias Clasen <mclasen@redhat.com> 1.6.0-6
- Make -devel require the exact n-v-r

* Tue Apr 18 2006 Matthias Clasen <mclasen@redhat.com> 1.6.0-5
- incorporate more package review feedback

* Mon Apr 17 2006 Matthias Clasen <mclasen@redhat.com> 1.6.0-4
- split off a -devel package

* Mon Apr 17 2006 Matthias Clasen <mclasen@redhat.com> 1.6.0-3
- fix issues pointed out in package review

* Tue Apr 11 2006 Matthias Clasen <mclasen@redhat.com> 1.6.0-2
- Initial revision
