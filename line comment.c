#include <stdio.h>
FILE *file1, *file2;
void checkcomment(char);
void linecomment();
int main()
{
    char c;
    file1 = fopen("input01.txt", "r");
    file2 = fopen("output01.txt", "w");
    while ((c = fgetc(file1)) != EOF)
    {
        printf("%c", c);
        checkcomment(c);
    }

    fclose(file1);
    fclose(file2);
}
void checkcomment(char c)
{
    char d;
    if (c == '/')
    {
        d = fgetc(file1);
        if (d == '/')
        {
            linecomment();
        }

        else
        {
            fputc(c, file2);
            fputc(d, file2);
        }
    }
    else
    {
        fputc(c, file2);
    }
}
void linecomment()
{
    char e;
    while ((e = fgetc(file1)) != EOF)
    {
        if (e == '\n')
        {
            return;
        }
    }
}