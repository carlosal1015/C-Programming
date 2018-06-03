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

Los pasos exactos que debe seguir para producir un programa dependen del entorno de su computadora. Como C es portátil, está disponible en muchos entornos, incluidos Unix, Linux, MS-DOS (sí, algunas personas todavía lo usan), Windows y Macintosh OS. No hay suficiente espacio en este libro para cubrir todos los entornos, particularmente porque los productos particulares evolucionan, mueren y son reemplazados. En primer lugar, sin embargo, veamos algunos aspectos compartidos por muchos entornos C, incluidos los cinco que acabamos de mencionar. Realmente no necesita saber lo que sigue para ejecutar un programa C, pero es bueno. También puede ayudarlo a comprender por qué debe seguir algunos pasos particulares para obtener un programa C. Cuando escribe un programa en el lenguaje C, almacena lo que escribe en un archivo de texto llamado archivo de código fuente. La mayoría de los sistemas C, incluidos los que mencionamos, requieren que el nombre de