#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char str[] = "Look up!\n";
    char *ptr;

    printf("%s", str);
    ptr = string_toupper(str);
    printf("%s", ptr);
    return (0);
}
