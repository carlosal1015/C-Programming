Datos y C
===

Aprenderá sobre lo siguiente en este capítulo:
* Palabras clave: `int`, `short`, `unsigned`, `char`, `float`, `double`, `_Bool`, `_Complex`, `_Imaginary`
* Operator:
`sizeof`
* Función:
`scanf()`
* Los tipos de datos básicos que utiliza C
* Las distinciones entre tipos enteros y tipos de punto flotante
* Escritura de constantes y declaración de variables de esos tipos
* Cómo usar las funciones `printf()` y `scanf()` para leer y escribir valores de diferentes tipos

Los programas trabajan con datos. Usted alimenta números, letras y palabras a la computadora y espera que haga algo con los datos. Por ejemplo, es posible que desee que la computadora calcule un pago de intereses o muestre una lista ordenada de viticultores. En este capítulo, haces más que solo leer sobre datos; usted practica la manipulación de datos, que es mucho más divertido.

Este capítulo explora las dos grandes familias de tipos de datos: entero y coma flotante. C ofrece varias variedades de estos tipos. Este capítulo le dice cuáles son los tipos, cómo declararlos, y cómo y cuándo usarlos. Además, descubres las diferencias entre las constantes y las variables, y como beneficio adicional, tu primer programa interactivo aparecerá en breve.

#### Un programa de muestra

Una vez más, comenzamos con un programa de muestra. Como antes, encontrará algunas arrugas desconocidas que pronto corregiremos para usted. La intención general del programa debe ser clara, así que intente compilar y ejecutar el código fuente que se muestra en el Listado 3.1. Para ahorrar tiempo, puede omitir escribir los comentarios.

```c
/* platinum.c -- your weight in platinum */
#include <stdio.h>
int main(void)
{
    float weight;               /* user weight */
    float value;                /* platinum equivalent */
    
    printf("Are you worth your weight in platinum?\n");
    printf("Let's check it out.\n");
    printf("Please enter your weight in pounds: ");
    
    /* get input from the user */
    scanf("%f", &weight);
    /* assume platinum is $1700 per ounce */
    /* 14.5833 converts pounds avd. to ounces troy */
    value = 1700.0 * weight * 14.5833;
    printf("Your weight in platinum is worth $%.2f.\n", value);
    printf("You are easily worth that! If platinum prices drop,\n");
    printf("eat more to maintain your value.\n");
    
    return 0;
}
```

> **Consejo     Errores y advertencias**
> 
> Si escribe este programa incorrectamente y, por ejemplo, omite un punto y coma, el compilador le proporciona un mensaje de error de sintaxis. Sin embargo, incluso si lo escribe correctamente, el compilador puede darle una advertencia similar a "Advertencia-conversión de 'doble' a 'flotar', posible pérdida de datos." Un mensaje de error significa que usted hizo algo incorrecto y evita la programa de ser compilado. Una advertencia, sin embargo, significa que ha hecho algo que es código válido pero posiblemente no es lo que pretendía hacer. Una advertencia no detiene la compilación. Esta advertencia particular se refiere a cómo C maneja valores como 1700.0. No es un problema para este ejemplo, y el capítulo explica la advertencia más adelante.

Cuando escribe este programa, es posible que desee cambiar el `1700.0` al precio actual del metal precioso platino. No obstante, no juegue con el `14.5833`, que representa la cantidad de onzas en una libra. (Eso es onzas troy, usado para metales preciosos, y libras avoirdupois, usado para personas--preciosas y demás).

Tenga en cuenta que "ingresar" su peso significa escribir su peso y luego presionar la tecla Enter o Return. (No solo escriba su peso y espere). Presionar Enter informa a la computadora que terminó de escribir su respuesta. El programa espera que ingrese un número, como `156`, no palabras, `too much`. Ingresar letras en lugar de dígitos causa problemas que requieren una declaración if (Capítulo 7, "C Sentencias de control: ramificación y saltos") para anular, así que sea amable e ingrese un número. Aquí hay algunos resultados de muestra:

```console
Are you worth your weight in platinum?
Let's check it out.
Please enter your weight in pounds: 156
Your weight in platinum is worth $3867491.25.
You are easily worth that! If platinum prices drop, eat more to maintain your value.
```

> **Ajustes de programa**
> 
> ¿La salida de este programa parpadea brevemente en la pantalla y luego desaparece aunque haya agregado la siguiente línea al programa, como se describe en el Capítulo 2, "Introducción a C"?
> ```c
> getchar();
> ```
> Para este ejemplo, necesita usar esa llamada de función dos veces:
> ```c
> getchar();
> getchar();
> ```
> La función `getchar()` lee el siguiente carácter de entrada, por lo que el programa tiene que esperar la entrada. En este caso, proporcionamos entrada escribiendo `156` y luego presionando la tecla Enter (o Return), que transmite un carácter de nueva línea. Así que `scanf()` lee el número, el primer `getchar()` lee el carácter de nueva línea, y el segundo `getchar()` hace que el programa se detenga, esperando nuevas entradas.

#### ¿Qué hay de nuevo en este programa?

Hay varios elementos nuevos de C en este programa:
* Observe que el código usa un nuevo tipo de declaración de variable. Los ejemplos anteriores solo usaban un tipo de variable entera (`int`), pero este agrega un tipo de variable de coma flotante (`float`) para que pueda manejar una variedad más amplia de datos. El tipo `float` puede contener números con puntos decimales.
* El programa muestra algunas formas nuevas de escribir constantes. Ahora tiene números con puntos decimales.
* Para imprimir este nuevo tipo de variable, use el especificador `%f` en el código `printf()` para manejar un valor de coma flotante. El modificador `.2` al especificador `%f` ajusta la apariencia de la salida para que muestre dos lugares a la derecha del decimal.
* La función `scanf()` proporciona entrada de teclado al programa. El `%f` indica a `scanf()` que lea un número de punto flotante del teclado, y `&weight` le dice a `scanf()` que asigna el valor de entrada a la variable llamada `weight`. La función `scanf()` usa la notación `&` para indicar dónde puede encontrar la variable `weight`. El próximo capítulo analiza `&` y más; mientras tanto, confía en nosotros que lo que necesita está aquí.
* Tal vez la característica nueva más destacada es que este programa es interactivo. La computadora le pide información y luego usa el número que ingresa. Un programa interactivo es más interesante de usar que los tipos no interactivos. Más importante aún, el enfoque interactivo hace que los programas sean más flexibles. Por ejemplo, el programa de ejemplo se puede usar para cualquier peso razonable, no solo para `156` libras. No tiene que volver a escribir el programa cada vez que quiera probarlo en una persona nueva. Las funciones `scanf()` y `printf()` hacen posible esta interactividad. La función `scanf()` lee datos del teclado y entrega esos datos al programa, y ​​`printf()` lee datos de un programa y los entrega a su pantalla. Juntas, estas dos funciones le permiten establecer una comunicación bidireccional con su computadora (vea la Figura 3.1), y eso hace que usar una computadora sea mucho más divertida.

Este capítulo explica los dos primeros elementos de esta lista de características nuevas: variables y constantes de varios tipos de datos. El Capítulo 4, "Cadenas de caracteres y entrada/salida formateada", cubre los últimos tres elementos, pero este capítulo continuará haciendo un uso limitado de `scanf()` y `printf()`.

