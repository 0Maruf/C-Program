#include<stdio.h>
int main ()
{
    while(1){
    int num,sum=0,rem,temp,fact,i;
    printf("Enter any Integer : ");
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
        rem=temp%10;
        fact=1;
        for (i=1; i<=rem; i++)
        {
            fact=fact*i;
        }

        sum=sum+fact;
        temp=temp/10;
    }
    if (sum==num)
    {
        printf("%d Strong number \n",num);

    }
    else
    {

        printf("%d not strong \n");
    }
    }
    getch();
}
