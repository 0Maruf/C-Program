#include<stdio.h>
int main ()
{

// switch keyword : switch ,  break , case , default .

    int digit;
    printf("Enter Digit =");
    scanf("%d",&digit);

    switch(digit)
    {
    case 0:
        printf("Zero\n");
        break;
    case 1:
        printf("one\n");
        break;
    case 2:
        printf("two\n");
        break;

    case 3:
        printf("There\n");
        break;

    case 4:
        printf("four\n");
        break;

    case 5:
        printf("Five\n");
        break;

        default:
        printf("Invalide digit");




    }
    getch();
}
