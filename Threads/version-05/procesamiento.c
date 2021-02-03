/** @brief procesos.c, se definen los algoritmos que
 *  serán ejecutados por hilos lanzados.  
 */ 

#include<stdio.h>
#include "defs.h"
#include "helper.h"

void ordenarDatos( int *datos ){
    register int i, j, aux = 0;

    for ( i = 0; i < N; i++){
        for (j=0; j<(N-1); j++){
            if(datos[j] > datos[j+1]){
                aux = datos[j];
                datos[j] = datos[j+1];
                datos[j+1] = aux;    
            }
        }
    }

    return;
}


int obtenerPromedio( int *datos ){
    register int i;
    int suma = 0;
     
    for ( i = 0; i < N; i++)
    {
        suma += datos[i];
    }

    return suma/N; 
}

int buscarPares( int *datos ){
    register int i;
    int pares = 0;
    for ( i = 0; i < N; i++)
    {
        if (datos[i]%2==0){
            pares+=1;
        }
    }

    return pares;   
}

int contarPrimos( int *datos ){
    register int i;
    int primos = 0;
    for ( i = 0; i < N; i++)
        if( esPrimo(datos[i]) ){
            primos++;
            printf("%d ", datos[i]);
        }
            
    printf("\n\n");

    return primos;
}


