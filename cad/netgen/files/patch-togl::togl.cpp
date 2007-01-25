--- togl/togl.cpp.orig	Wed Sep 29 19:48:06 2004
+++ togl/togl.cpp	Fri Jan 26 00:30:29 2007
@@ -138,14 +138,14 @@
 #  include "tkInt8.4p3.h"
 #elif TK_MAJOR_VERSION==8 && TK_MINOR_VERSION==4 && TK_RELEASE_SERIAL==4
 #  include "tkInt8.4p4.h"
-#elif TK_MAJOR_VERSION==8 && TK_MINOR_VERSION==4 && TK_RELEASE_SERIAL==6
+#elif TK_MAJOR_VERSION==8 && TK_MINOR_VERSION==4 && TK_RELEASE_SERIAL>=6
 #  include "tkInt8.4p6.h"
 #else
-   Sorry, you will have to edit togl.c to include the right tkInt.h file
+   #error Sorry, you will have to edit togl.c to include the right tkInt.h file
 #endif
 #elif defined(WIN32)
 #if TK_MAJOR_VERSION<8
-   Sorry Windows version requires Tcl/Tk ver 8.0 or higher.
+   #error Sorry Windows version requires Tcl/Tk ver 8.0 or higher.
 #endif
 #include "tkInt.h"
 #include "tkWinInt.h"
