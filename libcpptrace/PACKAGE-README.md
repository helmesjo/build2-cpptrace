# libcpptrace - Portable C++ stacktrace library

This is a `build2` package for the [`cpptrace`](https://github.com/jeremy-rifkin/cpptrace)
C++ library. It provides simple, portable stacktraces for C++11 and later on
Linux, macOS, and Windows.


## Usage

To start using `libcpptrace` in your project, add the following `depends`
value to your `manifest`, adjusting the version constraint as appropriate:

```
depends: libcpptrace ^1.0.4
```

Then import the library in your `buildfile`:

```
import libs = libcpptrace%lib{cpptrace}
```


## Importable targets

This package provides the following importable targets:

```
lib{cpptrace}
```

The `lib{cpptrace}` target provides the C++ API via `<cpptrace/cpptrace.hpp>`
and the C API via `<ctrace/ctrace.h>`. A C++20 module interface is also
available as `import cpptrace;`.


## Configuration variables

This package provides the following configuration variables to select back-ends
for the three internal subsystems. Defaults are chosen automatically based on
the target platform.

**Stack unwinding** (select one):

```
[bool] config.libcpptrace.unwind_with_unwind    ?= ...  # default on Linux/macOS
[bool] config.libcpptrace.unwind_with_execinfo  ?= false
[bool] config.libcpptrace.unwind_with_dbghelp   ?= ...  # default on Windows
[bool] config.libcpptrace.unwind_with_winapi    ?= false
[bool] config.libcpptrace.unwind_with_libunwind ?= false
[bool] config.libcpptrace.unwind_with_nothing   ?= false
```

**Symbol resolution** (select one):

```
[bool] config.libcpptrace.symbols_with_addr2line    ?= ...  # default on Linux/macOS and MinGW
[bool] config.libcpptrace.symbols_with_dbghelp      ?= ...  # default on MSVC/clang-cl
[bool] config.libcpptrace.symbols_with_libdwarf     ?= false
[bool] config.libcpptrace.symbols_with_libbacktrace ?= false
[bool] config.libcpptrace.symbols_with_libdl        ?= false
[bool] config.libcpptrace.symbols_with_nothing      ?= false
```

**Demangling** (select one):

```
[bool] config.libcpptrace.demangle_with_cxxabi  ?= ...  # default on Linux/macOS and MinGW
[bool] config.libcpptrace.demangle_with_winapi  ?= ...  # default on MSVC/clang-cl
[bool] config.libcpptrace.demangle_with_nothing ?= false
```
