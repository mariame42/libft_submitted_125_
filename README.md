# libft_submitted_125_
my first own library -> first project in 42 -> written in 'c'

## Libft Functions Overview

### Part 1: Standard C Library Functions (Reimplemented)
|------------------|------------------------|
| Existing Function| Custom Implementation  |
|------------------|------------------------|
| isalpha          | ft_isalpha             |
| isdigit          | ft_isdigit             |
| isalnum          | ft_isalnum             |
| isascii          | ft_isascii             |
| isprint          | ft_isprint             |
| strlen           | ft_strlen              |
| memset           | ft_memset              |
| bzero            | ft_bzero               |
| memcpy           | ft_memcpy              |
| memmove          | ft_memmove             |
| strlcpy          | ft_strlcpy             |
| strlcat          | ft_strlcat             |
| toupper          | ft_toupper             |
| tolower          | ft_tolower             |
| strchr           | ft_strchr              |
| strrchr          | ft_strrchr             |
| strncmp          | ft_strncmp             |
| memchr           | ft_memchr              |
| memcmp           | ft_memcmp              |
| strnstr          | ft_strnstr             |
| atoi             | ft_atoi                |
| calloc           | ft_calloc              |
| strdup           | ft_strdup              |
|------------------|------------------------|

### Part 2: Additional Utility Functions
|-----------------|--------------------------------------------------------------------------|
| Function        | Description                                                              |
|-----------------|--------------------------------------------------------------------------|
| ft_substr       | Extracts a substring from a string.                                      |
| ft_strjoin      | Joins two strings into a new string.                                     |
| ft_strtrim      | Trims specified characters from the beginning and end of a string.       |
| ft_split        | Splits a string into an array of substrings based on a delimiter.        |
| ft_itoa         | Converts an integer to a string.                                         |
| ft_strmapi      | Applies a function to each character of a string, creating a new string. |
| ft_striteri     | Applies a function to each character of a string in-place.               |
| ft_putchar_fd   | Writes a character to a file descriptor.                                 |
| ft_putstr_fd    | Writes a string to a file descriptor.                                    |
| ft_putendl_fd   | Writes a string followed by a newline to a file descriptor.              |
| ft_putnbr_fd    | Writes an integer to a file descriptor.                                  |
|-----------------|--------------------------------------------------------------------------|

### Part 3: Bonus - Linked List Functions
|-----------------|--------------------------------------------------------------------------------|
| Function        | Description                                                                    |
|-----------------|--------------------------------------------------------------------------------|
| ft_lstnew       | Creates a new list node.                                                       |
| ft_lstadd_front | Adds an node at the beginning of a list.                                       |
| ft_lstsize      | Returns the number of nodes in a list.                                         |
| ft_lstlast      | Returns the last node of a list.                                               |
| ft_lstadd_back  | Adds an node at the end of a list.                                             |
| ft_lstdelone    | Deletes an node and frees its content.                                         |
| ft_lstclear     | Deletes and frees an entire list.                                              |
| ft_lstiter      | Applies a function to each node of a list.                                     |
| ft_lstmap       | Creates a new list by applying a function to each node of an existing list.    |
|-----------------|--------------------------------------------------------------------------------|
