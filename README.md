# Libft - 42 School Project 💻

## Table of Contents 📜

- [Introduction](#introduction)
- [Functions Implemented](#functions-implemented)
- [Installation](#installation)


## Introduction 📚

**Libft** is a custom implementation of several C standard library functions, along with additional utilities that can be useful for future projects. This library is developed as part of the curriculum at [42 School](https://www.42.fr/), and serves as a foundation for future projects that require similar functionality.

The goal of this project is to build a personal library of reusable code in C and gain a deep understanding of how certain standard library functions work internally. 🛠️

## Functions Implemented 🧑‍💻

This project includes several types of functions:
- **Libc Functions:** Reimplementation of functions from `<ctype.h>`, `<string.h>`, and `<stdlib.h>`, such as:
  - `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`
  - `ft_strlen`, `ft_strdup`, `ft_strchr`, `ft_strrchr`
  - `ft_strncmp`, `ft_atoi`, `ft_isalpha`, `ft_isdigit`, `ft_tolower`, `ft_toupper`, etc.

- **Additional Functions:** These are functions not included in the standard C library but useful for future projects:
  - `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`
  - `ft_itoa`, `ft_strmapi`, `ft_striteri`, `ft_putchar_fd`, etc.

- **Bonus Part:** Implementation of a simple linked list structure:
  - `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`
  - `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`


## Installation ⚙️

To compile the library, clone this repository and use the `Makefile`:

```bash
git clone git@github.com:AnnLvu/libft_42.git
cd libft
make      # Compiles the library ⚒️
make bonus  # Compiles the bonus part 🚀

