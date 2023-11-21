#include "stdio.h"

int main(){

    int n, m;
    
    printf("Ingrese el numero de filas: ");
    scanf("%d", &n);
    printf("Ingrese el numero de columnas: ");
    scanf("%d", &m);

    int matrix[n][m];
    int suma;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            matrix[i][j]=0;
        }   
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            
            
            if (i==j)
            {
                matrix[i][j]=1;
            }
            
        }   
    }

        for (int i = 0; i < n; i++)
    {
        printf("\n");
        for (int j = 0; j < m; j++)
        {
            printf("%d", matrix[i][j]);
        }   
    }

        

    return 0;
}