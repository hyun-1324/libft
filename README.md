# LIBFT

This is my implementation of the `libft` project from the 42 curriculum.
The goal of this project is to recreate a custom standard C library by reimplementing essential libc functions and creating additional utility functions for string, memory, and linked list manipulation.

## Features

### Libc Functions

Custom implementations of the following standard C library functions:

- Character checks: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`
- String and memory operations: `ft_strlen`, `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_strlcpy`, `ft_strlcat`
- Character case conversion: `ft_toupper`, `ft_tolower`
- Search and compare: `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_memchr`, `ft_memcmp`, `ft_strnstr`
- Conversion: `ft_atoi`
- Memory allocation: `ft_calloc`, `ft_strdup`

### Additional Functions

More utility functions for string manipulation and I/O:

- Substring and joining: `ft_substr`, `ft_strjoin`, `ft_strtrim`
- String array: `ft_split`
- Conversion: `ft_itoa`
- Function application: `ft_strmapi`, `ft_striteri`
- File descriptor output: `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

### Bonus: Linked List Functions

Custom singly linked list implementation using the `t_list` struct:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
} t_list;
```

## How to Compile

make # builds libft.a
make clean # removes object files
make fclean # removes object files and libft.a
make re # rebuilds everything

## License

This project is licensed under the MIT License.
See the [LICENSE](./LICENSE) file for details.
