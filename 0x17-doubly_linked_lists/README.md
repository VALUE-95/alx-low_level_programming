# Doubly Linked List Project

This project involves the implementation of a doubly linked list in C, adhering to specific guidelines and requirements. Please follow the instructions below to ensure the correct development and evaluation of your project.

## Environment

- Development Environment: Ubuntu 20.04 LTS
- Python Version: 3.8.5
- Editors: vi, vim, emacs

## File Structure

- All files should end with a new line.
- Include a mandatory README.md file at the root of the project folder.

## Coding Style

- Code should follow the Betty style.
- Code will be checked using betty-style.pl and betty-doc.pl.

## Programming Language

- Use C for the project.

## Global Variables

- Global variables are not allowed.

## Functions

- Limit the number of functions to no more than 5 per file.

## Standard Library Functions

- Only the following standard library functions are allowed: `malloc`, `free`, `printf`, and `exit`.

## Header File

- Include the prototypes of all functions in a header file named `lists.h`.
- Use include guards in header files.

## Data Structure

- Utilize the provided doubly linked list structure:
```c
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;
```

## Additional Notes

- Main files (e.g., main.c) are provided as examples but won't be considered during evaluation.
- The project might include its own main.c files for compilation.
- Push all header files to the repository.

Follow these guidelines to ensure a standardized and successful implementation of the doubly linked list project.
