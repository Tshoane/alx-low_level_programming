# C - More Singly Linked Lists

This project is part of the Holberton School curriculum and focuses on expanding your knowledge and skills related to singly linked lists in C.

## Directory Structure
- `Tests/`: Directory containing test files.
- `lists.h`: Header file containing function prototypes.
- `0-print_listint.c`: C function to print all elements of a listint_t linked list and return the number of nodes.
- `1-listint_len.c`: C function to return the number of elements in a listint_t linked list.
- `2-add_nodeint.c`: C function to add a new node at the beginning of a listint_t linked list.
- `3-add_nodeint_end.c`: C function to add a new node at the end of a listint_t linked list.
- `4-free_listint.c`: C function to free a listint_t linked list.
- `5-free_listint2.c`: C function to free a listint_t linked list and set the head to NULL.
- `6-pop_listint.c`: C function to delete the head node of a listint_t linked list and return its data (n).
- `7-get_nodeint.c`: C function to locate a given node in a listint_t linked list.
- `8-sum_listint.c`: C function to return the sum of all data (n) in a listint_t linked list.
- `9-insert_nodeint.c`: C function to insert a new node at a given position in a listint_t linked list.
- `10-delete_nodeint.c`: C function to delete a node at a given index in a listint_t linked list.
- `100-reverse_listint.c`: C function to reverse a listint_t linked list using a single loop.
- `101-print_listint_safe.c`: C function to print a listint_t linked list safely and return the number of nodes.
- `102-free_listint_safe.c`: C function to free a listint_t linked list safely and return the size of the list that was freed.
- `103-find_loop.c`: C function to find a loop in a listint_t linked list and return the starting node's address.

## Project Tasks

### 0. Print list (0-print_listint.c)
- Description: C function to print all elements of a listint_t linked list and return the number of nodes.
- File: `0-print_listint.c`

### 1. List length (1-listint_len.c)
- Description: C function to return the number of elements in a listint_t linked list.
- File: `1-listint_len.c`

### 2. Add node (2-add_nodeint.c)
- Description: C function to add a new node at the beginning of a listint_t linked list. If the function fails, it returns NULL; otherwise, it returns the address of the new element.
- File: `2-add_nodeint.c`

### 3. Add node at the end (3-add_nodeint_end.c)
- Description: C function to add a new node at the end of a listint_t linked list. If the function fails, it returns NULL; otherwise, it returns the address of the new element.
- File: `3-add_nodeint_end.c`

### 4. Free list (4-free_listint.c)
- Description: C function to free a listint_t linked list.
- File: `4-free_listint.c`

### 5. Free (5-free_listint2.c)
- Description: C function to free a listint_t linked list and set the head to NULL.
- File: `5-free_listint2.c`

### 6. Pop (6-pop_listint.c)
- Description: C function to delete the head node of a listint_t linked list. If the linked list is empty, it returns 0; otherwise, it returns the head node's data (n).
- File: `6-pop_listint.c`

### 7. Get node at index (7-get_nodeint.c)
- Description: C function to locate a given node of a listint_t linked list. If the node does not exist, it returns NULL; otherwise, it returns the located node.
- File: `7-get_nodeint.c`

### 8. Sum list (8-sum_listint.c)
- Description: C function to return the sum of all data (n) of a listint_t linked list. If the linked list is empty, it returns 0; otherwise, it returns the sum of all data (n).
- File: `8-sum_listint.c`

### 9. Insert (9-insert_nodeint.c)
- Description: C function to insert a new node to a listint_t linked list at a given position. If it is not possible to add the new node at index idx or the function fails, it returns NULL; otherwise, it returns the address of the new node.
- File: `9-insert_nodeint.c`

### 10. Delete at index (10-delete_nodeint.c)
- Description: C function to delete the node at a given index of a listint_t linked list. If the function succeeds, it returns 1; if it fails, it returns -1.
- File: `10-delete_nodeint.c`

### 11. Reverse list (100-reverse_listint.c)
- Description: C function to reverse a listint_t linked list using a maximum of one loop and two variables. Returns a pointer to the first node of the reversed list.
- File: `100-reverse_listint.c`

### 12. Print (safe version) (101-print_listint_safe.c)
- Description: C function to print a listint_t linked list safely (i.e., can free lists containing loops) and return the number of nodes.
- File: `101-print_listint_safe.c`

### 13. Free (safe version) (102-free_listint_safe.c)
- Description: C function to free a listint_t linked list safely (i.e., can free lists containing loops) and return the size of the list that was freed. Sets the head to NULL.
- File: `102-free_listint_safe.c`

### 14. Find the loop (103-find_loop.c)
- Description: C function to find the loop contained in a listint_t linked list using a maximum of two variables. If no loop is found, it returns NULL; otherwise, it returns the address of the node where the loop starts.
- File: `103-find_loop.c`

## Usage

To use these functions, include the `lists.h` header in your C code and implement the functions as needed for your application.

## Contributing

Contributions to this project are welcome! If you have suggestions or improvements, please open an issue or create a pull request.

## License

This project is licensed under the MIT License
