#include "jp_tester.h"
int variable_global = 0;

int main(void)
{
    int i;
    int retorno_error;

    i = 1;    
    while(i <= 20) //vamos a suponer que la funcion que estamos testeando, llamara a malloc como maximo 20 veces.
    {
        variable_global = i;
        //printf("\n-------llamada numero %d de funcion_testeada()--------", i);
        retorno_error = funcion_testeada();
        if( retorno_error == 0)
            printf("--------fallo en malloc n%d no manejado------\n",i);
        i++;
    }
    return (0);
}

