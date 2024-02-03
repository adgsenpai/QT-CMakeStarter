# MyQtProject

MyQtProject is a simple Qt application that demonstrates a basic form with a "Hello World" label. This project is built using CMake and Qt5.

## Prerequisites

Before building and running this project, ensure you have the following installed:

- Qt5
- CMake (version 3.10 or higher)
- A C++ compiler compatible with C++11 standards (e.g., GCC, Clang, MSVC)

Ensure that the `Qt5_DIR` environment variable is set to the path of your Qt5 installation or adjust the `CMakeLists.txt` to include the correct path to the Qt5 package.

## Building the Project

To build the project, follow these steps:

1. Clone or download this project to your local machine.
2. Open a terminal or command prompt.
3. Navigate to the project directory.
4. Create a new directory for the build files (if it doesn't already exist):

   ```sh
   mkdir build
   cd build
   ```

5. Configure the project with CMake:

   ```sh
   cmake ..
   ```

6. Build the project:

   For a generic build system (e.g., Unix Makefiles):

   ```sh
   cmake --build . --config Release
   ```

   For Visual Studio, you can also open the generated `.sln` file and build the project from the IDE.

## Running the Application

After the build completes, you can find the executable in the `build` directory under the corresponding configuration subdirectory (e.g., `Release` or `Debug`).

- On Linux/macOS, you can run the application from the terminal:

  ```sh
  ./MyQtApp
  ```

- On Windows, navigate to the executable in File Explorer and double-click it, or run it from the command prompt:

  ```cmd
  .\Release\MyQtApp.exe
  ```

## Support

For support, please open an issue in the project repository or contact the maintainers directly.