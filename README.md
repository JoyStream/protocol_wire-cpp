# protocol_wire-cpp
C++ wire library for the JoyStream extension protocol, as specified [here](http://#).

## Tools

- [Conan](http://conan.io)
- CMake

## Use

The easiest way to use the library in your own project is to use Conan. For more information, see the [readme](https://github.com/JoyStream/protocol_wire-conan)
on the repo for this package recipe.

## Build

If you instead want to build it directly, then you first have to install the dependencies of this
library using Conan, which you do by simply doing the following inside of your desired build directory

`conan install <path>`

where `<path>` is the path to protcol_wire source directory. Then, in the same directory, invoke CMake

```
cmake <path>
cmake --build .
```

No path is required if you are building directly in the source directory.

## Tests

To build the tests, just pass option `build_tests=on` in the makefile generation step

```
cmake <path> -Dbuild_tests=on
cmake --build .
```

and then you can run the resulting test binary `test_main` in the `bin` folder.

## License and copyright
WIP
