# Dog Struct and Functions

This C program defines a `struct dog` data type and provides functions to initialize, print, create, and free dogs. The project is inspired by quotes about dogs.

## Table of Contents

- [Overview](#overview)
- [Tasks](#tasks)
  - [Task 0: Define a New Type `struct dog`](#task-0-define-a-new-type-struct-dog)
  - [Task 1: Initialize a `struct dog`](#task-1-initialize-a-struct-dog)
  - [Task 2: Print a `struct dog`](#task-2-print-a-struct-dog)
  - [Task 3: Define a New Type `dog_t`](#task-3-define-a-new-type-dog_t)
  - [Task 4: Create a New Dog](#task-4-create-a-new-dog)
  - [Task 5: Free Dogs](#task-5-free-dogs)
- [Usage](#usage)
- [Quotes](#quotes)

## Overview

This C program provides a `struct dog` definition and a set of functions to work with `struct dog` instances. These functions include initializing, printing, creating, and freeing dogs. The program uses quotes about dogs to add context and inspiration to the tasks.

## Tasks

### Task 0: Define a New Type `struct dog`

Define a new data type `struct dog` with the following elements:

- `name`, type = `char *`
- `age`, type = `float`
- `owner`, type = `char *`

### Task 1: Initialize a `struct dog`

Write a function to initialize a variable of type `struct dog`. The prototype is as follows:

```c
void init_dog(struct dog *d, char *name, float age, char *owner);
Task 2: Print a struct dog
Write a function that prints the contents of a struct dog. The prototype is as follows:

c
Copy code
void print_dog(struct dog *d);
If an element of d is NULL, print (nil) instead of that element.
Task 3: Define a New Type dog_t
Define a new type dog_t as an alias for the type struct dog.

Task 4: Create a New Dog
Write a function that creates a new dog and returns a pointer to it. The prototype is as follows:

c
Copy code
dog_t *new_dog(char *name, float age, char *owner);
You must store a copy of name and owner.
Return NULL if the function fails.
Task 5: Free Dogs
Write a function to free the memory allocated for a dog. The prototype is as follows:

c
Copy code
void free_dog(dog_t *d);
Usage
Clone this repository.
Compile the C program using your preferred C compiler.
Run the compiled program to see the functions in action.
