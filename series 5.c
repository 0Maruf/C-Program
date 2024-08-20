#include<stdio.h>
int main (){
//1.5 + 2.5 + 3.5 +......+n.5=?

float i,sum=0,n;
printf("Enter n value :");
scanf("%f",&n);


for (i=1.5;i<=n;i++){
    sum=sum+i;

}
printf("%.2f\n",sum);
getch();
}
