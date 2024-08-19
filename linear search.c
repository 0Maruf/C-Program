#include<stdio.h>
int main ()
{
    int num[]= {10,55,22,12,10,30};
    int value, pos=-1,i;
    printf("Enter value for you want :");
    scanf("%d",&value);

//int position=-1;
    for (i=0; i<6; i++)
    {
        if (value== num[i])
        {
            pos=i+1;
            break;

        }


    }
    if (pos==-1)
        {
            printf("Not found");
        }
        else
        {
            printf("This Position of: %d\n",value, pos);
        }



    getch();
}
