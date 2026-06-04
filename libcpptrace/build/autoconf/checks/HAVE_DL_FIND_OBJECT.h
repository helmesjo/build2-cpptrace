// HAVE_DL_FIND_OBJECT : BUILD2_AUTOCONF_LIBC_VERSION

/* Check for _dl_find_object() in <dlfcn.h>.
 *
 * Added in glibc 2.35. Used by cpptrace on Linux for fast object lookup.
 * Not available on macOS, Windows, or MinGW.
 */

#undef HAVE_DL_FIND_OBJECT

#if BUILD2_AUTOCONF_GLIBC_PREREQ(2, 35)
#  define HAVE_DL_FIND_OBJECT 1
#endif