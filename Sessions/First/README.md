Primera clase
===

## Mi resumen del libro C Prime Plus de Stephen Prata

### Acerca del autor

**Stephen Prata**, actualmente retirado, enseñó astronomía, física y programación en el colegio universitario de Marin en Kentfield, California. Él recibió su bachiller en el CALTECH y su doctorado en la Universidad de California, Berkeley.

### Preparación

#### ¿De dónde es C?

Dennis Ritchie y Ken Thompson de los Laboratorios Bells crearon C en 1972 en su trabajo para diseñar el sistema operativo Unix. C no brotó completamente de la cabeza de Ritchie, sino vino del lenguaje B de Thompson, pero esa es otra historia ... El punto importante es que C se creó como una herramienta para los programadores, por lo que su principal objetivo es ser un lenguaje útil.

Muchos lenguajes apuntan a ser útiles, pero a menudo tienen otras preocupaciones. El objetivo principal de Pascal, por ejemplo, era proporcionar una base sólida para la enseñanza de buenos principios de programación. BASIC, por otro lado, se desarrolló para parecerse al inglés, de modo que los alumnos que no estaban familiarizados con las computadoras pudieran aprenderlo fácilmente. Estos son objetivos importantes, pero no siempre son compatibles con la utilidad práctica pragmática. El desarrollo de C como un lenguaje diseñado para programadores, sin embargo, lo ha convertido en uno de los lenguajes de hoy a escoger.

#### ¿Por qué C?

Durante las últimas cuatro décadas, C se ha convertido en uno de los lenguajes de programación más importantes y populares. Ha crecido porque la gente lo prueba y le gusta. Desde hace dos décadas, muchos han pasado de C a lenguajes como C++, Objective C y Java, pero C sigue siendo un lenguaje importante en sí mismo, así como una ruta de migración a estos otros. A medida que aprendes C, reconocerás sus muchas virtudes. Vamos a ver algunos de ellos ahora

- Estructuras de control poderosas
- Rápido
- Código compacto en programas pequeños
- Portable a otros equipos

> C es el tercer lenguaje más rápido, Assembler es el segundo lenguaje más rápido.

#### Características de diseño

> Un programa se crea para que otros puedan utilizarlo y modificarlo.

C es un lenguaje moderno que incorpora las características de control que se consideran deseables por la teoría y la práctica de la informática. Su diseño lo hace natural para la planificación descendente, la programación estructurada y el diseño modular. El resultado es un programa más confiable y comprensible.


#### Eficiencia

C es un lenguaje eficiente. Su diseño aprovecha las capacidades de las computadoras actuales. Los programas en C tienden a ser compactos y a ejecutarse rápidamente. De hecho, C exhibe parte del fino control usualmente asociado con un lenguaje ensamblador. (Un *lenguaje ensamblador* es una representación mnemónica del conjunto de instrucciones internas utilizadas por el diseño particular del CPU; las diferentes familias de CPU tienen diferentes lenguajes ensamblador.) Si lo desea, puede ajustar sus programas para obtener la velocidad máxima o el uso más eficiente de la memoria.

#### Portabilidad

C es un lenguaje portable, lo que significa que los programas C escritos en un sistema pueden ejecutarse en otros sistemas con poca o ninguna modificación. Si las modificaciones son necesarias, a menudo se pueden hacer simplemente cambiando algunas entradas en un archivo de encabezado que acompaña al programa principal. . C es líder en portabilidad. Los compiladores C (programas que convierten su código C en las instrucciones que una computadora usa internamente) están disponibles para muchas arquitecturas de computadora, que van desde microprocesadores de 8 bits hasta supercomputadores.

Debido a los estrechos vínculos de C con Unix, los sistemas Unix normalmente vienen con un compilador de C como parte del paquete. Las instalaciones de Linux también suelen incluir un compilador de C. Varios compiladores de C están disponibles para computadoras personales, incluidas PC que ejecutan varias versiones de Windows y Macintosh. Entonces, ya sea que esté usando una computadora doméstica, una estación de trabajo profesional o una computadora central, es muy probable que pueda obtener un compilador de C para su sistema en particular.

#### Potencia y flexibilidad

C es potente y flexible. Por ejemplo, la mayor parte del poder y flexibilidad sistema operativo Unix fue escrito en C. Muchos compiladores e intérpretes para otros lenguajes como FORTRAN, Perl, Python, Pascal, LISP, Logo y BASIC, se han escrito en C. Como resultado, cuando utiliza FORTRAN en una máquina Unix, finalmente un programa C ha hecho el trabajo de producir el programa ejecutable final. Los programas C se han usado para resolver problemas de física e ingeniería e incluso para animar efectos especiales para películas.

#### Programador orientado

C está orientado a satisfacer las necesidades de los programadores. Le da acceso al hardware y le permite manipular bits individuales en la memoria. Su amplia selección de operadores le permite expresarse de manera sucinta. C es menos estricto que, por ejemplo, Pascal o incluso C ++ para limitar lo que puedes hacer. Esta flexibilidad es a la vez una ventaja y un peligro. La ventaja es que muchas tareas, como la conversión de formas de datos, son mucho más simples en C. El peligro es que con C, usted puede cometer errores que son imposibles en algunos lenguajes. C te da más libertad, pero también te responsabiliza más.

Además, la mayoría de las implementaciones C tienen una gran biblioteca de funciones C útiles. Estas funciones se ocupan de muchas necesidades que normalmente enfrenta un programador.

#### Deficiencias

C tiene algunas fallas. A menudo, como sucede con las personas, las fallas y las virtudes son lados opuestos de la misma característica. Por ejemplo, mencionamos que la libertad de expresión de C también requiere una mayor responsabilidad. El uso de punteros de C (algo sobre lo que puedes esperar aprender en este libro), en particular, significa que puedes cometer errores de programación que son difíciles de rastrear. Como una computadora preliterada una vez comentó, el precio de la libertad es la vigilancia eterna.

La concisión de C, combinada con su gran cantidad de operadores, hace que sea posible preparar un código que es extremadamente difícil de seguir. No está obligado a escribir código oscuro, pero la oportunidad está ahí. Después de todo, ¿qué otro lenguaje tiene un [Concurso Internacional Anual de código ofuscado](https://www.ioccc.org/)? Hay más virtudes y, sin duda, algunas fallas más. En lugar de profundizar en el asunto, pasemos a un nuevo tema.

#### ¿Hacia dónde va C?

A principios de la década de 1980, C ya era un idioma dominante en el mundo de los minicomputadores de sistemas Unix. Desde entonces, se ha extendido a las computadoras personales y a los mainframes. Muchos proveedores de software usan C como el lenguaje preferido para producir programas de procesamiento de texto, hojas de cálculo, compiladores y otros productos. Estas empresas saben que C produce programas compactos y eficientes. Más importante aún, ellos saben que estos programas serán fáciles de modificar y fáciles de adaptar a los nuevos modelos de computadoras. Cada vez más usuarios de computadoras han recurrido a C para asegurarse sus ventajas. No es necesario ser un profesional de la informática para utilizar C. En la década de 1990, muchas empresas de software comenzaron a utilizar el lenguaje C++ para grandes proyectos de programación. C++ injerta herramientas de programación orientadas a objetos para el lenguaje C. (La programación orientada a objetos es una filosofía que intenta moldear el lenguaje para adaptarse a un problema en lugar de moldear el problema para adaptarlo al lenguaje). C++ es casi un superconjunto de C, lo que significa que cualquier programa C es casi válido en C++. Al aprender C, también aprendes mucho sobre C ++. A pesar de la popularidad de los lenguajes más nuevos, como C ++ y Java, C sigue siendo una habilidad central en el negocio del software, generalmente clasificándose entre los 10 mejores de las habilidades deseadas. En particular, C se ha vuelto popular para programar sistemas embebidos. Es decir, se usa para programar los microprocesadores cada vez más comunes que se encuentran en automóviles, cámaras, reproductores de DVD y otras comodidades modernas. Además, C ha estado incursionando en el largo dominio de la programación científica de FORTRAN. Finalmente, como corresponde a un lenguaje creado para desarrollar un sistema operativo, juega un papel importante en el desarrollo de Linux.

#### ¿Qué hacen las computadoras?

Ahora que está a punto de aprender cómo programar en C, probablemente deba saber un poco sobre cómo funcionan las computadoras. Este conocimiento lo ayudará a comprender la conexión entre escribir un programa en C y lo que eventualmente tendrá lugar cuando ejecute ese programa. Las computadoras modernas tienen varios componentes. La unidad de procesamiento central, o CPU, realiza la mayor parte del trabajo de computación. La memoria de acceso aleatorio, o RAM, sirve como espacio de trabajo para contener programas y archivos. El dispositivo de almacenamiento de memoria permanente, normalmente un disco duro en el pasado, pero ahora más y más a menudo un dispositivo de estado sólido, recuerda esos programas y archivos, incluso cuando la computadora está apagada. Y varios periféricos, como el teclado, el mouse, la pantalla táctil y el monitor, proporcionan comunicación entre la computadora y usted. La CPU procesa tus programas; así que concentrémonos en su papel.

El CPU obtiene una instrucción de la memoria y la ejecuta. Capta la siguiente instrucción de la memoria y la ejecuta, y así sucesivamente. (Una CPU de gigahercios puede hacer esto aproximadamente mil millones de veces por segundo.) La CPU tiene su propio espacio de trabajo pequeño, que consta de varios registros, cada uno de los cuales puede contener un número. Un registro contiene la dirección de memoria de la siguiente instrucción, y la CPU usa esta información para buscar la siguiente instrucción. Después de obtener una instrucción, la CPU almacena la instrucción en otro registro y actualiza el primer registro a la dirección de la siguiente instrucción. La CPU tiene un repertorio limitado de instrucciones (conocido como el conjunto de instrucciones) que comprende. Además, estas instrucciones son bastante específicas; muchos de ellos le piden a la computadora que mueva un número de una ubicación a otra, por ejemplo, desde una ubicación de memoria a un registro.

Un par de puntos interesantes van junto con esta cuenta. Primero, todo lo almacenado en una computadora se almacena como un número. Los números se almacenan como números. Los caracteres, como los caracteres alfabéticos que utiliza en un documento de texto, se almacenan como números; cada personaje tiene un código numérico. Las instrucciones que una computadora carga en sus registros se almacenan como números; cada instrucción en el conjunto de instrucciones tiene un código numérico. En segundo lugar, los programas de computadora en última instancia tienen que expresarse en este código de instrucción numérica, o lo que se denomina *lenguaje máquina*.

Una consecuencia de cómo funcionan las computadoras es que si desea que una computadora haga algo, debe alimentar una lista particular de instrucciones (un programa) diciéndole exactamente qué hacer y cómo hacerlo. Debe crear el programa en un lenguaje que la computadora entienda directamente (lenguaje de máquina). Esta es una tarea detallada, tediosa y exigente. Algo tan simple como agregar dos números juntos tendría que dividirse en varios pasos, tal vez algo como lo siguiente:

1. Copie el número en la ubicación de memoria 2000 para registrar 1.
2. Copie el número en la ubicación de memoria 2000+4 para registrar 2.
3. Añada el contenido del registro 2 hacia el contenido del registro 1, dejando la respuesta en el registro 1.
4. Copie el contenido del registro 1 a la ubicación de memoria 2000+4+4.

¡Y tendría que representar cada una de estas instrucciones con un código numérico!

Si escribe un programa de esta manera suena como algo que le gustaría hacer, le entristecerá saber que la edad de oro de la programación en lenguaje de máquina ya pasó. Pero si prefiere algo un poco más agradable, abra su corazón a los lenguajes de programación de alto nivel.


#### Lenguajes de computadora de alto nivel y compiladores

Los lenguajes de programación de alto nivel, como C, simplifican su vida de programación de varias maneras. Primero, no tiene que expresar sus instrucciones en un código numérico. En segundo lugar, las instrucciones que utiliza están mucho más cerca de cómo podría pensar en un problema que del enfoque detallado que utiliza una computadora. En lugar de preocuparse por los pasos precisos de una CPU en particular, tiene que llevar a cabo una tarea en particular, puede expresar sus deseos en un nivel más abstracto. Para agregar dos números, por ejemplo, puede escribir lo siguiente:

```c
total = mine + yours;
```

Al ver un código como este, tienes una buena idea de lo que hace; mirar el equivalente en el lenguaje de máquina de varias instrucciones expresadas en código numérico es mucho menos esclarecedor.

Desafortunadamente, lo opuesto es cierto para una computadora; para ello, la instrucción de alto nivel es un galimatías incomprensible. Aquí es donde los compiladores entran en escena. El *compilador* es un programa que traduce el programa de lenguaje de alto nivel al conjunto detallado de instrucciones de idioma de la máquina que requiere la computadora. Usted hace el pensamiento de alto nivel; el compilador se ocupa de los detalles tediosos.

El enfoque del compilador tiene otro beneficio. En general, cada diseño de computadora tiene su propio lenguaje de máquina único; por lo que un programa escrito en el lenguaje de máquina para, por ejemplo, una CPU Intel Core i7 no significa nada para una CPU ARM Cortex-A57. Pero puede hacer coincidir un compilador con un lenguaje de máquina particular. Por lo tanto, con el compilador correcto o un conjunto de compiladores, puede convertir el mismo programa de lenguaje de alto nivel en una variedad de programas de lenguaje de máquina diferentes. Resuelve un problema de programación una vez y luego permite que los compiladores traduzcan la solución a una variedad de lenguajes de máquina. En resumen, los lenguajes de alto nivel, como C, Java y Pascal, describen acciones en una forma más abstracta y no están vinculados a una CPU particular o conjunto de instrucciones. Además, los lenguajes de alto nivel son más fáciles de aprender y mucho más fáciles de programar que los lenguajes de máquina.

>> Avances en informática

> En 1964, Control Data Corporation anunció la computadora CDC 6600. Se considera que esta máquina de llenado de habitaciones es la primera supercomputadora y tuvo un precio inicial de aproximadamente $6 millones. Era la computadora elegida para la investigación de física nuclear de alta energía. Un teléfono inteligente moderno es cientos de veces más capaz en términos de poder de cómputo y memoria. Puede mostrar videos y reproducir música, también. Y es un teléfono. En 1964, FORTRAN era el lenguaje de programación dominante, al menos en ingeniería y ciencia. Los lenguajes de programación no han evolucionado tan dramáticamente como el hardware en el que se ejecutan. No obstante, el mundo de los lenguajes de programación ha cambiado. Los lenguajes han proporcionado más apoyo primero para la programación estructurada, luego para la programación orientada a objetos como parte de la lucha para hacer frente a proyectos de programación cada vez más grandes. No solo han aparecido nuevos lenguajes, sino que los lenguajes existentes han cambiado con los tiempos.

#### Estándares del lenguaje

Actualmente, muchas implementaciones de C están disponibles. Idealmente, cuando se escribe un programa C, debería funcionar igual en cualquier implementación, siempre que no utilice programación específica de la máquina. Para que esto sea cierto en la práctica, las diferentes implementaciones deben cumplir con un estándar reconocido.

Al principio, no había un estándar oficial para C. En cambio, la primera edición de *The C Programming Language*, de Brian Kernighan y Dennis Ritchie (1978) se convirtió en el estándar aceptado, generalmente conocido como K&R C o Classic C. En particular, el "Manual de referencia C" en el apéndice de ese libro actuó como la guía para las implementaciones C. Los compiladores, por ejemplo, afirmarían ofrecer una implementación completa de K&R. Sin embargo, aunque este apéndice definió el lenguaje C, no definió la biblioteca C. Como en la mayoría de los lenguajes, C depende de su biblioteca, por lo que también es necesario un estándar de biblioteca. A falta de un estándar oficial, la biblioteca suministrada con la implementación de Unix se convirtió en un estándar de facto.

#### El primer estándar ANSI / ISO C

A medida que C evolucionó y se utilizó cada vez más en una mayor variedad de sistemas, la comunidad de C se dio cuenta de que necesitaba un estándar más completo, actualizado y riguroso. Para cumplir con esta necesidad, el Instituto Nacional Estadounidense de Estándares (ANSI) estableció un comité (X3J11) en 1983 para desarrollar un nuevo estándar, que fue adoptado formalmente en 1989. Este estándar (ANSI C) definió tanto el lenguaje como una biblioteca C estándar. La Organización Internacional de Normalización adoptó un estándar C (ISO C) en 1990. ISO C y ANSI C son esencialmente el mismo estándar. La versión final de la norma ANSI / ISO a menudo se conoce como C89 (porque fue cuando llegó la aprobación ANSI) o C90 (porque fue entonces cuando vino la aprobación ISO). Además, debido a que la versión ANSI salió primero, las personas a menudo usaban el término ANSI C. El comité tenía varios principios rectores. Quizás el más interesante fue el siguiente: Mantener el espíritu de C. El comité enumeró las siguientes ideas como expresión de parte de ese espíritu:

- Confíe en el programador.
- No evite que el programador haga lo que debe hacerse.
- Mantenga el lenguaje pequeño y simple.
- Proporcione solo una forma de hacer una operación.
- Haga que sea rápido, incluso si no se garantiza que sea portátil.

En el último punto, el comité quería decir que una implementación debería definir una operación particular en términos de lo que funciona mejor para la computadora objetivo en lugar de tratar de imponer una definición abstracta y uniforme. Encontrará ejemplos de esta filosofía a medida que aprende el idioma.

#### El estándar C99

En 1994, un comité conjunto ANSI/ISO, conocido entonces como el comité C9X, comenzó a revisar el estándar, un esfuerzo que resultó en el estándar C99. El comité aprobó los principios originales del estándar C90, incluido mantener el lenguaje pequeño y simple. La intención del comité no era agregar nuevas funciones al idioma, excepto cuando era necesario para cumplir los nuevos objetivos. Uno de estos objetivos principales era apoyar la programación internacional, por ejemplo, proporcionando formas de tratar con conjuntos de caracteres internacionales. Un segundo objetivo era "codificar la práctica existente para abordar las deficiencias evidentes". Por lo tanto, al satisfacer la necesidad de mover C a procesadores de 64 bits, el comité basó las adiciones al estándar en las experiencias de aquellos que trataron este problema en la vida real. Un tercer objetivo fue mejorar la idoneidad de C para realizar cálculos numéricos críticos para proyectos científicos y de ingeniería, haciendo de C una alternativa más atractiva a FORTRAN.

Estos tres puntos: internacionalización, corrección de deficiencias y mejora de la utilidad computacional fueron los principales objetivos orientados al cambio. Los planes de cambio restantes eran de naturaleza más conservadora, por ejemplo, minimizar las incompatibilidades con C90 y con C++ y mantener el lenguaje conceptualmente simple. En las palabras del comité, "... el comité se contenta con dejar que C++ sea el lenguaje más grande y ambicioso". El resultado es que los cambios C99 conservan la naturaleza esencial de C, y C sigue siendo un lenguaje delgado, limpio y eficiente. Este libro señala muchos de los cambios C99. Sin embargo, aunque el estándar ha estado fuera por un tiempo, no todos los compiladores en este momento implementan completamente todos los cambios del C99. Puede encontrar que algunos de ellos no están disponibles en su sistema. O puede encontrar que algunas características de C99 están disponibles solo si altera la configuración del compilador.

#### El estándar C11

Mantener un estándar es un proceso perpetuo, y en 2007 el Comité de Estándares se comprometió con la próxima revisión, C1X, que se realizó como C11. El comité planteó algunos principios rectores nuevos. Uno de ellos fue que el objetivo de "confiar en el programador" debería atenuarse de alguna manera frente a las preocupaciones contemporáneas de la programación de seguridad y protección. El comité también hizo algunas observaciones importantes. Una era que C99 no había sido tan bien recibido y respaldado por los proveedores como C90. Como consecuencia, algunas características de C99 se volvieron opcionales para C11. Una razón es que el comité consideró que no se debería exigir a los proveedores que prestan servicios en el mercado de máquinas pequeñas que admitan funciones que no se utilizan en sus entornos específicos. Otra observación fue que el estándar se estaba revisando no porque estuviera roto, sino porque había una necesidad de rastrear las nuevas tecnologías. Un ejemplo de esto es la adición de soporte opcional para programación concurrente en respuesta a la tendencia de usar múltiples procesadores en computadoras. Miramos brevemente este tema, pero explorarlo está más allá del alcance de este libro.

>> Nota
> Este libro usará los términos ANSI C o, en un espíritu más internacional, ANSI / ISO C o solo ISO C para referirse a las características comunes a C89 / 90 y estándares posteriores, y C99 y C11 para referirse a las nuevas características. Ocasionalmente, se referirá a C90 (por ejemplo, cuando se discute cuándo se agregó por primera vez una característica a C).

#### Usando C: Siete pasos

C, como has visto, es un lenguaje compilado. Si está acostumbrado a usar un lenguaje compilado, como Pascal o FORTRAN, estará familiarizado con los pasos básicos para armar un programa C. Sin embargo, si su fondo está en un idioma interpretado, como BASIC, o en un el lenguaje orientado a la interfaz gráfica, como Visual Basic, o si no tiene ningún fondo, debe aprender a compilar. Veremos ese proceso pronto, y verá que es directo y sensato. Primero, para darle una visión general de la programación, analicemos el acto de escribir un programa C en siete pasos. Tenga en cuenta que esto es una idealización. En la práctica, particularmente para proyectos más grandes, usted podría ir y venir, usando lo que aprendió en un paso posterior para refinar un paso anterior.

1. Define los objetivos del programa
2. Diseña el programa
3. Escribe el código
4. Compila
5. Ejecuta el programa
6. Prueba y depura el programa
7. Mantener y modificar el programa

#### Paso 1: Define los objetivos del programa

Naturalmente, debe comenzar con una idea clara de lo que quiere que haga el programa. Piense en términos de la información que su programa necesita, las hazañas de cálculo y manipulación que el programa necesita hacer, y la información que el programa debería informarle. En este nivel de planificación, debe pensar en términos generales, no en términos de un lenguaje informático específico.

#### Paso 2: Diseña el programa

Después de tener una imagen conceptual de lo que su programa debería hacer, debe decidir cómo lo hará el programa. ¿Cómo debería ser la interfaz de usuario? ¿Cómo debería el programa organizar? ¿Quién será el usuario objetivo? ¿Cuánto tiempo tienes para completar el programa? También debe decidir cómo representar los datos en el programa y, posiblemente, en los archivos auxiliares, así como también qué métodos usar para procesar los datos. Cuando aprendes por primera vez a programar en C, las elecciones serán simples, pero a medida que lidies con situaciones más complejas, verás que estas decisiones requieren más reflexión. Elegir una buena manera de representar la información a menudo puede hacer que el diseño del programa y el procesamiento de la información sean mucho más fáciles. De nuevo, debe pensar en términos generales, no en un código específico, pero algunas de sus decisiones pueden basarse en las características generales del idioma. Por ejemplo, un programador C tiene más opciones en la representación de datos que, por ejemplo, un programador Pascal.

#### Paso 3: Escribe el código

Ahora que tiene un diseño claro para su programa, puede comenzar a implementarlo escribiendo el código. Es decir, traduces el diseño de tu programa al lenguaje C. Aquí es donde realmente tiene que poner su conocimiento de C a trabajar. Puede esbozar sus ideas en papel, pero finalmente debe obtener su código en la computadora. La mecánica de este proceso depende de su entorno de programación. Presentaremos los detalles de algunos entornos comunes pronto. En general, utiliza un editor de texto para crear lo que se llama un archivo de código fuente. Este archivo contiene la representación C del diseño de su programa. Muestra un ejemplo de código fuente C.

```c
#include <stdio.h>
int main(void)
{
    int dogs;

    printf("How many dogs do you have?\n");
    scanf("%d", &dogs);
    printf("So you have %d dog(s)!\n", dogs);
    return 0;
}
```

Como parte de este paso, debe documentar su trabajo. La forma más simple es usar la función de comentarios de C para incorporar explicaciones en su código fuente. El Capítulo 2, "Introducción a C", explicará más sobre el uso de comentarios en su código.

#### Paso 4: Compilar

El siguiente paso es compilar el código fuente. Una vez más, los detalles dependen de su entorno de programación, y veremos algunos entornos comunes en breve. Por ahora, comencemos con una visión más conceptual de lo que sucede.

Recuerde que el compilador es un programa cuyo trabajo es convertir el código fuente en *código ejecutable*. El código ejecutable es el código en el lenguaje nativo, o el *lenguaje máquina*, de su computadora. Este lenguaje consiste en instrucciones detalladas expresadas en un código numérico. Como lo leyó antes, diferentes computadoras tienen diferentes lenguajes de máquina, y un compilador de C traduce C en un lenguaje de máquina particular. Los compiladores C también incorporan el código de las bibliotecas C en el programa final; las bibliotecas contienen un fondo de rutinas estándar, como `printf()` y `scanf()`, para su uso. (Más exactamente, un programa llamado *enlazador* trae las rutinas de la biblioteca, pero el compilador ejecuta el enlazador en la mayoría de los sistemas). El resultado final es un archivo ejecutable que contiene un código que la computadora entiende y que puede ejecutar.

El compilador también verifica que su programa sea válido C. Si el compilador encuentra errores, los informa a usted y no produce un archivo ejecutable. Comprender las quejas de un compilador en particular es otra habilidad que recogerás.

#### Paso 5: Corre el programa

Tradicionalmente, el archivo ejecutable es un programa que puede correr. Para ejecutar el programa en muchos entornos comunes, incluido el modo de comando de Windows, el modo de terminal Unix y el modo de terminal de Linux, simplemente escriba el nombre del archivo ejecutable. Otros entornos, como VMS en un VAX, pueden requerir un comando de ejecución o algún otro mecanismo. Los entornos de desarrollo integrados (IDE), como los provistos para entornos Windows y Macintosh, le permiten editar y ejecutar su programa C desde dentro del IDE seleccionando opciones de un menú o presionando teclas especiales. El programa resultante también se puede ejecutar directamente desde el sistema operativo haciendo clic o haciendo doble clic en el nombre o el nombre del archivo.

#### Paso 6: Prueba y depura el programa

El hecho de que su programa se ejecute es una buena señal, pero es posible que se ejecute incorrectamente. En consecuencia, debe verificar que su programa haga lo que se supone que debe hacer. Descubrirá que algunos de sus programas tienen bugs, en la jerga de la computadora. La depuración es el proceso de encontrar y corregir errores del programa. Cometer errores es una parte natural del aprendizaje. Parece inherente a la programación, por lo que cuando combina el aprendizaje y la programación, es mejor que se prepare para que le recuerden a menudo su falibilidad. A medida que te conviertas en un programador más poderoso y sutil, tus errores también serán más poderosos y sutiles. Tienes muchas oportunidades para equivocarte. Puede hacer un error de diseño básico. Puede implementar buenas ideas incorrectamente. Puede pasar por alto una entrada inesperada que daña su programa. Puede usar C incorrectamente. Usted puede hacer errores de tipeo. Puede poner paréntesis en el lugar incorrecto, y así sucesivamente. Encontrarás tus propios artículos para agregar a esta lista. Afortunadamente, la situación no es desesperada, aunque puede haber momentos en los que pienses que es así. El compilador detecta muchos tipos de errores, y hay cosas que puede hacer para ayudarse a rastrear los que el compilador no detecta. Este libro le dará consejos para eliminar errores a medida que avance.

#### Paso 7: Mantener y modificar el programa

Cuando crea un programa para usted o para otra persona, ese programa podría verse extensivamente. Si lo hace, probablemente encontrarás razones para hacer cambios en él. Tal vez hay un error menor que aparece solo cuando alguien ingresa un nombre que comienza con Zz, o puede pensar en una mejor manera de hacer algo en el programa. Podría agregar una nueva característica inteligente. Puede adaptar el programa para que se ejecute en un sistema informático diferente. Todas estas tareas se simplifican mucho si documenta el programa con claridad y si sigue las prácticas de diseño.

#### Comentario

La programación no suele ser tan lineal como el proceso que acabamos de describir. A veces tienes que ir y venir entre los pasos. Por ejemplo, cuando está escribiendo código, puede encontrar que su plan no era práctico. Puede ver una forma mejor de hacer las cosas o, después de ver cómo se ejecuta un programa, puede sentirse motivado para cambiar el diseño. Documentar su trabajo lo ayuda a avanzar y retroceder entre niveles.

La mayoría de los alumnos tienden a descuidar los pasos 1 y 2 (definir los objetivos del programa y diseñar el programa) e ir directamente al paso 3 (escribir el programa). Los primeros programas que escribe son lo suficientemente simples como para que pueda visualizar todo el proceso en su cabeza. Si comete un error, es fácil de encontrar. A medida que sus programas se vuelven más largos y más complejos, las visualizaciones mentales comienzan a fallar y los errores se vuelven más difíciles de encontrar. Eventualmente, aquellos que descuidan los pasos de planificación son condenados a horas de tiempo perdido, confusión y frustración mientras producen programas desagradables, disfuncionales y desagradables. Cuanto más grande y complejo sea el trabajo, más planificación requiere.

La moraleja es que debes desarrollar el hábito de planificar antes de codificar. Utilice la antigua pero honorable tecnología de lápiz y lápiz para anotar los objetivos de su programa y delinear el diseño. Si lo hace, eventualmente obtendrá dividendos sustanciales en tiempo ahorrado y satisfacción obtenida.

#### Mecánica de programación

Los pasos exactos que debe seguir para producir un programa dependen del entorno de su computadora. Como C es portátil, está disponible en muchos entornos, incluidos Unix, Linux, MS-DOS (sí, algunas personas todavía lo usan), Windows y Macintosh OS. No hay suficiente espacio en este libro para cubrir todos los entornos, particularmente porque los productos particulares evolucionan, mueren y son reemplazados. En primer lugar, sin embargo, veamos algunos aspectos compartidos por muchos entornos C, incluidos los cinco que acabamos de mencionar. Realmente no necesita saber lo que sigue para ejecutar un programa C, pero es bueno. También puede ayudarlo a comprender por qué debe seguir algunos pasos particulares para obtener un programa C. Cuando escribe un programa en el lenguaje C, almacena lo que escribe en un archivo de texto llamado archivo de código fuente. La mayoría de los sistemas C, incluidos los que mencionamos, requieren que el nombre del archivo termine en `.c` (por ejemplo, `wordcount.c` y `budget.c`). La parte del nombre antes del punto se denomina *nombre base*, y la parte posterior al punto se denomina *extensión*. Por lo tanto, `budget` es el nombre base y `c` es la extensión. La combinación `budget.c` es el nombre del archivo. El nombre también debe satisfacer los requisitos del sistema operativo de la computadora en particular. Por ejemplo, MS-DOS es un sistema operativo anterior para PC y clones de IBM. Requiere que el nombre base no tenga más de ocho caracteres, por lo que el nombre de archivo `wordcount.c` mencionado anteriormente no sería un nombre de archivo de DOS válido. Algunos sistemas Unix colocan un límite de 14 caracteres en el nombre completo, incluida la extensión; otros sistemas Unix permiten nombres más largos, hasta 255 caracteres. Linux, Windows y Macintosh OS también permiten nombres largos.

Para que tengamos algo concreto para referirnos, supongamos que tenemos un archivo fuente llamado `concrete.c` que contiene el código fuente C:

```c
#include <stdio.h>
int main(void)
{
    printf("Concrete contains gravel and cement.\n");
    return 0;
}
```

No se preocupe por los detalles del archivo de código fuente que se muestra; aprenderás sobre ellos en el Capítulo 2.

#### Archivos de código objeto, archivos ejecutables y bibliotecas

La estrategia básica en la programación en C es usar programas que conviertan su archivo de código fuente en un archivo ejecutable, que es un archivo que contiene el código de lenguaje máquina listo para ejecutar. Las implementaciones C normalmente hacen esto en dos pasos: compilar y vincular. El compilador convierte su código fuente en un código intermedio, y el enlazador combina esto con otro código para producir el archivo ejecutable. C usa este enfoque de dos partes para facilitar la modularización de programas. Puede compilar módulos individuales por separado y luego usar el enlazador para combinar los módulos compilados más tarde. De esta forma, si necesita cambiar un módulo, no tiene que volver a compilar los otros. Además, el enlazador combina su programa con el código de la biblioteca precompilada.

Hay varias opciones para la forma de los archivos intermedios. La opción más prevalente, y la que adoptan las implementaciones que se describen aquí, es convertir el código fuente en código de lenguaje de máquina, colocando el resultado en un archivo de código de objeto, o un archivo de objeto, para abreviar. (Esto supone que el código fuente consta de un solo archivo). Aunque el archivo de objeto contiene el código de idioma de la máquina, no está listo para ejecutarse. El archivo objeto contiene la traducción de su código fuente, pero aún no es un programa completo.

El primer elemento que falta en el archivo de código objeto es algo llamado código de inicio, que es un código que actúa como una interfaz entre su programa y el sistema operativo. Por ejemplo, puede ejecutar una PC de IBM compatible bajo MS Windows o bajo Linux. El hardware es el mismo en ambos casos, por lo que el mismo código de objeto funcionaría con ambos, pero necesitaría un código de inicio diferente para Windows que el que tendría para Linux, ya que estos sistemas manejan los programas de forma diferente unos de otros.

El segundo elemento que falta es el código para las rutinas de la biblioteca. Casi todos los programas C hacen uso de rutinas (llamadas *funciones*) que son parte de la biblioteca C estándar. Por ejemplo, `concrete.c` usa la función `printf()`. El archivo de código objeto no contiene el código para esta función; simplemente contiene instrucciones para usar la función `printf()`. El código real se almacena en otro archivo, llamado biblioteca. Un archivo de biblioteca contiene código de objeto para muchas funciones

En resumen, **un archivo de objeto y un archivo ejecutable consisten en instrucciones de lenguaje máquina**. Sin embargo, el archivo de objeto contiene la traducción del lenguaje de máquina solo para el código que usó, pero el archivo ejecutable también tiene código de máquina para las rutinas de biblioteca que usa y para el código de inicio.

En algunos sistemas, debe ejecutar los programas de compilación y enlace por separado. En otros sistemas, el compilador inicia el enlazador automáticamente, por lo que solo debe dar el comando de compilación.

Ahora veamos algunos sistemas específicos.

#### Sistemas Unix

Debido a que la popularidad y existencia de C comenzó en los sistemas Unix, comenzaremos allí. (Nota: en "Unix", incluimos sistemas como FreeBSD, que desciende de Unix pero no puede usar el nombre por razones legales).

##### Edición en un sistema Unix

Unix C no tiene su propio editor. En su lugar, utiliza uno de los editores de Unix de uso general, como emacs, jove, vi o un editor de texto del sistema X Window.

Sus dos responsabilidades principales son escribir el programa correctamente y elegir un nombre para el archivo que almacenará el programa. Como se discutió, el nombre debe terminar con `.c`. Tenga en cuenta que Unix distingue entre mayúsculas y minúsculas. Por lo tanto, `budget.c`, `BUDGET.c` y `Budget.c` son tres nombres distintos y válidos para los archivos fuente C, pero `BUDGET.C` no es un nombre válido porque usa una C mayúscula en lugar de una c minúscula. Usando el editor vi, preparamos el siguiente programa y lo almacenamos en un archivo llamado `inform.c`

```c
#include <stdio.h>
int main(void)
{
    printf("A .c is used to end a C program filename.\n");
    return 0;
}
```

Este texto es el código fuente e `inform.c` es el archivo fuente. El punto importante aquí es que el archivo fuente es el comienzo de un proceso, no el final.

#### Compilando en un sistema Unix

Nuestro programa, aunque innegablemente brillante, sigue siendo un galimatías en una computadora. Una computadora no entiende cosas como `#include` e `printf`. (En este punto, probablemente usted tampoco, pero pronto aprenderá, mientras que la computadora no). Como discutimos anteriormente, necesitamos la ayuda de un compilador para traducir nuestro código (código fuente) al código de la computadora (codigo de maquina). El resultado de estos esfuerzos será el archivo ejecutable, que contiene todo el código de máquina que la computadora necesita para realizar el trabajo.

Históricamente, el compilador de Unix C, invocado con el comando cc, definía el lenguaje. Pero no se mantuvo al ritmo del estándar en desarrollo, y se ha retirado. Sin embargo, los sistemas Unix suelen proporcionar un compilador de C de alguna otra fuente y luego hacen que el comando `cc` sea alias para ese compilador. Por lo tanto, puede continuar con el mismo comando, aunque pueda invocar compiladores diferentes en sistemas diferentes.

Para compilar el programa `inform.c`, escriba lo siguiente:

```bash
carlosal1015@Oromion:~$ cc inform.c
```
Después de un momento, el mensaje de Unix volverá, indicándote que la acción está completa. Es posible que reciba advertencias y mensajes de error si no pudo escribir el programa correctamente, pero supongamos que lo hizo todo bien. (Si el compilador se queja de la palabra `void`, su sistema aún no se ha actualizado a un compilador ANSI C. Pronto hablaremos más sobre estándares. Mientras tanto, simplemente elimine la palabra `void` del ejemplo.) Si usa el comando `ls` para liste sus archivos, encontrará que hay un nuevo archivo llamado `a.out`. Este es el archivo ejecutable que contiene la traducción (o compilación) del programa. Para ejecutarlo, simplemente escriba

```bash
carlosal1015@Oromion:~$ ./a.out
```

y la sabiduría se derrama:

```bash
carlosal1015@Oromion:~$ A .c is used to end a C program filename.
```

Si desea mantener el archivo ejecutable (`a.out`), debe cambiarle el nombre. De lo contrario, el archivo se reemplaza por uno nuevo la próxima vez que compile un programa.

¿Qué pasa con el código objeto? El compilador de `cc` crea un archivo de código de objeto que tiene el mismo nombre base que el código fuente, pero con una extensión `.o`. En nuestro ejemplo, el archivo de código de objeto se llama `inform.o`, pero no lo encontrará, porque el enlazador lo elimina una vez que se ha completado el programa ejecutable. Sin embargo, si el programa original usó más de un archivo de código fuente, los archivos de código objeto se guardarían. Cuando analicemos varios archivos de programas más adelante en el texto, verá que esta es una buena idea

#### La colección de compiladores GNU y la infraestructura del compilador LLVM

El Proyecto GNU, que data de 1987, es una colaboración masiva que ha desarrollado una gran cantidad de software gratuito similar a Unix. (GNU significa "GNU's Not Unix.") Uno de sus productos es GNU Compiler Collection, o GCC, que incluye el compilador C de GCC. GCC está en constante desarrollo, guiado por un comité de dirección, y su compilador de C sigue de cerca los cambios en los estándares de C. Las versiones de GCC están disponibles para una amplia variedad de plataformas de hardware y sistemas operativos, incluidos Unix, Linux y Windows. El compilador C de GCC se puede invocar con el comando gcc. Y muchos sistemas que usan gcc harán que cc sea un alias para gcc. El proyecto LLVM proporciona un segundo reemplazo para cc. El proyecto es una colección de fuente abierta de software relacionado con el compilador que data de un proyecto de investigación de 2000 en la Universidad de Illinois. Su compilador Clang procesa el código C y puede invocarse como clang. Disponible en varias plataformas, incluyendo Linux, Clang se convirtió en el compilador de C predeterminado para FreeBSD a finales de 2012. Al igual que GCC, Clang rastrea bastante bien el estándar C.

Ambos aceptan una opción `-v` para obtener información de la versión, por lo que en los sistemas que usan el alias `cc` para el comando `gcc` o `clang`, la combinación

```bash
carlosal1015@Oromion:~$ cc -v
```

muestra qué compilador y qué versión está utilizando.

Tanto los comandos `gcc` como `clang`, según la versión, pueden requerir opciones de tiempo de ejecución para invocar estándares C más recientes:

```bash
carlosal1015@Oromion:~$ gcc -std=c99 inform.c
carlosal1015@Oromion:~$ gcc -std=c1x inform.c
carlosal1015@Oromion:~$ gcc -std=c11 inform.c
```

El primer ejemplo invoca el estándar C99, el segundo invoca el borrador del estándar C11 para las versiones GCC antes de la aceptación del estándar, y el tercero invoca el estándar C11 para las versiones GCC que siguieron a la aceptación. El compilador Clang usa las mismas banderas.

#### Sistemas Linux

Linux es un popular sistema operativo de código abierto parecido a Unix que se ejecuta en una variedad de plataformas, incluidas PC y Mac. La preparación de los programas C en Linux es muy similar a la de los sistemas Unix, excepto que se usaría el compilador C de dominio público de GCC provisto por GNU. El comando de compilación se ve así

```bash
carlosal1015@Oromion:~$ gcc inform.c
```

Tenga en cuenta que la instalación de GCC puede ser opcional al instalar Linux, por lo que usted (o alguien) podría tener que instalar GCC si no se instaló anteriormente. Por lo general, la instalación hace que `cc` sea un alias para `gcc`, por lo que puede usar cc en la línea de comandos en lugar de gcc si lo desea.

Puede obtener más información sobre GCC, incluida información sobre nuevos lanzamientos en http://www.gnu.org/software/gcc/index.html.

#### Compiladores Línea de comando para PC

Los compiladores de C no son parte del paquete estándar de Windows, por lo que es posible que necesite obtener e instalar un compilador de C. Cygwin y MinGW son descargas gratuitas que hacen que el compilador de GCC esté disponible para el uso de la línea de comandos en una PC. Cygwin se ejecuta en su propia ventana, que tiene un aspecto Command-Prompt pero que imita un entorno de línea de comandos de Linux. MinGW, por otro lado, se ejecuta en el modo de comando de Windows. Estos vienen con la versión más nueva (o la más reciente) de GCC, que admite C99 y al menos algo de C11. El Borland C++ Compiler 5.5 es otra descarga gratuita; es compatible con C90.

Los archivos de código fuente deben ser archivos de texto plano, no archivos de procesador de palabras. (Los archivos del procesador de textos contienen mucha información adicional sobre las fuentes y el formato). Debería usar un editor de texto, como el Bloc de notas de Windows. Puede usar un procesador de textos si usa la función *Guardar como* para guardar el archivo en modo texto. El archivo debe tener una extensión `.c`. Algunos procesadores de texto agregan automáticamente una extensión `.txt` a los archivos de texto. Si esto le sucede, debe cambiar el nombre del archivo, reemplazando el texto con `c`.

Los compiladores de C para PC generalmente producen, pero no siempre, archivos de código de objeto intermedio que tienen una extensión .obj. A diferencia de los compiladores de Unix, estos compiladores generalmente no eliminan estos archivos cuando terminan. Algunos compiladores producen archivos en lenguaje ensamblador con extensiones `.asm` o usan algún formato especial propio. Algunos compiladores ejecutan el enlazador automáticamente después de compilar; otros pueden requerir que ejecute el enlazador manualmente. Vinculación de resultados en el archivo ejecutable, que agrega la extensión `.EXE` al nombre base del código fuente original. Por ejemplo, compilar y vincular un archivo de código fuente llamado `concrete.c` produce un archivo llamado `concrete.exe`. Puede ejecutar el programa escribiendo el nombre base en la línea de comando:

```bash
carlosal1015@Oromion:~$ C> concret
```

#### Entornos de desarrollo integrado (Windows)

Varios proveedores, incluidos Microsoft, Embarcadero y Digital Mars, ofrecen entornos de desarrollo integrados (IDE) basados ​​en Windows. (Actualmente, la mayoría son compiladores C y C++ combinados). Las descargas gratuitas incluyen Microsoft Visual Studio Express y Pelles C. Todas tienen entornos rápidos e integrados para armar programas en C. El punto clave es que cada uno de estos programas tiene un editor incorporado que puede usar para escribir un programa en C. Cada uno proporciona menús que le permiten nombrar y guardar su archivo de código fuente, así como también menús que le permiten compilar y ejecutar su programa sin abandonar el IDE. Cada uno lo devuelve al editor si el compilador encuentra cualquier error, y cada uno identifica las líneas ofensivas y las compara con los mensajes de error apropiados.

Los IDE de Windows pueden ser un poco intimidantes al principio porque ofrecen una variedad de objetivos, es decir, una variedad de entornos en los que se utilizará el programa. Por ejemplo, podrían darle una opción de programas de Windows de 32 bits, programas de Windows de 64 bits, archivos de biblioteca de enlace dinámico (DLL), etc. Muchos de los objetivos implican brindar soporte para la interfaz gráfica de Windows. Para administrar estas (y otras) elecciones, normalmente crea un proyecto al que luego agrega los nombres de los archivos de código fuente que va a utilizar. Los pasos precisos dependen del producto que use. Normalmente, primero utiliza el menú Archivo o el menú Proyecto para crear un proyecto. Lo importante es elegir la forma correcta de proyecto. Los ejemplos en este libro son ejemplos genéricos diseñados para ejecutarse en un entorno de línea de comandos simple. Los diversos IDE de Windows brindan una o más opciones para que coincidan con esta suposición poco exigente. Microsoft Visual Studio, por ejemplo, ofrece la opción Aplicación de consola Win32. Para otros sistemas, busque una opción que utilice términos como DOS EXE, consola o ejecutable de modo de caracteres. Estos modos ejecutarán su programa ejecutable en una ventana similar a una consola. Después de tener el tipo de proyecto correcto, use el menú IDE para abrir un nuevo archivo de código fuente. Para la mayoría de los productos, puede hacer esto utilizando el menú Archivo. Es posible que deba realizar pasos adicionales para agregar el archivo de origen al proyecto.

Debido a que los IDE de Windows normalmente manejan tanto C como C++, debe indicar que desea un programa C. Con algunos productos, utiliza el tipo de proyecto para indicar que desea utilizar C. Con otros productos, como Microsoft Visual C ++, utiliza la extensión de archivo .c para indicar que desea usar C en lugar de C ++. Sin embargo, la mayoría de los programas C también funcionan como programas C ++. La Sección de referencia IX, "Diferencias entre C y C ++", compara C y C ++.

Un problema que puede encontrar es que la ventana que muestra la ejecución del programa desaparece cuando finaliza el programa. Si ese es su caso, puede hacer que el programa se detenga hasta que presione la tecla Intro. Para hacerlo, agregue la siguiente línea al final del programa, justo antes de la declaración `return`:

```c
getchar();
```

Esta línea lee una pulsación de tecla, por lo que el programa se detendrá hasta que presione la tecla Enter. En ocasiones, dependiendo de cómo funcione el programa, puede que ya haya una pulsación de tecla en espera. En ese caso, tendrá que usar `getchar()` dos veces:

```c
getchar();
getchar();
```

Por ejemplo, si lo último que hizo el programa fue pedirte que ingreses tu peso, habrías tipeado tu peso y luego presionado la tecla Enter para ingresar los datos. El programa leería el peso, el primer `getchar()` leería la tecla Enter, y el segundo `getchar()` haría que el programa pause hasta que presione Enter nuevamente. Si esto no tiene mucho sentido para usted ahora, lo hará después de que aprenda más acerca de la entrada C. Y te recordaremos más tarde acerca de este enfoque.

Aunque los diversos IDE tienen muchos principios generales en común, los detalles varían de un producto a otro y, dentro de una línea de producto, de una versión a otra. Tendrás que hacer un algunos pocos experimentos para aprender cómo funciona tu compilador. Incluso podría tener que leer el manual o probar un tutorial en línea.

> Microsoft Visual Studio y el estándar C

> Microsoft Visual Studio y el software gratuito Microsoft Visual Studio Express tienen la mayor presencia en el desarrollo de software de Windows, por lo que su relación con los estándares C es de cierta importancia. En resumen, Microsoft ha alentado a los programadores a cambiar de C a C++ o C #. Visual Studio admite C89/90, pero su soporte para estándares posteriores, hasta la fecha, consiste en admitir aquellas características nuevas que también se encuentran en C++, como el tipo `long long`. Además, a partir de la edición de 2012, Visual Studio no ofrece C como una de las opciones para el tipo de proyecto. Sin embargo, aún puede usar Visual Studio con la gran mayoría de los programas de este libro. Una opción es simplemente elegir la opción C++, luego Win32 Console, luego Proyecto vacío en la configuración de la aplicación. Casi todos los C son compatibles con C++, por lo que la mayoría de los programas C de este libro también funcionan como programas C++. O bien, después de elegir la opción C ++, puede usar la extensión .c en lugar de la extensión .cpp predeterminada para el archivo fuente, y el compilador utilizará las reglas C en lugar de las reglas de C++.

#### La opción de Windows/Linux

Se pueden instalar muchas distribuciones de Linux desde Windows para configurar un sistema de arranque dual. Parte de su almacenamiento se reservará para un sistema Linux, y luego puede iniciarse en Windows o Linux. No puede ejecutar un programa de Linux desde Windows o viceversa, y no puede acceder a los archivos de Linux desde Windows, pero puede acceder a los documentos de Windows desde Linux.

#### C en el Macintosh

Actualmente, Apple ofrece su sistema de desarrollo [Xcode](https://developer.apple.com/xcode/) como una descarga gratuita. (En el pasado, algunas veces era gratis, a veces disponible por una carga modesta). Le permite elegir entre varios lenguajes de programación, incluido C.

Xcode, con su capacidad para manejar varios lenguajes de programación, para apuntar a múltiples plataformas. y desarrollar proyectos a gran escala puede parecer intimidante. Pero necesita aprender lo suficiente para producir programas C simples. Con Xcode 9.4, use el menú Archivo para seleccionar Nuevo, Proyecto, Herramienta de línea de comandos de la aplicación OS X, luego ingrese el nombre de un producto y seleccione C para el Tipo. Xcode usa el compilador Clang o GCC C para el código C. Solía ​​usar GCC por defecto, y ahora usa Clang por defecto. Puede usar la configuración de Xcode para elegir qué compilador utiliza y también para qué estándar C es compatible. (Debido a cuestiones de licencia, la versión de Clang disponible con Xcode es más reciente que la versión de GCC).

Mac OS X está basado en Unix y la utilidad Terminal abre una ventana que le permite ejecutar programas en un entorno de línea de comandos de Unix. Apple no proporciona un compilador de línea de comandos como parte de su paquete estándar, pero si descarga Xcode, también puede descargar herramientas de línea de comando opcionales que le permiten usar los comandos clang y gcc para compilar en modo línea de comando.

#### Cómo está organizado este libro

Hay muchas formas de organizar la información. Uno de los enfoques más directos es presentar todo sobre el tema A, todo sobre el tema B, y así sucesivamente. Esto es particularmente útil como referencia para que pueda encontrar toda la información sobre un tema determinado en un solo lugar. Pero generalmente no es la mejor secuencia para aprender un tema. Por ejemplo, si comenzó a aprender inglés aprendiendo primero todos los sustantivos, su capacidad para expresar ideas sería muy limitada. Claro, podrías señalar objetos y gritar sus nombres, pero estarías mucho mejor equipado para expresarte si aprendieras solo unos pocos sustantivos, verbos, adjetivos, etc., junto con algunas reglas sobre cómo esas partes se relacionan con unos y otros.

Para proporcionarle una información más equilibrada, este libro utiliza un enfoque en espiral para introducir varios temas en los capítulos anteriores y volver más adelante para analizarlos de manera más completa. Por ejemplo, entender las funciones es esencial para comprender C. En consecuencia, varios de los primeros capítulos incluyen un análisis de las funciones para que cuando llegue a la discusión completa en el Capítulo 9, "Funciones", ya haya logrado cierta facilidad sobre usando funciones. De manera similar, los primeros capítulos hacen una vista previa de las cadenas y bucles para que pueda comenzar a utilizar estas útiles herramientas en sus programas antes de conocerlos en detalle.

#### Las convenciones usadas en este libro

Estamos casi listos para comenzar a estudiar el lenguaje C en sí mismo. Esta sección cubre algunas de las convenciones que usamos para presentar el material.

#### Tipo de letra

Para el texto que representa los programas y la entrada y salida de la computadora, utilizamos una fuente de tipo que se parece a lo que puede ver en una pantalla o en un resultado impreso. Ya lo hemos usado algunas veces. En caso de que se le pase por alto, la fuente es similar a la siguiente:

```c
#include <stdio.h>
int main (void)
{
    printf ("El  concreto contiene grava y cemento.\n");

    return 0;
}
```

El mismo tipo de monoespaciado es para los términos relacionados con el código utilizados en el texto, como `main()` y para los nombres de archivo, como `stdio.h`. El libro utiliza monoespaciado cursiva para términos de marcador de posición para los que se espera que sustituya términos específicos, como en el siguiente modelo de declaración:

```c
type_name variable_name;
```

Aquí, por ejemplo, puede reemplazar `type_name` con `int` y `variable_name` con `zebra_count`.

#### Salida del programa

La salida de la computadora se imprime en el mismo formato, con la excepción de que la entrada del usuario se muestra en negrita. Por ejemplo, el siguiente es un resultado del programa de un ejemplo en el Capítulo 14, "Estructuras y otras formas de datos":

```bash
Por favor ingrese el título del libro.
Presione [enter] al comienzo de una línea para detenerse.

Mi vida como un Budgie
Ahora ingrese el autor.

Mack Zackles
```

Las líneas impresas en la fuente normal de la computadora son salidas del programa, y la línea en negrita es la entrada del usuario.

Hay muchas maneras en que usted y una computadora pueden comunicarse entre sí. Sin embargo, supondremos que escribe comandos utilizando un teclado y que lee la respuesta en una pantalla.

#### Pulsaciones de teclas especiales

Por lo general, envía una línea de instrucciones presionando una tecla llamada Enter, c/r, Return o alguna variación de estas. Nos referimos a esta clave en el texto como la tecla *Intro*. Normalmente, el libro da por descontado que usted presiona la tecla Enter al final de cada línea de entrada. Sin embargo, para aclarar puntos particulares, algunos ejemplos muestran explícitamente la tecla Enter, usando el símbolo `[enter]` para representarlo. Los corchetes significan que presionas una sola tecla en lugar de escribir la palabra enter.

También nos referimos a los caracteres de control, como `Ctrl+D`. Esta notación significa presionar la tecla D mientras presiona la tecla denominada `Ctrl` (o quizás Control).

#### Sistemas utilizados en la preparación de este libro

Algunos aspectos de C, como la cantidad de espacio utilizado para almacenar un número, dependen del sistema. Cuando damos ejemplos y nos referimos a "nuestro sistema", generalmente hablamos de un MacBook que se ejecuta bajo OS X 10.13.5 y que usa el sistema de desarrollo Xcode 9.4 con el compilador Clang 5.0. La mayoría de los programas también se han compilado utilizando Microsoft Visual Studio Express 2012 y Pelles C 7.0 en un sistema Windows 7 y GCC 7.0 en un sistema Ubuntu 18.04 Linux.

Puede descargar el código de los ejemplos de este libro si registra el libro en [www.informit.com/registrarse](www.informit.com/registrarse).

#### Su sistema--lo que necesita

Necesita tener un compilador de C o acceder a uno. C se ejecuta en una enorme variedad de sistemas informáticos, por lo que tiene muchas opciones. Asegúrese de utilizar un compilador de C diseñado para su sistema en particular. Algunos de los ejemplos en este libro requieren soporte para los estándares C99 o C11, pero la mayoría de los ejemplos funcionarán con un compilador C90. Si el compilador que usa es anterior de ANSI/ISO, tendrá que hacer ajustes, probablemente con la frecuencia suficiente como para alentarlo a buscar algo más nuevo. La mayoría de los proveedores de compiladores ofrecen precios especiales para estudiantes y educadores, por lo que si usted pertenece a esa categoría, consulte los sitios web de los proveedores.

#### Elementos especiales

El libro incluye varios elementos especiales que resaltan puntos particulares: barras laterales, consejos, precauciones y notas. Lo siguiente ilustra sus apariencias y usos:

> **Barra lateral**
> 
> Una barra lateral proporciona una discusión más profunda o antecedentes adicionales para ayudar a iluminar un tema.

> **Consejos**
> 
> Las sugerencias presentan guías breves y útiles para situaciones particulares de programación.

> **Advertencia**
> 
> Una advertencia lo alerta sobre posibles trampas.

> **Nota**
> 
> Las notas proporcionan una categoría general para los comentarios que no entran en una de las otras categorías.

#### Resumen

C es un lenguaje de programación poderoso y conciso. Es popular porque ofrece útiles herramientas de programación, buen control del hardware y porque los programas C son más fáciles que la mayoría de transportar de un sistema a otro.

C es un lenguaje compilado. Los compiladores C y los enlazadores son programas que convierten el código fuente del lenguaje C en código ejecutable.

Programar en C puede ser agotador, difícil y frustrante, pero también puede ser intrigante, excitante y satisfactorio. Esperamos que lo encuentre tan agradable y fascinante como nosotros.

#### Preguntas de revisión

Encontrará las respuestas a las preguntas de revisión en el Apéndice A, "Respuestas a las preguntas de revisión".

1. ¿Qué significa la portabilidad en el contexto de la programación?

Un programa perfectamente portátil es aquel cuyo código fuente puede, sin modificaciones, ser compilado a un programa exitoso en una variedad de diferentes sistemas informáticos.

2. Explique la diferencia entre un archivo de código fuente, un archivo de código objeto y un archivo ejecutable.

Un archivo de código fuente contiene código tal como está escrito en cualquier idioma que el programador esté usando. Un archivo de código de objeto contiene código de lenguaje de máquina; no necesita ser el código para un programa completo. Un archivo ejecutable contiene el código completo, en lenguaje de máquina, que constituye un programa ejecutable.

3. ¿Cuáles son los siete pasos principales en la programación?

a. Definiendo los objetivos del programa.

b. Diseñando el programa.

c. Codificando el programa.

d. Compilando el programa.

e. Ejecutando el programa.

f. Prueba y depuración del programa.

g. Manteniendo y modificando el programa.

4. ¿Qué hace un compilador?

Un compilador traduce el código fuente (por ejemplo, código escrito en C) al código de lenguaje de máquina equivalente, también denominado *código de objeto*.

5. ¿Qué hace un enlazador?

El enlazador combina el código fuente traducido con el código de la biblioteca y el código de inicio para producir un programa ejecutable.

#### Ejercicio de programación

No esperamos que escriba código C todavía, por lo que este ejercicio se concentra en las primeras etapas del proceso de programación.

1. Usted acaba de ser empleado por MacroMúsculo, Inc. (Software para Cuerpos Duros). La compañía está ingresando al mercado europeo y quiere un programa que convierta pulgadas a centímetros (1 pulgada = 2.54 cm). La compañía quiere que el programa se configure de modo que indique al usuario que ingrese un valor en pulgadas. Su tarea es definir los objetivos del programa y diseñar el programa (pasos 1 y 2 del proceso de programación).

**Solución:**

Según los siete pasos del proceso de programación, los pasos uno y dos son los siguientes:

1. Convertir los datos de entradas en pulgadas a centímetros.
2. El diseño es el que se muestra abajo:

```
subproceso pulgadas2centimetros
inicio
    flotante pulgadas, centimentros, conversor = 2.54

    imprimir(Ingrese un valor en pulgadas)
    leer(pulgadas)
    
    centimetros <- pulgadas * conversor

    imprimir(El valor es @, centimetros)
fin
```