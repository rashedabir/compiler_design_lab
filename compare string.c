#include <stdio.h>
int main()
{
    char str1[100], str2[100];
    int res;

    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    int i = 0;

    while (str1[i] == str2[i])
    {
        if (str1[i] == '\0' && str2[i] == '\0')
            break;
        i++;
    }
    res = str1[i] - str2[i];

    if (res == 0)
    {
        printf("Same");
    }
    else
    {
        printf("Not Same");
    }

    return 0;
}