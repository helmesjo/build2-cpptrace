// HAVE_MACH_MACH_VM_H : BUILD2_AUTOCONF_LIBC_VERSION

#ifndef BUILD2_AUTOCONF_LIBC_VERSION
#  error BUILD2_AUTOCONF_LIBC_VERSION appears to be conditionally included
#endif

/* Check for the <mach/mach_vm.h> header.
 * Provides the 64-bit-capable Mach virtual memory API (mach_vm_region(),
 * etc.).
 *
 * Available on Mac OS X 10.0 and later. Not available on Linux or Windows
 * including MinGW.
 */

#undef HAVE_MACH_MACH_VM_H

#if BUILD2_AUTOCONF_MACOS_PREREQ(10, 0)
#  define HAVE_MACH_MACH_VM_H 1
#endif
