/* Everything */

/* Qt Edition */
#ifndef QT_EDITION
#  define QT_EDITION QT_EDITION_OPENSOURCE
#endif

/* Machine byte-order */
#define Q_BIG_ENDIAN 4321
#define Q_LITTLE_ENDIAN 1234
#define QT_BUILD_KEY "arm arm linux-g++ no-pkg-config"
#define QT_BUILD_KEY_COMPAT3 "armv6 arm linux-g++ no-pkg-config"

#ifdef QT_BOOTSTRAPPED
#define Q_BYTE_ORDER Q_LITTLE_ENDIAN
#else
#define Q_BYTE_ORDER Q_LITTLE_ENDIAN
#endif
/* Machine Architecture */
#ifndef QT_BOOTSTRAPPED
# define QT_ARCH_ARM
#else
# define QT_ARCH_X86_64
#endif
/* Compile time features */
#define QT_POINTER_SIZE 4

#ifndef QT_BOOTSTRAPPED

#if defined(QT_NO_ACCESSIBILITY) && defined(QT_ACCESSIBILITY)
# undef QT_NO_ACCESSIBILITY
#elif !defined(QT_NO_ACCESSIBILITY) && !defined(QT_ACCESSIBILITY)
# define QT_NO_ACCESSIBILITY
#endif

#if defined(QT_NO_ALSA) && defined(QT_ALSA)
# undef QT_NO_ALSA
#elif !defined(QT_NO_ALSA) && !defined(QT_ALSA)
# define QT_NO_ALSA
#endif

#if defined(QT_NO_CUPS) && defined(QT_CUPS)
# undef QT_NO_CUPS
#elif !defined(QT_NO_CUPS) && !defined(QT_CUPS)
# define QT_NO_CUPS
#endif

#if defined(QT_NO_DBUS) && defined(QT_DBUS)
# undef QT_NO_DBUS
#elif !defined(QT_NO_DBUS) && !defined(QT_DBUS)
# define QT_NO_DBUS
#endif

#if defined(QT_NO_DECLARATIVE) && defined(QT_DECLARATIVE)
# undef QT_NO_DECLARATIVE
#elif !defined(QT_NO_DECLARATIVE) && !defined(QT_DECLARATIVE)
# define QT_NO_DECLARATIVE
#endif

#if defined(QT_NO_EGL) && defined(QT_EGL)
# undef QT_NO_EGL
#elif !defined(QT_NO_EGL) && !defined(QT_EGL)
# define QT_NO_EGL
#endif

#if defined(QT_NO_EXCEPTIONS) && defined(QT_EXCEPTIONS)
# undef QT_NO_EXCEPTIONS
#elif !defined(QT_NO_EXCEPTIONS) && !defined(QT_EXCEPTIONS)
# define QT_NO_EXCEPTIONS
#endif

#if defined(QT_NO_FONTCONFIG) && defined(QT_FONTCONFIG)
# undef QT_NO_FONTCONFIG
#elif !defined(QT_NO_FONTCONFIG) && !defined(QT_FONTCONFIG)
# define QT_NO_FONTCONFIG
#endif

#if defined(QT_NO_GLIB) && defined(QT_GLIB)
# undef QT_NO_GLIB
#elif !defined(QT_NO_GLIB) && !defined(QT_GLIB)
# define QT_NO_GLIB
#endif

#if defined(QT_NO_GSTREAMER) && defined(QT_GSTREAMER)
# undef QT_NO_GSTREAMER
#elif !defined(QT_NO_GSTREAMER) && !defined(QT_GSTREAMER)
# define QT_NO_GSTREAMER
#endif

#if defined(QT_NO_ICD) && defined(QT_ICD)
# undef QT_NO_ICD
#elif !defined(QT_NO_ICD) && !defined(QT_ICD)
# define QT_NO_ICD
#endif

#if defined(QT_NO_ICONV) && defined(QT_ICONV)
# undef QT_NO_ICONV
#elif !defined(QT_NO_ICONV) && !defined(QT_ICONV)
# define QT_NO_ICONV
#endif

#if defined(QT_NO_IMAGEFORMAT_MNG) && defined(QT_IMAGEFORMAT_MNG)
# undef QT_NO_IMAGEFORMAT_MNG
#elif !defined(QT_NO_IMAGEFORMAT_MNG) && !defined(QT_IMAGEFORMAT_MNG)
# define QT_NO_IMAGEFORMAT_MNG
#endif

#if defined(QT_NO_IMAGEFORMAT_PNG) && defined(QT_IMAGEFORMAT_PNG)
# undef QT_NO_IMAGEFORMAT_PNG
#elif !defined(QT_NO_IMAGEFORMAT_PNG) && !defined(QT_IMAGEFORMAT_PNG)
# define QT_NO_IMAGEFORMAT_PNG
#endif

#if defined(QT_NO_IMAGEFORMAT_TIFF) && defined(QT_IMAGEFORMAT_TIFF)
# undef QT_NO_IMAGEFORMAT_TIFF
#elif !defined(QT_NO_IMAGEFORMAT_TIFF) && !defined(QT_IMAGEFORMAT_TIFF)
# define QT_NO_IMAGEFORMAT_TIFF
#endif

#if defined(QT_NO_MITSHM) && defined(QT_MITSHM)
# undef QT_NO_MITSHM
#elif !defined(QT_NO_MITSHM) && !defined(QT_MITSHM)
# define QT_NO_MITSHM
#endif

#if defined(QT_NO_MULTIMEDIA) && defined(QT_MULTIMEDIA)
# undef QT_NO_MULTIMEDIA
#elif !defined(QT_NO_MULTIMEDIA) && !defined(QT_MULTIMEDIA)
# define QT_NO_MULTIMEDIA
#endif

#if defined(QT_NO_NAS) && defined(QT_NAS)
# undef QT_NO_NAS
#elif !defined(QT_NO_NAS) && !defined(QT_NAS)
# define QT_NO_NAS
#endif

#if defined(QT_NO_NIS) && defined(QT_NIS)
# undef QT_NO_NIS
#elif !defined(QT_NO_NIS) && !defined(QT_NIS)
# define QT_NO_NIS
#endif

#if defined(QT_NO_OPENGL) && defined(QT_OPENGL)
# undef QT_NO_OPENGL
#elif !defined(QT_NO_OPENGL) && !defined(QT_OPENGL)
# define QT_NO_OPENGL
#endif

#if defined(QT_NO_OPENSSL) && defined(QT_OPENSSL)
# undef QT_NO_OPENSSL
#elif !defined(QT_NO_OPENSSL) && !defined(QT_OPENSSL)
# define QT_NO_OPENSSL
#endif

#if defined(QT_NO_OPENVG) && defined(QT_OPENVG)
# undef QT_NO_OPENVG
#elif !defined(QT_NO_OPENVG) && !defined(QT_OPENVG)
# define QT_NO_OPENVG
#endif

#if defined(QT_NO_PHONON) && defined(QT_PHONON)
# undef QT_NO_PHONON
#elif !defined(QT_NO_PHONON) && !defined(QT_PHONON)
# define QT_NO_PHONON
#endif

#if defined(QT_NO_PULSEAUDIO) && defined(QT_PULSEAUDIO)
# undef QT_NO_PULSEAUDIO
#elif !defined(QT_NO_PULSEAUDIO) && !defined(QT_PULSEAUDIO)
# define QT_NO_PULSEAUDIO
#endif

#if defined(QT_NO_QWS_DIRECTFB) && defined(QT_QWS_DIRECTFB)
# undef QT_NO_QWS_DIRECTFB
#elif !defined(QT_NO_QWS_DIRECTFB) && !defined(QT_QWS_DIRECTFB)
# define QT_NO_QWS_DIRECTFB
#endif

#if defined(QT_NO_QWS_INTEGRITYFB) && defined(QT_QWS_INTEGRITYFB)
# undef QT_NO_QWS_INTEGRITYFB
#elif !defined(QT_NO_QWS_INTEGRITYFB) && !defined(QT_QWS_INTEGRITYFB)
# define QT_NO_QWS_INTEGRITYFB
#endif

#if defined(QT_NO_QWS_KBD_INTEGRITY) && defined(QT_QWS_KBD_INTEGRITY)
# undef QT_NO_QWS_KBD_INTEGRITY
#elif !defined(QT_NO_QWS_KBD_INTEGRITY) && !defined(QT_QWS_KBD_INTEGRITY)
# define QT_NO_QWS_KBD_INTEGRITY
#endif

#if defined(QT_NO_QWS_KBD_LINUXINPUT) && defined(QT_QWS_KBD_LINUXINPUT)
# undef QT_NO_QWS_KBD_LINUXINPUT
#elif !defined(QT_NO_QWS_KBD_LINUXINPUT) && !defined(QT_QWS_KBD_LINUXINPUT)
# define QT_NO_QWS_KBD_LINUXINPUT
#endif

#if defined(QT_NO_QWS_KBD_QNX) && defined(QT_QWS_KBD_QNX)
# undef QT_NO_QWS_KBD_QNX
#elif !defined(QT_NO_QWS_KBD_QNX) && !defined(QT_QWS_KBD_QNX)
# define QT_NO_QWS_KBD_QNX
#endif

#if defined(QT_NO_QWS_KBD_QVFB) && defined(QT_QWS_KBD_QVFB)
# undef QT_NO_QWS_KBD_QVFB
#elif !defined(QT_NO_QWS_KBD_QVFB) && !defined(QT_QWS_KBD_QVFB)
# define QT_NO_QWS_KBD_QVFB
#endif

#if defined(QT_NO_QWS_KBD_UM) && defined(QT_QWS_KBD_UM)
# undef QT_NO_QWS_KBD_UM
#elif !defined(QT_NO_QWS_KBD_UM) && !defined(QT_QWS_KBD_UM)
# define QT_NO_QWS_KBD_UM
#endif

#if defined(QT_NO_QWS_MOUSE_INTEGRITY) && defined(QT_QWS_MOUSE_INTEGRITY)
# undef QT_NO_QWS_MOUSE_INTEGRITY
#elif !defined(QT_NO_QWS_MOUSE_INTEGRITY) && !defined(QT_QWS_MOUSE_INTEGRITY)
# define QT_NO_QWS_MOUSE_INTEGRITY
#endif

#if defined(QT_NO_QWS_MOUSE_LINUXINPUT) && defined(QT_QWS_MOUSE_LINUXINPUT)
# undef QT_NO_QWS_MOUSE_LINUXINPUT
#elif !defined(QT_NO_QWS_MOUSE_LINUXINPUT) && !defined(QT_QWS_MOUSE_LINUXINPUT)
# define QT_NO_QWS_MOUSE_LINUXINPUT
#endif

#if defined(QT_NO_QWS_MOUSE_QNX) && defined(QT_QWS_MOUSE_QNX)
# undef QT_NO_QWS_MOUSE_QNX
#elif !defined(QT_NO_QWS_MOUSE_QNX) && !defined(QT_QWS_MOUSE_QNX)
# define QT_NO_QWS_MOUSE_QNX
#endif

#if defined(QT_NO_QWS_MOUSE_QVFB) && defined(QT_QWS_MOUSE_QVFB)
# undef QT_NO_QWS_MOUSE_QVFB
#elif !defined(QT_NO_QWS_MOUSE_QVFB) && !defined(QT_QWS_MOUSE_QVFB)
# define QT_NO_QWS_MOUSE_QVFB
#endif

#if defined(QT_NO_QWS_MOUSE_TSLIB) && defined(QT_QWS_MOUSE_TSLIB)
# undef QT_NO_QWS_MOUSE_TSLIB
#elif !defined(QT_NO_QWS_MOUSE_TSLIB) && !defined(QT_QWS_MOUSE_TSLIB)
# define QT_NO_QWS_MOUSE_TSLIB
#endif

#if defined(QT_NO_QWS_QNX) && defined(QT_QWS_QNX)
# undef QT_NO_QWS_QNX
#elif !defined(QT_NO_QWS_QNX) && !defined(QT_QWS_QNX)
# define QT_NO_QWS_QNX
#endif

#if defined(QT_NO_QWS_QVFB) && defined(QT_QWS_QVFB)
# undef QT_NO_QWS_QVFB
#elif !defined(QT_NO_QWS_QVFB) && !defined(QT_QWS_QVFB)
# define QT_NO_QWS_QVFB
#endif

#if defined(QT_NO_QWS_TRANSFORMED) && defined(QT_QWS_TRANSFORMED)
# undef QT_NO_QWS_TRANSFORMED
#elif !defined(QT_NO_QWS_TRANSFORMED) && !defined(QT_QWS_TRANSFORMED)
# define QT_NO_QWS_TRANSFORMED
#endif

#if defined(QT_NO_QWS_VNC) && defined(QT_QWS_VNC)
# undef QT_NO_QWS_VNC
#elif !defined(QT_NO_QWS_VNC) && !defined(QT_QWS_VNC)
# define QT_NO_QWS_VNC
#endif

#if defined(QT_NO_S60) && defined(QT_S60)
# undef QT_NO_S60
#elif !defined(QT_NO_S60) && !defined(QT_S60)
# define QT_NO_S60
#endif

#if defined(QT_NO_SCRIPT) && defined(QT_SCRIPT)
# undef QT_NO_SCRIPT
#elif !defined(QT_NO_SCRIPT) && !defined(QT_SCRIPT)
# define QT_NO_SCRIPT
#endif

#if defined(QT_NO_SCRIPTTOOLS) && defined(QT_SCRIPTTOOLS)
# undef QT_NO_SCRIPTTOOLS
#elif !defined(QT_NO_SCRIPTTOOLS) && !defined(QT_SCRIPTTOOLS)
# define QT_NO_SCRIPTTOOLS
#endif

#if defined(QT_NO_SESSIONMANAGER) && defined(QT_SESSIONMANAGER)
# undef QT_NO_SESSIONMANAGER
#elif !defined(QT_NO_SESSIONMANAGER) && !defined(QT_SESSIONMANAGER)
# define QT_NO_SESSIONMANAGER
#endif

#if defined(QT_NO_SHAPE) && defined(QT_SHAPE)
# undef QT_NO_SHAPE
#elif !defined(QT_NO_SHAPE) && !defined(QT_SHAPE)
# define QT_NO_SHAPE
#endif

#if defined(QT_NO_STL) && defined(QT_STL)
# undef QT_NO_STL
#elif !defined(QT_NO_STL) && !defined(QT_STL)
# define QT_NO_STL
#endif

#if defined(QT_NO_STYLE_GTK) && defined(QT_STYLE_GTK)
# undef QT_NO_STYLE_GTK
#elif !defined(QT_NO_STYLE_GTK) && !defined(QT_STYLE_GTK)
# define QT_NO_STYLE_GTK
#endif

#if defined(QT_NO_STYLE_S60) && defined(QT_STYLE_S60)
# undef QT_NO_STYLE_S60
#elif !defined(QT_NO_STYLE_S60) && !defined(QT_STYLE_S60)
# define QT_NO_STYLE_S60
#endif

#if defined(QT_NO_SXE) && defined(QT_SXE)
# undef QT_NO_SXE
#elif !defined(QT_NO_SXE) && !defined(QT_SXE)
# define QT_NO_SXE
#endif

#if defined(QT_NO_TABLET) && defined(QT_TABLET)
# undef QT_NO_TABLET
#elif !defined(QT_NO_TABLET) && !defined(QT_TABLET)
# define QT_NO_TABLET
#endif

#if defined(QT_NO_WEBKIT) && defined(QT_WEBKIT)
# undef QT_NO_WEBKIT
#elif !defined(QT_NO_WEBKIT) && !defined(QT_WEBKIT)
# define QT_NO_WEBKIT
#endif

#if defined(QT_NO_XCURSOR) && defined(QT_XCURSOR)
# undef QT_NO_XCURSOR
#elif !defined(QT_NO_XCURSOR) && !defined(QT_XCURSOR)
# define QT_NO_XCURSOR
#endif

#if defined(QT_NO_XFIXES) && defined(QT_XFIXES)
# undef QT_NO_XFIXES
#elif !defined(QT_NO_XFIXES) && !defined(QT_XFIXES)
# define QT_NO_XFIXES
#endif

#if defined(QT_NO_XINERAMA) && defined(QT_XINERAMA)
# undef QT_NO_XINERAMA
#elif !defined(QT_NO_XINERAMA) && !defined(QT_XINERAMA)
# define QT_NO_XINERAMA
#endif

#if defined(QT_NO_XINPUT) && defined(QT_XINPUT)
# undef QT_NO_XINPUT
#elif !defined(QT_NO_XINPUT) && !defined(QT_XINPUT)
# define QT_NO_XINPUT
#endif

#if defined(QT_NO_XKB) && defined(QT_XKB)
# undef QT_NO_XKB
#elif !defined(QT_NO_XKB) && !defined(QT_XKB)
# define QT_NO_XKB
#endif

#if defined(QT_NO_XMLPATTERNS) && defined(QT_XMLPATTERNS)
# undef QT_NO_XMLPATTERNS
#elif !defined(QT_NO_XMLPATTERNS) && !defined(QT_XMLPATTERNS)
# define QT_NO_XMLPATTERNS
#endif

#if defined(QT_NO_XRANDR) && defined(QT_XRANDR)
# undef QT_NO_XRANDR
#elif !defined(QT_NO_XRANDR) && !defined(QT_XRANDR)
# define QT_NO_XRANDR
#endif

#if defined(QT_NO_XRENDER) && defined(QT_XRENDER)
# undef QT_NO_XRENDER
#elif !defined(QT_NO_XRENDER) && !defined(QT_XRENDER)
# define QT_NO_XRENDER
#endif

#if defined(QT_NO_XSYNC) && defined(QT_XSYNC)
# undef QT_NO_XSYNC
#elif !defined(QT_NO_XSYNC) && !defined(QT_XSYNC)
# define QT_NO_XSYNC
#endif

#if defined(QT_NO_XVIDEO) && defined(QT_XVIDEO)
# undef QT_NO_XVIDEO
#elif !defined(QT_NO_XVIDEO) && !defined(QT_XVIDEO)
# define QT_NO_XVIDEO
#endif

#if defined(QT_QWS_DEPTH_16) && defined(QT_NO_QWS_DEPTH_16)
# undef QT_QWS_DEPTH_16
#elif !defined(QT_QWS_DEPTH_16) && !defined(QT_NO_QWS_DEPTH_16)
# define QT_QWS_DEPTH_16
#endif

#if defined(QT_QWS_DEPTH_32) && defined(QT_NO_QWS_DEPTH_32)
# undef QT_QWS_DEPTH_32
#elif !defined(QT_QWS_DEPTH_32) && !defined(QT_NO_QWS_DEPTH_32)
# define QT_QWS_DEPTH_32
#endif

#if defined(QT_USE_MATH_H_FLOATS) && defined(QT_NO_USE_MATH_H_FLOATS)
# undef QT_USE_MATH_H_FLOATS
#elif !defined(QT_USE_MATH_H_FLOATS) && !defined(QT_NO_USE_MATH_H_FLOATS)
# define QT_USE_MATH_H_FLOATS
#endif

#ifndef Q_WS_QWS
# define Q_WS_QWS
#endif

#endif // QT_BOOTSTRAPPED

#define QT_VISIBILITY_AVAILABLE

