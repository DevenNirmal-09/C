#include<stdio.h>
#include<string.h>
int main()
{
    int ch,a;
    char s1[30],s2[30];
    printf("Enter a string :- ");
    gets(s1);
    printf("1- Length of a string \n2- Reverse string\n3- Compare two strings");
    printf("\n4- Copy one string into another string\n5- Concatenate two strings");
    printf("\nEnter your choise :- ");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        printf("The length of string  :- %d",strlen(s1));
        break;
    case 2:
        printf("The reverse of string is :- ");
        puts(strrev(s1));
        break;
    case 3:
        a=strcmp(strrev(s1),s1);
        if(a)
            printf("The string are equal ");
        else
            printf("The string are not same ");
        break;
    case 4:
        s2[1]='\0';
        strcpy(s2,s1);
        printf("copied string :- ");
        puts(s2);
        break;
    case 5:
        strcpy(s2,s1);
        strcat(s1,s2);
        printf("Concated string :- ");
        puts(s1);
        break;
    default:
        printf("Invalid choise ");
    }
    printf("\n\nCreated by 23CE079");
}
