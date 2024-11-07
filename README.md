# test_n_malloc
Pequeño ejemplo de tester, para simular el fallo de una función auxiliar la nª vez que es llamada, desde la función principal.

-Sustituir cada llamada a malloc() en tu código fuente por ft_malloc() para pasar este test. Tambien en la libft si estas usandola.

-Añadir #include "test_malloc_protection.h" al header de tu proyecto, y a libft.h 

-En main.c:
	1. Hay que descomentar uno de los mains, según lo que la función en pruebas retorne en caso de terminar sin error.
	2. Tambien debes sustituir "funcion_testeada()" por una llamada válida a tu función. Recibiendo valores que ya hayas comprobado correctos. Este tester SOLO verifica que manejas bien los mallocs, parámetros no válidos pueden dar falsos positivos/negativos.
	3. La linea: while(i <= 20) determina que se hará fallar en sucesivas llamadas, desde el 1º hasta el 20ºmalloc. Sustituye 20, por el numero de veces que tu función llamará a ft_malloc().
		En caso de que tu funcion llame a malloc un numero de veces inferior al indicado en el while, el test reportara cada llamada inexistente como "fallo no manejado". 
		En caso de que tu funcion llame a malloc un numero de veces superior al indicado en el while, los llamadas por encima de ese nº no serán comprobadas.

-Es un código de ejemplo hecho en 20 min, seguramente tiene fallos, pero espero que os sirva para entender la lógica general con la que se pueden hacer test de este tipo.

Suerte compañeros.