#include <stdio.h>

void ocurrencia(int n, int a[], int buscar, int *cont);

int main()
{
    int cont, n;
    printf("Cantidad de numeros a ingresar: ");
    scanf("%d", &n);
    
    int vector[n];
    for (int i = 0; i < n; i++)
    {
        printf("Ingrese numero %d del vector: ", i + 1);
        scanf("%d", &vector[i]);
    }
    int buscar;
    printf("Ingrese numero a buscar: ");
    scanf("%d", &buscar);
    
    ocurrencia(n, vector, buscar, &cont);
    
    printf("La cantidad de veces que aparece el %d es de %d\n", buscar, cont);
    return 0;
}

void ocurrencia(int n, int a[], int buscar, int *cont)
{
    *cont = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == buscar)
        {
            (*cont)++;
        }
    }
}

