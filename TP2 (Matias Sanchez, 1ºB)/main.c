#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include <conio.h>
#include <string.h>
#define TAM 20

EPersona listaPersonas[TAM];

int main()
{
    int i;

    for(i=0; i<TAM; i++)
    {
        listaPersonas[i].estado=0;
    }

    char seguir='s';
    int opcion=0;

    while(seguir=='s')
    {
        printf("\n\nSeleccione una opcion:\n\n");
        printf("1- Agregar persona\n");
        printf("2- Borrar persona\n");
        printf("3- Imprimir lista ordenada por  nombre\n");
        printf("4- Imprimir grafico de edades\n\n");
        printf("5- Salir\n\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                agregarPersona(listaPersonas, TAM);
                obtenerEspacioLibre;
                break;
            case 2:
                borrarPersona(listaPersonas, TAM);
                buscarPorDni;
                break;
            case 3:
                ordenarPersonas(listaPersonas, TAM);
                mostrarPersonas(listaPersonas, TAM);
                break;
            case 4:
                //graficarPersonas(listaPersonas, TAM);
                break;
            case 5:
                printf("Pulse ENTER para salir...\n");
                seguir = 'n';
                break;
        }
    }

    return 0;
}



