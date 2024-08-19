#include<stdio.h>
int main ()
{
    int i, j ;
    int A[3][4]={ {1,2,3,4},{2,3,2,5}, {4,5,6,2} };
    for (i=0; i<3; i++)
    {
        for (j=0; j<4; j++)
    {
        printf("%d ",A[i][j]);
        }
        printf("\n");
    }



    getch();
}
