#include<stdio.h>
#include<ctype.h>
int main ()
{
    while(1)
    {
        /*int num,count=0;
        printf("Any number =");
        scanf("%d",&num);

        if (num<=1)
        {
            count=1;
        }
        for(int i=2; i<= sqrt(num); i++)
        {
            if(num%i==0)
            {
                count++;
                break;
            }
        }
        if(count==0)
        {
            printf("%d its prime \n ",num );
        }
        */
        for (num=1; num<=100; num ++)
        {
            count=0;
            if (num<=1)
            {
                count=1;
            }
            for(int i=2; i<= sqrt(num); i++)
            {
                if(num%i==0)
                {
                    count++;
                    break;
                }
            }
            if(count==0)
            {
                printf("%d ",num );
            }
        }


        getch();
    }

