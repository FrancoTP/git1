#include <locale.h>
#include <stdio.h>
#include <cstdlib>
int main()
{
    int c, n, fact = 1;

    
    printf("Ingresa un numero para calcular su factorial: \n");
    scanf("%d", &n);

   
    for (c = 1; c <= n; c++){
        fact = fact * c;
    }

    printf("Factorial de %d es: %d\n", n, fact);
system("PAUSE");
    return 0;
}









