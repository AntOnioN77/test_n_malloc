#include "test_malloc_protection.h"
int variable_global = 0;

//Descomenta este main si tu funcion retorna un int, (0 debe indicar salida sin error).
/*
int main(void)
{
    int i;
    int retorno_error;

    i = 1;    
    while(i <= 20) //Sustituye 20 por el numero de veces que malloc sera invocado a lo largo de la ejecucion de tu funcion (incluiddo llamadas desde libft)
    {
        variable_global = i;
        retorno_error = funcion_testeada();// sustituir función_testeada() por una llamada a tu funcion con argumentos validos.
        if( retorno_error == 0)
            printf("--------fallo en malloc n%d no manejado------\n",i);
        i++;
    }
    return (0);
}
*/


//Descomenta este main si tu funcion debuelve un puntero NULL en caso de error.
/*
int main(void)
{
    int i;
    char *retorno_error;

    i = 1;    
    while(i <= 20) // Sustituye 20 por el numero de veces que malloc sera invocado a lo largo de la ejecucion de tu funcion (incluiddo llamadas desde libft)
    {
        variable_global = i;
        retorno_error = str_funcion_testeada();// sustituir str_función_testeada() por una llamada a tu funcion con argumentos validos.
        if( retorno_error != NULL)
            printf("--------fallo en malloc n%d no manejado------\n",i);
        i++;
    }
    return (0);
}
*/