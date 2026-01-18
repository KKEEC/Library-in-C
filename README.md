# Library in C

A modular C library containing reusable utility functions and data structures, designed to be linked into other C projects.  
This project focuses on clean code organization, header/source separation, and Makefile-based builds — essential skills for system-level C development.

---

## 📌 Overview

This repository implements a small C library structured for reuse across multiple projects. It demonstrates how to:

- Organize C code into reusable modules
- Separate headers and source files
- Compile and link code using a Makefile
- Use a custom C library in another project


▶️ Usage

This library is intended to be used by including its header files in a C project and linking the compiled library during the build process.
Once linked, the library’s functions can be called directly from application code, allowing common utilities and functionality to be reused across multiple programs.
An example implementation is provided in main.c, demonstrating how to include the library header and invoke its functions within a standard C application.

