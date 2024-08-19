#include<stdio.h>
int main ()
{
    int i, j,numRow,numCol;
    int A[10][10], B[10][10],c[10][10];
    printf("Enter Row and col :");
    scanf("%d %d ",&numRow,&numCol);
//scan a matrix
    printf("Enter element A matrix : \n ");
    for (i=0; i<numRow; i++)
    {

        for (j=0; j<numCol; j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);

        }
        printf("\n");
    }
    //scan b matrix
    printf("\n Enter element B matrix : \n ");
    for (i=0; i<numRow; i++)
    {

        for (j=0; j<numCol; j++)
        {
            printf("B[%d][%d] = ",i,j);
            scanf("%d",&B[i][j]);

        }
        printf("\n");
    }

    //print a matrix
    printf("A=");
    for (i=0; i<numRow; i++)
    {

    printf("\t");
        for (j=0; j<numCol; j++)
        {

            printf("%d",A[i][j]);
        }
        printf("\n");
    }



    //print b matrix
    printf("\nB=");
    for (i=0; i<numRow; i++)
    {

   printf("\t");
        for (j=0; j<numCol; j++)
        {

            printf("%d",B[i][j]);
        }
        printf("\n");
    }

     //sum matrix

    for (i=0; i<numRow; i++)
    {

        for (j=0; j<numCol; j++)
        {

          c[i][j]=A[i][j]+B[i][j];
        }


    }
    printf("A+B =   ");
    for (i=0; i<numRow; i++)
    {


        for (j=0; j<numCol; j++)
        {

            printf("%d",c[i][j]);
        }
        printf("\n");
         printf("\t");

    }


    getch();
}

