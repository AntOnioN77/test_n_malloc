# Test N Malloc

Haremos fallar uno a uno los `malloc` en tu función. Prueba con distintos argumentos para asegurarte de probar todas las posibles rutas de ejecución de tu código.

## Instrucciones

- Sustituir cada llamada a `malloc()` en tu código fuente por `ft_malloc()` para pasar este test. También en la `libft` si estás usándola.

- Añadir `#include "test_malloc_protection.h"` al header de tu proyecto, y a `libft.h`.

- En `main.c`:
  1. Hay que descomentar uno de los `main`, según lo que la función en pruebas retorne en caso de terminar sin error.
  2. También debes sustituir `funcion_testeada()` por una llamada válida a tu función, recibiendo valores que ya hayas comprobado correctos. Este tester **solo** verifica que manejas bien los `malloc`, parámetros no válidos pueden dar falsos positivos/negativos.
  3. La línea: `while(i <= 20)` determina que se hará fallar en sucesivas llamadas, desde el 1º hasta el 20º `malloc`. Sustituye `20` por el número de veces que tu función llamará a `ft_malloc()`.
     - En caso de que tu función llame a `malloc` un número de veces inferior al indicado en el `while`, el test reportará cada llamada inexistente como **"fallo no manejado"**.
     - En caso de que tu función llame a `malloc` un número de veces superior al indicado en el `while`, las llamadas por encima de ese número no serán comprobadas.

## Nota

Este es un código de ejemplo hecho en 20 minutos, seguramente tiene fallos, pero espero que os sirva para entender la lógica general con la que se pueden hacer test de este tipo.

## ¡Buena Suerte, Compañeros!

