/*
আর্মস্ট্রং নাম্বার (Armstrong Number)পরিচিতি:
গণিতে এমন কিছু সংখ্যা আছে যাদেরকে আর্মস্ট্রং নাম্বার বলা হয়।
যেসব সংখ্যার অংক গুলোর ঘনের যোগফল ঐ সংখ্যার সমান সেসব সংখ্যাকে আর্মস্ট্রং নাম্বার বলে।যেমন: 153
এখানে 1^3+5^3+3^3=153
এরকম আরো কিছু আর্মস্ট্রং সংখ্যা হলো 0, 1, 370, 371, 407 ইত্যাদি
*/


#include<stdio.h>
int main (){
    int num,temp,r,sum=0;
    printf("Enter any Number : ");
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
        r=temp%10;
        sum=sum+r*r*r;
        temp=temp/10;
    }
    if (sum==num)
    {
        printf("armstrong");
    }
    else
    {

        printf("Not armstrong");
    }

getch();
}
