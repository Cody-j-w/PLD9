#include <stdio.h>
#include <stdlib.h>

char *add_stuff(char *str, int num)
{
    int i = 0;

    while (str[i] != '\0')
        i++;
    str[i] = num + '0';
    str[i + 1] = '\0';

    return (str);
}