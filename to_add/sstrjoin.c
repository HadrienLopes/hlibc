#include "libft.h"

char *sstrjoin(char *str, char *str2)
{
    char    *strjoin;

    if (!str && !str2)
        return (NULL);
    if (!(strjoin = (char*)malloc(sizeof(char) *
        (ft_strlen(str) + ft_strlen(str2) + 1))))
        return (NULL);
    if (str)
    {
        ft_strcpy(strjoin, str);
        if (str2)
            ft_strcat(strjoin, str2);
    }
    else if (str2)
        ft_strcpy(strjoin, str2);
    return (strjoin);
}
