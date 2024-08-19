#include<stdio.h>
int main ()
{
    int num[]= {12,14};
    int lengthOfArray= sizeof (num)/ sizeof(num[0]);
    if (lengthOfArray<2)
    {
        printf("Array should have at last 2 element. \n");

    }
    int first,second;
    if (num[1]>num[0])
    {
        first=num[1];
        second=num[0];
    }
    else
    {
        first=num[0];
        second=num[1];
    }
    printf("First lergest number : %d\n",first);
    printf("second lergest number : %d\n",second);

    getch();
}
