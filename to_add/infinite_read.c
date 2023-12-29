#include "libft.h"

char *infinite_read()
{
    ssize_t ret;
    char    *str;
    char    *str_tmp;
    char    buff[BUFF_SIZE];

    str = NULL;
    while ((ret = read(0, buff, BUFF_SIZE - 1)))
    {
        if (ret == -1)
        {
            free(str);
            return (NULL);
        }
        if (buff[ret - 1] == '\n')
            buff[ret - 1] = '\0';
        else
            buff[ret] = '\0';
        str_tmp = str;
        str = sstrjoin(str, buff);
        free(str_tmp);
        if (!str || buff[ret - 1] == '\0')
            break ;
    }
    return (str);
}
