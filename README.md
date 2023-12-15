<div align="center">

# HLIBC (Hadrien's C standard library)
</div>

## Objective
The main goal of this project is to provide a comprehensive C standard library that adheres to the standards defined by ISO/IEC 9899:2023.

## Project Structure
The project is organized into separate sections, each corresponding to a specific part of the standard, such as "stdio", "stdlib", "string", etc...  
There is a dedicated test directory containing test cases for each library.

## :book: Wiki
For each library within this project, you can find additional documentation in the Wiki section. The [wiki](../../wiki) provides detailed information, usage examples, and any specific considerations.

## How to compile
```fish
$> git clone https://github.com/HadrienLopes/hlibc.git
$> cd hlibc
$> make
```

## How to use
Clone and compile the library on your project, and add the static library.

```fish
$> gcc main.c -L ./lhc
```
> [!IMPORTANT]
> The library is only available in static version for the moment.

## List of all libraries implementated
> [!NOTE]
> - :white_check_mark: - Fully implemented library.
> - :construction: - Under construction library.

<details>
<summary>ctype.h</summary>

```c++
int isalnum(int c);
```
</details>

<details>
<summary>stdio.h 🚧</summary>

```c++
int printf(const char * restrict format, ...);
```
</details>
