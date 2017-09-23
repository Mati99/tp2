#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "funciones.h"
#define TAM 20

EPersona listaPersonas[TAM];

char nombre[50];
int dni;
int estado=0;

void agregarPersona(EPersona listaPersonas[], int tam)
{
    int i;

    for(i=0; i<tam; i++)
    {
        if (listaPersonas[i].estado==0)

        {
        printf("\nIngrese nombre: ");
        fflush(stdin);
        gets(listaPersonas[i].nombre);

        printf("\nIngrese edad: ");
        scanf("%d", &listaPersonas[i].edad);

        printf("\nIngrese dni: ");
        scanf("%d", &listaPersonas[i].dni);

        listaPersonas[i].estado=1;

        system("cls");

        break;
        }
    }
}

void borrarPersona(EPersona listaPersonas[], int tam)

{
    int auxInt;
    int i;
    char rta;

    printf("\nIngresar dni: ");
    scanf("%d", &auxInt);

    for(i=0; i<tam; i++)
    {
        if(listaPersonas[i].dni==auxInt)
        {
            printf("\nDesea realizar eliminar al alumno: ");
            rta=getche();

            if(rta=='s')
            {
                listaPersonas[i].estado =-1;
            }
            else
            {
                printf("\nAccion cancelada!!\n");
            }
            break;
        }
    }
}

void ordenarPersonas(EPersona listaPersonas[], int tam)

{
    int i;
    int j;
    int auxInt;
    char auxString[50];

for (i=0; i<tam-1; i++)
{

for(j=i+1; j<tam; j++)

{
    if (strcmp(listaPersonas[i].nombre, listaPersonas[j].nombre)>0)
{
    strcpy(auxString, listaPersonas[i].nombre);
    strcpy(listaPersonas[i].nombre, listaPersonas[j].nombre);
    strcpy(listaPersonas[j].nombre, auxString);

    auxInt=listaPersonas[i].edad;
    listaPersonas[i].edad=listaPersonas[j].edad;
    listaPersonas[j].edad=auxInt;

    auxInt=listaPersonas[i].dni;
    listaPersonas[i].dni=listaPersonas[j].dni;
    listaPersonas[j].dni=auxInt;

    auxInt=listaPersonas[i].estado;
    listaPersonas[i].estado=listaPersonas[j].estado;
    listaPersonas[j].estado=auxInt;

}
}
}
}

void mostrarPersonas(EPersona listaPersonas[], int tam)

{
    int i;

    for(i=0; i<tam; i++)
    {
        if(listaPersonas[i].estado!=-1)
        {
            printf("\n%s---%d---%d\n", listaPersonas[i].nombre, listaPersonas[i].edad, listaPersonas[i].dni);
        }
}
}

int obtenerEspacioLibre(EPersona lista[], int cantidadPersonas, int valor){
    int i;
    for(i=0;i<cantidadPersonas;i++){
        if(lista[i].estado==valor){
            return i;
        }
    }
    return -1;
}

int buscarPorDni(EPersona lista[], int dni, int cantidadPersonas){
    int i;
    for(i=0;i<cantidadPersonas;i++){
        if(lista[i].dni==dni){
            return i;
        }
    }
    return -1;
}

/*---------------GRAFICO--------------*/

/*void graficarPersonas(EPersona listaPersonas[], int tam)

{
int i, int rango1=13, int rango2=5, int rango3=11, int flag1=0, int flag2=0, mayor;
{
if(rango1 >= rango2 && rango1 >rango3){
mayor=rango1;
}
else
{
if(rango2 >=rango1 && rango2 >= rango3)
{
mayor = rango2;
}
else;
mayor = rango3;
}

for(i=mayor; i>0; i--){

if(i<= rango1){
printf("*");
flag1=1;
}

if(i<= rango2){
flag2=1;
printf("\t*");
}

if(i<= rango3){
if(flag2==0)
printf("\t\t*");
if(flag2==1)
printf("\t*");
}
printf("\n");
}

printf("<18\t19-35\t>35");

return 0;
}
}*/
