// HAVE_DLADDR1 : BUILD2_AUTOCONF_LIBC_VERSION

/* Check for dladdr1() in <dlfcn.h>.
 *
 * Available in glibc since 2.3.3. Fallback when _dl_find_object() is not
 * available. Not used on macOS (different dladdr behavior) or Windows.
 */

#undef HAVE_DLADDR1

#if BUILD2_AUTOCONF_GLIBC_PREREQ(2, 3) && !BUILD2_AUTOCONF_GLIBC_PREREQ(2, 35)
#  define HAVE_DLADDR1 1
#endif