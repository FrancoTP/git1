#include <iostream>
#include <cstdlib>
#include<stdio.h>
using namespace std ;
int main (){


int n, x = 0;
printf("Ingrese cualquier numero : ");

scanf("%d",&n);

while (n > 0){
	x = x + n % 10;
		n = n / 10;
}


printf("La suma de los digitos es :  %d \n",x);

system("PAUSE");

return 0;

}
