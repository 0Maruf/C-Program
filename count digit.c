#include<stdio.h>
int main (){
    while(1){
int n , count=0;
printf("Enter any digit :");
scanf("%d",&n);

while(n!=0){
    n=n/10;
++count;
}
printf("Total Count Number of digit : %d \n",count);
    }
getch();
}
