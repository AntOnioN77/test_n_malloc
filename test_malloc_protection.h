//compilación:
//cc ft_malloc.c main.c tu_codigo_fuente.c    

#ifndef TEST_MALLOC_PROTECTION_H
#define TEST_MALLOC_PROTECTION_H

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

extern int variable_global; // ten cuidado de que esta variable no termine apareciendo en el proyecto que entreges,  es global
void 	*ft_malloc(size_t n);
int funcion_testeada(void);
char *str_funcion_testeada(void);

#endif