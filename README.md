<div align="center">

# HLIBC (C standard library)
</div>

## Objective
The main goal of this project is to provide a comprehensive C standard library that adheres to the standards defined by ISO/IEC 9899:2023.  
This library aims for efficiency by prioritizing optimized algorithms and minimizing extraneous code.

## Project Structure
The project is organized into separate sections, each corresponding to a specific part of the standard, such as "stdio", "stdlib", "string", etc...  
There is a dedicated test directory containing test cases for each library.  
All sources and headers files start with the prefix **h_** to avoid conflicts with the standard C library ("libc"). 


## :book: Wiki
For each library within this project, you can find additional documentation in the Wiki section. The [wiki](../../wiki) provides detailed information, usage examples, and any specific considerations.

## How to compile
```fish
$> git clone https://github.com/HadrienLopes/hlibc.git
$> cd hlibc
$> make
```

## How to use
To use hlibc functions:  
After compiling the library.  
Add the static library (**libhlic.a**) and the **include** directory to your project, and use the following command:

```fish
$> gcc main.c -I ./include -L ./hlibc
```
> [!IMPORTANT]
> The library is only available in static version for the moment.

To run the test do:
```fish
$> make check
```

## List of all libraries implementated
> [!NOTE]
> - :white_check_mark: - Fully implemented library.
> - :construction: - Under construction library.

<details>
<summary>ctype 🚧</summary>

```c++
int isalnum(int c);
```
```c++
int isalpha(int c);
```
```c++
int isascii(int c);
```
```c++
int isdigit(int c);
```
```c++
int isprint(int c);
```
```c++
int tolower(int c);
```
```c++
int toupper(int c);
```
</details>

<details>
<summary>stdio 🚧</summary>

```c++
int printf(const char * restrict format, ...);
```
</details>

<details>
<summary>string 🚧</summary>

```c++
char	*h_strcat(char * restrict s1, const char * restrict s2);
```

```c++
int     h_strcmp(const char *s1, const char *s2);
```

```c++
char	*h_strcpy(char * restrict s1, const char * restrict s2);
```

```c++
char	*h_strdup(const char *s);
```

```c++
size_t	h_strlen(const char *s);
```

```c++
char	*h_strncat(char * restrict s1, const char * restrict s2, size_t n);
```

```c++
char	*h_strncpy(char * restrict s1, const char * restrict s2, size_t n);
```

```c++
char	*h_strndup(const char *s, size_t size);
```

```c++
char	*h_strstr(char *s1, const char *s2);
```

```c++
void	*h_memccpy(void *dest, const void *src, int c, size_t n);
```

```c++
void	*h_memchr(const void *s, int c, size_t n);
```

```c++
int    h_memcmp(const void *s1, const void *s2, size_t n);
```

```c++
void	*h_memcpy(void *dest, const void *src, size_t n);
```

```c++
void	*h_memmove(void *dest, const void *src, size_t n);
```
</details>
