
#include<stdio.h>
int main ()
{

    int x=10;

    printf ("x= %d\n",x++);//x=10
    printf ("x= %d\n",x);//x=11
    printf ("x= %d\n",++x);//x=12
    printf ("x= %d\n",x);//x=12
    printf ("x= %d\n",x--);//x=12
    printf ("x= %d\n",--x);//x=10

}
