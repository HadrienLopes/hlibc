#include "libft.h"

void free_mat(void **mat, int max)
{
    int i;

    i = 0;
    while (i < max)
    {
        free(mat[i]);
        i++;
    }
    free(mat);
}

char *strvarg(int arg, ...)
{
    int i;
    int total_len;
    char *str;
    char **str_table;
    va_list ap;

    i = 0;
    total_len = 0;
    va_start(ap, arg);
    str_table = (char**)malloc(sizeof(char*) * arg);
    while (i < arg)
    {
        str = va_arg(ap, char*);
        total_len += ft_strlen(str); //to call to ft_strlen (slow method)
        str_table[i] = (char*)malloc(sizeof(char) * (ft_strlen(str) + 1));
        str_table[i] = ft_strcpy(str_table[i], str);
        i++;
    }
    va_end(ap);
    str = (char*)malloc(sizeof(char) * (total_len + 1));
    str = ft_strcpy(str, str_table[0]);
    i = 1;
    while (i < arg)
    {
        str = ft_strcat(str, str_table[i]);
        i++;
    }
    free_mat((void**)str_table, arg);
    return (str);
}
