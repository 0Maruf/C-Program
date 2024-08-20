#include<stdio.h>
int main ()
{
    char ch ;
    printf("Enter Any character =");
    scanf("%c",&ch);


    if (ch>='A'&& ch<='Z')
        printf("CApital letter ");
    else if (ch>='a'&& ch<='z')
        printf("Small letter ");
        else
            printf("Not a letter ");
        getch();

}
