// HAVE_ATTRIBUTE_PACKED

/* Check for the __attribute__((packed)) attribute.
 *
 * Available on Linux/glibc, MacOS, and Windows including MinGW. Not
 * available on MSVC.
 */

#undef HAVE_ATTRIBUTE_PACKED

#if defined(__GNUC__) || defined(__clang__)
#  define HAVE_ATTRIBUTE_PACKED 1
#endif
