#include <stdio.h>
int main()
{

    char str1[100];
    gets(str1);
    int i, length = 0;
    for (i = 0; str1[i] != '\0'; i++)
    {

        length++;
    }
    char str2[100];
    int j;
    for (i = length - 1; i >= 0; i--)
    {

        str2[j] = str1[i];
        j++;
    }
    str2[j] = '\0';
    puts(str2);
}