#include <stdio.h>
FILE *file1, *file2;
void checkcomment(char);
void blockcomment();
void linecomment();
int main()
{
    char c;
    file1 = fopen("input03.txt", "r");
    file2 = fopen("output03.txt", "w");
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
        if (d == '*')
        {
            blockcomment();
        }
        else if (d == '/')
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

void blockcomment()
{
    char e, f;
    while ((e = fgetc(file1)) != EOF)
    {
        if (e == '*')
        {
            f = fgetc(file1);
            if (f = '/')
            {
                return;
            }
        }
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