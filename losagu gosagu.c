#include<stdio.h>
int main ()
{
    int num1,num2,n1,n2,rem,lsg,gsg;
    printf("Enter any two Number :");
    scanf("%d %d ",&num1,&num2);

    n1=num1;
    n2=num2;
    while(n2 !=0)
    {
        rem=n1%n2;
        n1=n2;
        n2=rem;
    }
    gsg=n1;
    lsg=(num1*num2)/gsg;
    printf("Gosagu = %d\n",gsg);
    printf("losagu = %d\n",lsg);

    getch();
}
