#include<stdio.h>
int main ()
{
    int num[]= {12,55,77,80,99,23};
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

    for (int index=2; index<lengthOfArray; index++ ){

        if(num[index]>first){
                second=first;
                first=num[index];


        }
        else if (num[index]>second && num [index]!=first) {
            second=num[index];
        }
    }
    printf("First lergest number : %d\n",first);
    printf("second lergest number : %d\n",second);


    getch();
}
