# Printf Simplified

A lightweight implementation of the `printf` function in C, adding simplicity and style to your projects.

## Overview

The `_printf` function, featured in `main.h`, replicates the behavior of the standard `printf`. It manages format strings and variable arguments, offering a streamlined alternative.

## Usage

Include `main.h` in your C program and seamlessly call `_printf` with the desired format string and arguments.

## Supported Formats

- `%c`: Character
- `%s`: String
- `%%`: Percent sign (literal)
- `%d %i`: Integer
- (Include more formats as needed)

## Return

Provides the count of bytes written to the standard output. If an error occurs, it gracefully returns -1.

