# OpenGL Program Setup Guide

This guide will walk you through the steps required to set up and run an OpenGL program on your system.

## Prerequisites

Before proceeding, ensure you have the following prerequisites installed:

- [Homebrew](https://brew.sh/) (for macOS users)

## Installation

You need to install 2 packages `glfw` and `freeglut`. Follow the steps below to install them:

1. Open your terminal.
2. Run the following commands:
* `brew install glfw`
* `brew install freeglut`

## Running the Program

Once you have installed the necessary packages, you can run the program. Follow these steps:

1. Write your code at the main.cpp file
2. In the `main.cpp` file, ensure that the paths to `glut.h` and `glfw3.h` are correctly set according to the installed locations. They may vary depending on your system setup.
3. Open your terminal.
4. Navigate to the directory containing the Makefile.
5. Type the following command and press Enter: `make`


This command will compile and run the OpenGL program.


### Note:
- The file paths in `main.cpp` might need to be adjusted according to the installed location of `freeglut` and `glfw`. You can find the installation folder when they are installed using Homebrew. The location is typically displayed after running `brew cleanup` or during the installation process.


## Additional Notes

- Ensure you have the necessary permissions to install packages using Homebrew.
- If you encounter any issues during installation or execution, refer to the respective documentation for `glfw` and `freeglut`.

Now you're ready to enjoy your OpenGL program! 🎉

---

*Guide provided by Mikiyas*
