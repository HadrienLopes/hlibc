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
After compiling the library, the makefile creates an **include** directory.  
Add the static library (**libhlic.a**) and the **include** directory to your project, and use the following command:

```fish
$> gcc main.c -I ./include -L ./hlibc
```
> [!IMPORTANT]
> The library is only available in static version for the moment.

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
