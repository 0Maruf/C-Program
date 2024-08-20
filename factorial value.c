#include<stdio.h>
int main (){

//1*2*3*4*5=24
//o=1

int i,fact=1,n;
printf("Enter any number :");
scanf("%d",&n);

for (i=1;i<=n;i++)

{
    fact=fact*i;
}
    printf("%d \n", fact);

getch();
}
