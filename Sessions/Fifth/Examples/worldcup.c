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
#include <stdlib.h>	// ?
#include <string.h>
unsigned short int POINTS(unsigned short int, unsigned short int);
int main(void)
{
	char PER[15], DEN[15], AUS[15], FRA[15];

	unsigned short int SCORE1PER, SCORE1DEN, SCORE1AUS, SCORE1FRA;
	unsigned short int SCORE2PER, SCORE2DEN, SCORE2AUS, SCORE2FRA;
	unsigned short int SCORE3PER, SCORE3DEN, SCORE3AUS, SCORE3FRA;

	unsigned short int POINTSPER, POINTSDEN, POINTSAUS, POINTSFRA;

	printf("Ingrese el nombre de cada uno de los equipos:\n");
	printf("El nombre de PER es:\n");
	scanf("%s", PER);
	printf("El nombre de DEN es:\n");
	scanf("%s", DEN);
	printf("El nombre de AUS es:\n");
	scanf("%s", AUS);
	printf("El nombre de FRA es:\n");
	scanf("%s", FRA);

	printf("Ingrese el marcador de los resultados del Grupo C:\n");
	// Primera jornada
	printf("Resultado del partido %s-%s: (2 - 1)\n", FRA, AUS);
	scanf("%hu", &SCORE1FRA);//2
	scanf("%hu", &SCORE1AUS);//1

	printf("Resultado del partido %s-%s: (0 - 1)\n", PER, DEN);
	scanf("%hu", &SCORE1PER);//0
	scanf("%hu", &SCORE1DEN);//1

	// Segunda jornada
	printf("Resultado del partido %s-%s: (1 - 1)\n", DEN, AUS);
	scanf("%hu", &SCORE2DEN);//1
	scanf("%hu", &SCORE2AUS);//1

	printf("Resultado del partido %s-%s: (1 - 0)\n", FRA, PER);
	scanf("%hu", &SCORE2FRA);//1
	scanf("%hu", &SCORE2PER);//0

	// Tercera jornada
	printf("Resultado del partido %s-%s: (0 - 2)\n", AUS, PER);
	scanf("%hu", &SCORE3AUS);//
	scanf("%hu", &SCORE3PER);//

	printf("Resultado del partido %s-%s: (0 - 0)\n", DEN, FRA);
	scanf("%hu", &SCORE3DEN);
	scanf("%hu", &SCORE3FRA);

	// Calculando los puntajes
	POINTSPER = POINTS(SCORE1PER,SCORE1DEN) + POINTS(SCORE2PER,SCORE2FRA) + POINTS(SCORE3PER,SCORE3AUS);
	POINTSDEN = POINTS(SCORE1DEN,SCORE1PER) + POINTS(SCORE2DEN,SCORE2AUS) + POINTS(SCORE3DEN,SCORE3FRA);
	POINTSAUS = POINTS(SCORE1AUS,SCORE1FRA) + POINTS(SCORE2AUS,SCORE2DEN) + POINTS(SCORE3AUS,SCORE3PER);
	POINTSFRA = POINTS(SCORE1FRA,SCORE1AUS) + POINTS(SCORE2FRA,SCORE2PER) + POINTS(SCORE3FRA,SCORE3DEN);

	// Mostrando resultados de cada partido
	printf("Grupo C:\n\n");
	
	printf("Primera fecha:\n\n");
	printf("%-15s%-15s%-15s%-15s\n", PER, DEN, FRA, AUS);
	printf("%-15hu%-15hu%-15hu%-15hu\n\n", SCORE1PER, SCORE1DEN, SCORE1FRA, SCORE1AUS);

	printf("Segunda fecha:\n\n");
	printf("%-15s%-15s%-15s%-15s\n", PER, FRA, DEN, AUS);
	printf("%-15hu%-15hu%-15hu%-15hu\n\n", SCORE2PER, SCORE2FRA, SCORE2DEN, SCORE2AUS);

	printf("Tercera fecha:\n\n");
	printf("%-15s%-15s%-15s%-15s\n", PER, AUS, DEN, FRA);
	printf("%-15hu%-15hu%-15hu%-15hu\n\n", SCORE3PER, SCORE3AUS, SCORE3DEN, SCORE3FRA);

	int array[100]= {POINTSPER, POINTSDEN, POINTSAUS, POINTSFRA};

	int  n, i, j, swap;
  n=4;

  for (i = 0 ; i < ( n - 1 ); i++)
  {
    for (j = 0 ; j < n - (i + 1); j++)
    {
      if (array[j] < array[j+1]) // For decreasing order use < 
      {
        swap       = array[j];
        array[j]   = array[j+1];
        array[j+1] = swap;
      }
    }
  }

  printf("Sorted list in ascending order:\n");

  for ( i = 0 ; i < n ; i++ )
     printf("%d\n", array[i]);

	// Mostrando la tabla acumulada
	//printf("Tabla acumulada del Grupo C:\n");
	//printf("%-15s%-15hu%-15s%-15hu%-15s%-15hu%-15s%-15hu\n", PER, POINTSPER, DEN, POINTSDEN, FRA, POINTSFRA, AUS, POINTSFRA);

	return 0;
}
// Función que calcula los puntos de algún partido.
unsigned short int POINTS(unsigned short int SCORE1, unsigned short int SCORE2){
	if(SCORE1>SCORE2){
		return 3;
	}	
	else if(SCORE1<SCORE2){
		return 0;
	}
	else return 1;
}
// Nota: Se puede usar arreglos para cada país.
