<div align="center">

# LIBFT (42)
</div>

## List of all functions implementated
> [!NOTE]
> - :white_check_mark: - Fully implemented library.
> - :construction: - Under construction library.

<details>
<summary>ctype :white_check_mark:</summary>

```c++
int h_isalnum(int c);
```
```c++
int h_isalpha(int c);
```
```c++
int h_isblank(int c);
```
```c++
int h_iscntrl(int c);
```
```c++
int h_isdigit(int c);
```
```c++
int h_isgraph(int c);
```
```c++
int h_islower(int c);
```
```c++
int h_isprint(int c);
```
```c++
int h_ispunct(int c);
```
```c++
int h_isspace(int c);
```
```c++
int h_isupper(int c);
```
```c++
int h_isxdigit(int c);
```
```c++
int h_tolower(int c);
```
```c++
int h_toupper(int c);
```
</details>


<details>
<summary>stdlib :construction:</summary>

```c++
int  h_atoi(const char *nptr);
```
</details>

<details>
<summary>stdio :construction:</summary>

```c++
int h_printf(const char * restrict format, ...);
```
</details>

<details>
<summary>string :construction:</summary>

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
char	*h_strchr(char *s, int c);
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

```c++
void  *h_memset(void *s, int c, size_t n);
```
</details>
