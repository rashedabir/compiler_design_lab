#include <stdio.h>
int main()
{
    FILE *file1, *file2;
    char c;
    file1 = fopen("input00.txt", "r");
    file2 = fopen("output00.txt", "w");
    while ((c = fgetc(file1)) != EOF)
    {
        fputc(c, file2);
        if (c == ' ')
        {

            while ((c = fgetc(file1)) == ' ')
            {
            }
            fputc(c, file2);
        }
    }
    fclose(file1);
    fclose(file2);
}