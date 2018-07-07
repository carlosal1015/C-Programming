/*
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

#include <stdio.h>
#include<string.h>
int POINTS(int, int);
main()
{
char PER[15], DEN[15], AUS[15], FRA[15];

unsigned short int SCORE1PER, SCORE1DEN, SCORE1AUS, SCORE1FRA;
unsigned short int SCORE2PER, SCORE2DEN, SCORE2AUS, SCORE2FRA;
unsigned short int SCORE3PER, SCORE3DEN, SCORE3AUS, SCORE3FRA;

unsigned short int POINTSPER, POINTSDEN, POINTSAUS, POINTSFRA;

printf("Ingrese el nombre de cada uno de los equipos:\n");
printf("El nombre de PER es:\n");
scanf("%s", &PER);
printf("El nombre de DEN es:\n");
scanf("%s", &DEN);
printf("El nombre de AUS es:\n");
scanf("%s", &AUS);
printf("El nombre de FRA es:\n");
scanf("%s", &FRA);

printf("Ingrese el marcador de los resultados del Grupo C:\n");
// Primera jornada
printf("Resultado del partido %s-%s:\n", FRA, AUS);
scanf("%u", &SCORE1FRA);//2
scanf("%u", &SCORE1AUS);//1

printf("Resultado del partido %s-%s:\n", PER, DEN);
scanf("%u", &SCORE1PER);//0
scanf("%u", &SCORE1DEN);//1

// Segunda jornada
printf("Resultado del partido %s-%s:\n", DEN, AUS);
scanf("%u", &SCORE2DEN);//1
scanf("%u", &SCORE2AUS);//1

printf("Resultado del partido FRANCE-%s:\n", PER);
scanf("%u", &SCORE2FRA);//1
scanf("%u", &SCORE2PER);//0

// Tercera jornada
printf("Resultado del partido %s-%s:\n", AUS, PER);
scanf("%u", &SCORE3AUS);//
scanf("%u", &SCORE3PER);//

printf("Resultado del partido %s-FRANCE:\n", DEN);
scanf("%u", &SCORE3DEN);
scanf("%u", &SCORE3FRA);

// Calculando los puntajes
POINTSPER = POINTS(SCORE1PER,SCORE1DEN) + POINTS(SCORE2PER,SCORE2FRA) + POINTS(SCORE3PER,SCORE3AUS);
POINTSDEN = POINTS(SCORE1DEN,SCORE1PER) + POINTS(SCORE2DEN,SCORE2AUS) + POINTS(SCORE3DEN,SCORE3FRA);
POINTSAUS = POINTS(SCORE1AUS,SCORE1FRA) + POINTS(SCORE2AUS,SCORE2DEN) + POINTS(SCORE3AUS,SCORE3PER);
POINTSFRA = POINTS(SCORE1FRA,SCORE1AUS) + POINTS(SCORE2FRA,SCORE2PER) + POINTS(SCORE3FRA,SCORE3DEN);

// Mostrando resultados de cada partido
printf("Grupo C:\n");
printf("\t %s \t %s \t %s \t %s\n", PER, FRA, AUS, DEN);
printf("%s\t- %s\t&\t %s\t- %s\n", PER, DEN, FRA, AUS);
printf("%u\t- %u\t&\t %u\t- %u\n", SCORE1PER, SCORE1DEN, SCORE1FRA, SCORE1AUS);

printf("%s\t- %s\t&\t %s\t- %s\n", PER, FRA, DEN, AUS);
printf("%u\t- %u\t&\t %u\t- %u\n", SCORE1PER, SCORE1FRA, SCORE1DEN, SCORE1AUS);

printf("%s\t- %s\t&\t %s\t- %s\n", PER, AUS, DEN, FRA);
printf("%u\t- %u\t&\t %u\t- %u\n", SCORE1PER, SCORE1AUS, SCORE1DEN, SCORE1FRA);

// Calculando el orden de mérito (Método de la burbuja)
/*for (i = 0; i < 4; i++)
    scanf("%d", &array[c]);

  for (c = 0 ; c < n - 1; c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (array[d] > array[d+1]) // For decreasing order use <
      {
        swap       = array[d];
        array[d]   = array[d+1];
        array[d+1] = swap;
      }
    }
  }
*/
// Mostrando la tabla acumulada
printf("Tabla acumulada del Grupo C:\n");
printf("%s %u\n%s %u\n%s %u\n%s %u\n", PER, POINTSPER, DEN, POINTSDEN, FRA, POINTSFRA, AUS, POINTSFRA);
}

// Función que calcula los puntos de algún partido.
int POINTS(int SCORE1, int SCORE2){
	if(SCORE1>SCORE2){
		return 3;
	}
	
	else if(SCORE1<SCORE2){
		return 0;
	}
	else return 1;
}

// Nota: Se puede usar arreglos para cada país.
