#include <stdio.h>
int main()
{

    char str1[100], str2[100];
    gets(str1);
    gets(str2);

    int i, length = 0;
    for (i = 0; str1[i] != '\0'; i++)
    {

        length++;
    }
    str1[length] = ' ';
    length++;

    for (int j = 0; str2[j] != '\0'; j++, length++)
    {

        str1[length] = str2[j];
    }
    str1[length] = '\0';
    puts(str1);
}