#include <cstdlib>
#include<stdio.h>
#include <iostream>
#include <locale.h>
using namespace std;
int main(int argc, char *argv[])
{


int num1,i;
printf("Introduce un numero: ");
scanf("%d",&num1);
for(i=1;i<=num1;i++)
{
    if(num1%i==0)
    {
        printf("%d, es divisor de %d \n",i,num1);
    }
}
system("PAUSE");
return 0;

}

