//compilación:
//cc bad_malloc.c jp_tester.c funcion_testeada.c     

#ifndef JP_TESTER_C
#define JP_TESTER_C

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

extern int variable_global; // ten cuidado de que esta variable no termine apareciendo en el proyecto que entreges,  es global
void 	*ft_malloc(size_t n);
int funcion_testeada(void);

#endif