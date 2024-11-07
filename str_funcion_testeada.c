#include "test_malloc_protection.h"


//NO NECESITAS ESTA FUNCIÖN PARA EL TEST esta aqui para servir de ejemplo, el tipo de comportamiento que ponemos a prueba
char *str_funcion_testeada(void)
{
    char *memmory;
    int i;

    i = 1;
    while(i < 10)
    {
        //printf("|malloc n%d| ", i);
        memmory = ft_malloc(sizeof(char));
        if (memmory == NULL)
            return (NULL);
        free(memmory);
        i++;
    }
    memmory = ft_malloc(sizeof(char));// intencionalmente, nuestra funcion no maneja el 10º malloc, es decir en caso de fallo continua su ejecucion normal;
    free(memmory);
       while(i < 20)
    {
        //printf("|malloc n%d| ", i);
        memmory = ft_malloc(sizeof(char));
        if (memmory == NULL)
            return (NULL);
        free(memmory);
        i++;
    }
	*memmory = 'C';
	return(memmory);
}