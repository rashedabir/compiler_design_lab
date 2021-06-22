#include <stdio.h>
#include <stdlib.h>

void checkComment(char);
void blockComment();
void linecom();
void space();

FILE *f1, *f2;

int main()
{
    f1 = fopen("input.txt", "r");
    f2 = fopen("output.txt", "w");
    char c;

    while ((c = fgetc(f1)) != EOF)
    {
        checkComment(c);
    }

    fclose(f1);
    fclose(f2);
    return 0;
}

void checkComment(char c)
{
    char d, h;
    if (c == '/')
    {
        d = fgetc(f1);
        if (d == '*')
        {
            blockComment();
        }
        else if (d == '/')
        {
            linecom();
        }

        else
        {
            fputc(c, f2);
            fputc(d, f2);
        }
    }
    else if (c == ' ')
    {
        h = fgetc(f1);
        if (h == ' ')
        {
            fputc(c, f2);
            space();
        }
        else
        {
            fputc(c, f2);
            fputc(h, f2);
        }
    }
    else
    {
        fputc(c, f2);
    }
}

void space()
{
    char i;
    while ((i = fgetc(f1)) != EOF)
    {
        if (i == ' ')
        {
        }
        else
        {
            fputc(i, f2);
            break;
        }
    }
}

void linecom()
{
    char g;
    while ((g = fgetc(f1)) != EOF)
    {
        if (g == '\n')
        {
            break;
        }
    }
}

void blockComment()
{
    char e, f;

    while ((e = fgetc(f1)) != EOF)
    {

        if (e == '*')
        {
            f = fgetc(f1);
            if (f == '/')
            {
                return;
            }
        }
    }
}