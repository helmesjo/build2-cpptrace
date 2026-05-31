# cpptrace - Portable C++ stacktrace library

`cpptrace` is a portable C++ stacktrace library supporting C++11 and later on
Linux, macOS, and Windows.

This file contains setup instructions and other details that are more
appropriate for development rather than consumption. If you want to use
`cpptrace` in your `build2`-based project, then instead see the accompanying
package [`README.md`](libcpptrace/README.md) file.

The development setup for `cpptrace` uses the standard `bdep`-based workflow.
For example:

```
git clone .../cpptrace.git
cd cpptrace

bdep init -C @gcc cc config.cxx=g++
bdep update
bdep test
```
