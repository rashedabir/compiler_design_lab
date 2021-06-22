#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    FILE *file1, *file2;
    char c;
    file1 = fopen("input.txt", "r");
    file2 = fopen("output.txt", "w");
    while ((c = fgetc(file1)) != EOF)
    {
        if (c != '\t')
        {
            fputc(c, file2);
        }
        if (c == ' ')
        {
            while ((c = fgetc(file1)) == ' ' || c == '\t')
            {
            }
            fputc(c, file2);
        }
    }
    fclose(file1);
    fclose(file2);
}