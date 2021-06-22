#include <stdio.h>
#include <string.h>
int main()
{
    int i, length, state = 0;
    char str[100];
    printf("Enter The String : ");
    gets(str);
    length = strlen(str);
    for (i = 0; i < length; i++)
    {
        if (state == 0 && str[i] == 'a')
            state = 1;
        else if (state == 0 && str[i] == 'b')
            state = 2;
        else if (state == 1 && str[i] == 'a')
            state = 3;
        else if (state == 1 && str[i] == 'b')
            state = 4;
        else if (state == 2 && str[i] == 'a')
            state = 7;
        else if (state == 2 && str[i] == 'b')
            state = 5;
        else if (state == 3 && str[i] == 'a')
            state = 3;
        else if (state == 3 && str[i] == 'b')
            state = 2;
        else if (state == 4 && str[i] == 'a')
            state = 7;
        else if (state == 4 && str[i] == 'b')
            state = 6;
        else if (state == 5 && str[i] == 'a')
            state = 7;
        else if (state == 5 && str[i] == 'b')
            state = 5;
        else if (state == 6 && str[i] == 'a')
            state = 7;
        else if (state == 6 && str[i] == 'b')
            state = 5;
        else
            state = 7;
    }
    if (state == 0 || state == 1 || state == 2 || state == 3 || state == 4 || state == 5 || state == 6)
    {
        printf("Accepted\n");
    }
    else
        printf("Not Accepted\n");
}