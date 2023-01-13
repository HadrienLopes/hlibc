#include "libft.h"

char *strnewcpy(const char *src)
{
    char *str;

    if (!src)
        return (NULL);
    if (!(str = (char*)malloc(sizeof(char) * (ft_strlen(src) + 1))))
        return (NULL);
    str = ft_strcpy(str, src);
    return (str);
}
