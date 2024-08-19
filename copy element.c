#include<stdio.h>
int main ()
{
    int array1[1000],array2[1000],i,n;
    printf("How many Arrays :");
    scanf("%d",&n);
    for (i=0; i<n; i++)
    {
        scanf("%d",& array1[i]);
    }

    printf("Array1 :");
    for (i=0; i<n; i++)
    {
        printf("%d ",array1[i]);
    }
    //copy element
    for (i=0; i<n; i++)
    {
        array2[i]=array1[i];
    }
    printf("\nArray2 :");
    for (i=0; i<n; i++)
    {
        printf("%d ",array2[i]);
    }


    getch();
}
