## How to run

1. Install [w64devkit](https://github.com/skeeto/w64devkit) and CMake. Make sure the w64devkit compiler and CMake are available in your terminal.
2. Open a w64devkit terminal and change to the project root (the directory containing `CMakeLists.txt`):

	```sh
	cd path/to/project
	```

3. Configure and build the project:

	```sh
	cmake -S . -B build -G "MinGW Makefiles"
	cmake --build build
	```

	CMake fetches the Raylib version specified in `CMakeLists.txt` during configuration. An internet connection is required for the initial configure.

4. Run the generated executable from the project root:

	```sh
	./build/GameA.exe
	```
