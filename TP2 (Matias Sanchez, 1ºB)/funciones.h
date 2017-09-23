#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

typedef struct {

    char nombre[50];
    int edad;
    int estado;
    int dni;

}EPersona;

/**
 * Obtiene el primer indice libre del array.
 * @param lista el array se pasa como parametro.
 * @return el primer indice disponible
 */
int obtenerEspacioLibre();

/**
 * Obtiene el indice que coincide con el dni pasado por parametro.
 * @param lista el array se pasa como parametro.
 * @param dni el dni a ser buscado en el array.
 * @return el indice en donde se encuentra el elemento que coincide con el parametro dni
 */

int buscarPorDni();

void agregarPersona(EPersona listaPersonas[], int tam);

/** \brief Esta funcion pide los datos para ingresar el nombre, edad y dni de la persona
 *
 * \param Primer nombre que se ingresa
 * \param Segundo nombre que se ingresa
 * \return El indice en donde se encuentra el elemento para ingresar lo que pide
 *
 */

void borrarPersona(EPersona listaPersonas[], int tam);

/** \brief Esta funcion pide el dni de la persona para borrarlo de la lista
 *
 * \param Primer dni que ingresas
 * \param Pregunta si deseas borrar persona
 * \return El indice en donde se encuentra el elemento para borrar lo que pide
 *
 */

void ordenarPersonas(EPersona listaPersonas[], int tam);

/** \brief Esta funcion hace un listado con las personas ingresadas por orden alfabetico (nombre)
 *
 * \param Primeras personas que ordena
 * \param Segundas personas que ordena
 * \return El indice en donde se encuentra las personas ordenadas
 *
 */

void mostrarPersonas(EPersona listaPersonas[], int tam);

/** \brief Esta funcion muestra las personas que se ingresaron
 *
 * \param Primeras personas que ingresa
 * \param Segundas personas que ingresa
 * \return El indice en donde se encuentre el elemento con las personas que se ingresaron
 *
 */

//void graficarPersonas(int graf[][3], int cantidadElemento);
#endif // FUNCIONES_H_INCLUDED
