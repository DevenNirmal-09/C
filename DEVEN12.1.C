#include <stdio.h>

int main()
{
    FILE *f1,*f2;
    char c;

    f1 = fopen("INPUT.txt","w");

    while ((c = getchar()) != EOF)
    {
        putc(c,f1);
    }

    fclose(f1);

    f1 = fopen("INPUT.txt","r");
    f2 = fopen("Output.txt","w");

    while ((c = getc(f1)) != EOF)
    {
        printf("%c",c);
        putc(c,f2);
    }

    fclose(f1);
}
