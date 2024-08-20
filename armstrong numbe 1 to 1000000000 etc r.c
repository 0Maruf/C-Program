#include<stdio.h>
int main ()
{
    int num,temp,r,sum=0,initialNum,finalNum,i;
    printf("Enter initialNum Number : ");
    scanf("%d",&initialNum);

    printf("Enter finalNum Number : ");
    scanf("%d",&finalNum);

    for (i=initialNum; i<=finalNum; i++)
    {
        temp=i;
        while(temp!=0)
        {
            r=temp%10;
            sum=sum+r*r*r;
            temp=temp/10;
        }
        if (sum==i)
        {
            printf("Armstrong Number's = %d\n",i);
        }
        sum=0;
    }




    getch();
}
