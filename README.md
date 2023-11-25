https://camo.githubusercontent.com/2fb5918cb4423554ff932f53e0906381afa9ca2638601a70cd764f493f17fec8/68747470733a2f2f656e637279707465642d74626e302e677374617469632e636f6d2f696d616765733f713d74626e3a414e64394763516231387a6b625565667868364d4151534f66565f3958396932484d555676556c6f4c5126757371703d434155
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

