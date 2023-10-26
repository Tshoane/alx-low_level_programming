 0x14-bit_manipulation

This is a C programming project that focuses on bit manipulation techniques. It provides a set of functions for working with individual bits and manipulating binary data. The project covers several tasks, each with its own requirements and functions.

## Project Details

- **Author**: Julien Barbier
- **Weight**: 1
- **Project Start**: October 26, 2023, 6:00 AM
- **Project End**: October 27, 2023, 6:00 AM
- **Checker Release**: October 26, 2023, 12:00 PM
- **Auto Review**: Will be launched at the deadline

## Learning Objectives

By completing this project, you are expected to achieve the following learning objectives:

- Look for the right source of information without excessive help.
- Understand how to manipulate bits and use bitwise operators.

## Copyright and Plagiarism

This project is meant for you to come up with solutions on your own to meet the learning objectives. Copying and pasting someone else's work or publishing the project content is strictly prohibited and can result in removal from the program.

## Requirements

### General

- Allowed editors: vi, vim, emacs
- Compilation on Ubuntu 20.04 LTS using `gcc` with specific options (`-Wall -Werror -Wextra -pedantic -std=gnu89`)
- All files should end with a newline
- A `README.md` file at the root of the project folder is mandatory
- Code should follow the Betty style, and it will be checked using `betty-style.pl` and `betty-doc.pl`
- No usage of global variables
- Each file should contain no more than 5 functions
- The only allowed C standard library functions are `malloc`, `free`, and `exit`
- Allowed to use `_putchar`
- Do not include `putchar.c` as it will be provided separately
- Prototypes of all functions and `_putchar` should be included in the `main.h` header file
- Use include guards for header files

## Tasks

The project consists of the following tasks:

1. **0-binary_to_uint.c**: Write a function to convert a binary number to an unsigned integer.

2. **1-print_binary.c**: Create a function that prints the binary representation of a number.

3. **2-get_bit.c**: Implement a function to get the value of a bit at a given index.

4. **3-set_bit.c**: Write a function to set the value of a bit to 1 at a given index.

5. **4-clear_bit.c**: Create a function to set the value of a bit to 0 at a given index.

6. **5-flip_bits.c**: Implement a function that returns the number of bits that need to be flipped to get from one number to another.

Each task has specific requirements and examples for you to complete.

## Usage

To compile and test the provided examples for each task, you can use the provided `main.c` files. However, note that you don't need to push these files to your repository, as they won't be taken into account during the evaluation.

Compile the tasks using a command similar to:

```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-binary_to_uint.c -o 0-binary_to_uint
Then, run the compiled program.

Additional Information
For more details and the full project, please visit the GitHub repository:

GitHub Repository: alx-low_level_programming
Directory: 0x14-bit_manipulation
