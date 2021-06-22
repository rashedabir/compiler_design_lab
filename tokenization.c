#include <stdio.h>
int main()
{
    char str[100] = "I have skill, like:c,c++";
    char *word;
    word = strtok(str, " ,:");
    printf("%s\n", word);

    while (word != '\0')
    {
        word = strtok('\0', " ,:");
        printf("%s\n", word);
    }
}