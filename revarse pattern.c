#include<stdio.h>
int main ()
{
    int n,row, col;
    printf("Enter n =");
    scanf("%d",&n);
    for(row=n; row>=1; row--)
    {

        //space
        for(col=1; col<=n-row; col++)
        {
            printf(" ");
        }
        for(col=1; col<=row; col++)
    {
        printf("%d",row%2);
    }
    printf("\n");
    }

}

