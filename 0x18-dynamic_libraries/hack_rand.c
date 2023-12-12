#define _GNU_SOURCE
#include <dlfcn.h>
#include <stdio.h>
#include <stdlib.h>

int rand(void) {
    return 9; // Always return 9 instead of generating a random number
}
