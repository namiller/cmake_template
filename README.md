# CMAKE project layout

Here is an example of how I lay out my cmake project to offer flexibility and convenience in testing, library development and functionality demonstration

## Layout
<pre>
+-- build/                -- <b>cd</b> here and <b>cmake ..</b> to avoid poluting workspace.
+-- CMakeLists.txt        -- Configure project output location variables and load subprojects
+-- sub1/                 -- a user written library (integer addition)
|  +-- CMakeLists.txt     -- Compile library and copy headers to group loc. (also load test subproject)
|  +-- src/               -- source files (could contain multiple files)
|  |  +-- first.cpp       -- library function definition 
|  +-- include/           -- header files (could contain multiple files)
|  |  +-- first.h         -- header function declaring library api
|  +-- test/              -- unit tests for library functionality
|  |  +-- CMakeLists.txt  -- Locate dependencies (GTest) compile and add test
|  |  +-- main.cpp        -- test (depends on GTest)
+-- sub2/                 -- a user written library that depends on sub1 (buggy integer multiplication)
|  +-- CMakeLists.txt     -- Compile library and copy headers to group loc. (also load test subproject and link to sub1)
|  +-- src/               -- source files
|  |  +-- second.cpp      -- library function definition (imports sub1/first.h as expected)
|  +-- include/           -- header files
|  |  +-- first.h         -- header function declaring library api
|  +-- test/              -- unit tests for library functionality (note that one test will fail here)
|  |  +-- CMakeLists.txt  -- Locate dependencies (GTest) compile and add test
|  |  +-- main.cpp        -- test (depends on GTest)
+-- test/                 -- integration tests.
|  +-- CMakeLists.txt     -- Locate dependencies (GTest) compile and link
|  +-- main.cpp           -- test everything together
+-- exec1/                -- contains a demonstrational executable that depends on sub1 and sub2
|  +-- CMakeLists.txt     -- compile executable and link to the library products
|  +-- main.cpp           -- entry point for executable product
</pre>

## Usage
### Installation
Install [GTest](https://github.com/google/googletest) testing suite
```bash
sudo apt-get install libgtest-dev
cd /usr/src/gtest
sudo cmake CMakeLists.txt
sudo make
sudo cp *.a /usr/lib
```
Clone this repository
```bash
git clone https://github.com/namiller/cmake_template.git
```
### Demonstration
```bash
cd cmake_template
mkdir build
cd build
cmake ..
make
make test
```

## Adaption
If you would like to use this architecture in your own projects there are a number of locations were changes will need to be made. These have been marked with TODO comments describing the significance of the changes. In general this layout supports projects that have a set of same level library modules with potentially intertwining dependencies, with unit and integration tests as well as executibles that depend on the libraries.

If external dependencies exist, they must also be linked similarly to how GTest is linked in the test files.

An important note is that the references in this example to sub1 and sub2 are references to the project names (as defined by the project(NAME) lines of the cmake files) rather than to the names of the library directories which are only need to match the add_subdirectory(NAME) lines of the top level CMakeLists.txt file. 
