Especificadores de conversión ANSI C para `scanf()`
===
|Especificador de conversión | Significado |
|:--:|:---:|
|%c|Interpreta la entrada como un carácter.|
|%d|Interpreta la entrada como un entero decimal con signo.
|%e,%f,%g,%a|Interpreta la entrada como un número punto flotante.|
|%E,%F,%G,%A|Interpreta la entrada como un número punto flotante.|
|%i|Interpreta la entrada como un número entero decimal con signo.|
|%o|Interpreta la entrada como un entero octal con signo.|
|%p|Interpreta la entrada como un puntero (una dirección).|
|%u|Interpreta la entrada como un decimal entero sin signo.|
|%x, %X| Interpreta la entrada como un entero hexadecimal con signo.|

Modificadores de conversión para `scanf()`
===
|Modificador|Significado|
|*|Suprimir la asignación. Por ejemplo: `%d`.|
|dígit(os) |Ancho de campo máximo. La entrada se detiene cuando se alcanza el ancho máximo del campo o cuando se encuentra el primer carácter en blanco, lo que ocurra primero. Ejemplo: `%10s`.|
|hh|Lee un entero como un carácter firmado o un carácter sin signo. Ejemplo: %hhd, %hhu|
||