# C - Makefiles

## Description

This project aims to provide an understanding of make and Makefiles, including their purposes, usage, rules, variables, and common conventions. It involves creating a Makefile to compile C files.

## Learning Objectives

By completing this project, you should be able to:

- Explain the concepts of make and Makefiles.
- Understand when, why, and how to use Makefiles.
- Define rules and utilize them effectively.
- Differentiate between explicit and implicit rules.
- Identify and apply common and useful rules.
- Work with variables within Makefiles.

## Requirements

### General

- **Allowed editors:** vi, vim, emacs
- **OS:** Ubuntu 20.04 LTS
- **Version of gcc:** 9.3.0
- **Version of make:** GNU Make 4.2.1
- All files should end with a new line.
- A README.md file, at the root of the folder of the project, is mandatory.

## Resources

Before starting the project, familiarize yourself with the following:

- What is a makefile and how does it work
- Installing the make utility
- [make - official documentation](https://www.gnu.org/software/make/manual/make.html)
- More about Makefile

## Files

In this project, we'll be working with the following files:

- (List the files here)

## Usage

To compile the C files in this project, follow these steps:

1. Clone this repository to your local machine.
2. Navigate to the project directory.
3. Open a terminal.
4. Run the `make` command.

## Example Makefile

```make
CC = gcc
CFLAGS = -Wall -Wextra -Werror -pedantic -std=c99
TARGET = your_program_name

SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJS)
    $(CC) $(CFLAGS) $^ -o $@

%.o: %.c
    $(CC) $(CFLAGS) -c $< -o $@

clean:
    rm -f $(OBJS) $(TARGET)
```

## Support

If you have any questions or need assistance, please contact [your_contact_info].

## License

This project is licensed under the [License Name] License - see the [LICENSE](LICENSE) file for details.

---

Replace `[your_program_name]`, `[your_contact_info]`, and `[License Name]` with relevant information specific to your project.
