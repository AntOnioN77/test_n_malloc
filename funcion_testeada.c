#include "jp_tester.h"
int funcion_testeada(void)
{
    void *memmory;
    int i;

    i = 1;
    while(i < 20)
    {
        //printf("|malloc n%d| ", i);
        memmory = ft_malloc(1);
        if (memmory == NULL)
            return (1);
        free(memmory);
        i++;
    }
    memmory = ft_malloc(1);// intencionalmente, nuestra funcion no maneja el 20º malloc, es decir en caso de fallo continua su ejecucion normal;
    free(memmory);
    return(0);
}