#include <stdlib.h>
#include "headers/libftprintf.h"

int main(void)
{
    char c;
    char const *source1 = "HELLO";
    char const *source2 = " WORLD";
    char *results1s2;

    c = 'x';
    ft_printf("%d\n", ft_printf("this is a char %c to upper %c \n", c, ft_toupper(c)));
    ft_printf("\n joins two strings passed as a parameter and returns a new string with malloc\n");
    results1s2 = (char *)ft_strjoin(source1, source2);
    ft_printf("%s and %s passed in my function returns: \n%s\n", source1, source2, results1s2);
    free(results1s2);

    return (0);
}

