# test_n_malloc
Pequeño ejemplo de tester, para simular el fallo de una función auxiliar la nª vez que es llamada, desde la función principal.

-En jp_tester.c tenemos el main, debemos sustituir en la línea 13 "funcion_testeada()" por una llamada válida a tu función. Recibiendo valores que ya hayas comprobado correctos. Este tester SOLO verifica que manejas bien los mallocs, parámetros no válidos pueden dar falsos positivos.

-La línea 10 en jp_tester.c "while(i <= 20)" determina que se van a hacer fallar en sucesivas llamadas, desde el 1º hasta el 20ºmalloc. Pero en lugar de 20 podrías poner cualquier otro número.

-Es bastante rudimentario, durante las pruebas, deberás sustituir cada llamada a malloc() en tu código fuente por ft_malloc().

-Es un código de ejemplo hecho en 20 min, seguramente tiene fallos, pero espero que os sirva para entender la lógica general con la que se pueden hacer test de este tipo.

Suerte compañeros.