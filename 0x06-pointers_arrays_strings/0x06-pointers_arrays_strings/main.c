#include <stdio.h>

char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);

int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char s3[98] = "Hello ";
    char s4[] = "World!\n";
    char *ptr;

    printf("%s\n", s1);
    printf("%s\n", s2);
    ptr = _strcat(s1, s2);
    printf("%s\n", ptr);
    ptr = _strncat(s3, s4, 1);
    printf("%s\n", ptr);


    return (0);
}

