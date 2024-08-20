#include<stdio.h>
int main (){

char name [50];
printf("name : ");
fgets(name,sizeof(name),stdin);


puts(name);


return 0;
}
