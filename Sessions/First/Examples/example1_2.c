/*
exercise5_1.c

Copyright © 2018 Oromion <caznaranl@uni.pe>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <stdio.h>          //  Requisito del programa:
main()                      //  Sin esa función no corre el programa. Si uso [] o (), el programa no funcionará.
{                           //  Aquí inicia el programa.
int num;                    //  Se puede usar otro nombre.
num =1;                     //  Se puede cambiar el valor de num, por ejemplo: num = num * num;

printf("Soy una simple ");  /*  Usa la función printf() */
printf("computer \n");
printf("Mi número favorito es %d porque es el primero. \n", num);
}