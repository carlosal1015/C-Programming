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
#include <string.h>
unsigned short int POINTS(unsigned short int, unsigned short int);
void TABLEGROUP(unsigned short int array[], unsigned short int n);

struct COUNTRY
{
	char NAME[15];
    unsigned short int SCORE1;
    unsigned short int SCORE2;
    unsigned short int SCORE3;
} A1, A2, A3, A4, B1, B2, B3, B4, C1, C2, C3, C4, D1, D2, D3, D4, E1, E2, E3, E4, F1, F2, F3, F4, G1, G2, G3, G4, H1, H2, H3, H4;

/*struct GROUP
{
    struct COUNTRY COUNTRY1, COUNTRY2, COUNTRY3, COUNTRY4;
} GRUPO_A, GRUPO_B, GRUPO_C, GRUPO_D, GRUPO_E, GRUPO_F, GRUPO_G, GRUPO_H;
*/
int main(void)
{   
    strcpy(A1.NAME, "Russia"), strcpy(A2.NAME, "Saudi Arabia"), strcpy(A3.NAME, "Egypt"), strcpy(A4.NAME, "Uruguay");
    A1.SCORE1 = 5, A1.SCORE2 = 3, A2.SCORE3 = 0;
    A2.SCORE1 = 0, A2.SCORE2 = 0, A2.SCORE3 = 2;
    A3.SCORE1 = 0, A3.SCORE2 = 1, A3.SCORE3 = 1;
    A4.SCORE1 = 1, A4.SCORE2 = 1, A4.SCORE3 = 3;

    strcpy(B1.NAME, "Portugal"), strcpy(B2.NAME, "Spain"), strcpy(B3.NAME, "Morocco"), strcpy(B4.NAME, "Iran");
    B1.SCORE1 = 3, B1.SCORE2 = 1, B2.SCORE3 = 1;
    B2.SCORE1 = 3, B2.SCORE2 = 1, B2.SCORE3 = 2;
    B3.SCORE1 = 0, B3.SCORE2 = 0, B3.SCORE3 = 2;
    B4.SCORE1 = 1, B4.SCORE2 = 0, B4.SCORE3 = 1;

    strcpy(C1.NAME, "France"), strcpy(B2.NAME, "Australia"), strcpy(B3.NAME, "Peru"), strcpy(B4.NAME, "Denmark");
    C1.SCORE1 = 2, C1.SCORE2 = 1, C2.SCORE3 = 0;
    C2.SCORE1 = 1, C2.SCORE2 = 1, C2.SCORE3 = 0;
    C3.SCORE1 = 0, C3.SCORE2 = 0, C3.SCORE3 = 2;
    C4.SCORE1 = 1, C4.SCORE2 = 1, C4.SCORE3 = 0;

    strcpy(D1.NAME, "Argentina"), strcpy(D2.NAME, "Iceland"), strcpy(D3.NAME, "Croatia"), strcpy(D4.NAME, "Nigeria");
    D1.SCORE1 = 1, D1.SCORE2 = 0, D2.SCORE3 = 2;
    D2.SCORE1 = 1, D2.SCORE2 = 0, D2.SCORE3 = 1;
    D3.SCORE1 = 2, D3.SCORE2 = 3, D3.SCORE3 = 2;
    D4.SCORE1 = 0, D4.SCORE2 = 2, D4.SCORE3 = 1;

    strcpy(E1.NAME, "Brazil"), strcpy(E2.NAME, "Switzerland"), strcpy(E3.NAME, "Costa Rica"), strcpy(E4.NAME, "Serbia");
    E1.SCORE1 = 1, E1.SCORE2 = 2, E2.SCORE3 = 2;
    E2.SCORE1 = 1, E2.SCORE2 = 2, E2.SCORE3 = 2;
    E3.SCORE1 = 0, E3.SCORE2 = 0, E3.SCORE3 = 2;
    E4.SCORE1 = 1, E4.SCORE2 = 1, E4.SCORE3 = 0;

    strcpy(F1.NAME, "Germany"), strcpy(F2.NAME, "Mexico"), strcpy(F3.NAME, "Sweden"), strcpy(F4.NAME, "South Korea");
    F1.SCORE1 = 0, F1.SCORE2 = 2, F2.SCORE3 = 0;
    F2.SCORE1 = 1, F2.SCORE2 = 2, F2.SCORE3 = 0;
    F3.SCORE1 = 1, F3.SCORE2 = 1, F3.SCORE3 = 3;
    F4.SCORE1 = 0, F4.SCORE2 = 1, F4.SCORE3 = 2;

    strcpy(G1.NAME, "Belgium"), strcpy(G2.NAME, "Panama"), strcpy(G3.NAME, "Tunisia"), strcpy(G4.NAME, "England");
    G1.SCORE1 = 3, G1.SCORE2 = 5, G2.SCORE3 = 1;
    G2.SCORE1 = 0, G2.SCORE2 = 1, G2.SCORE3 = 1;
    G3.SCORE1 = 1, G3.SCORE2 = 2, G3.SCORE3 = 2;
    G4.SCORE1 = 2, G4.SCORE2 = 6, G4.SCORE3 = 0;

    strcpy(H1.NAME, "Poland"), strcpy(H2.NAME, "Senegal"), strcpy(H3.NAME, "Colombia"), strcpy(H4.NAME, "Japan");
    H1.SCORE1 = 1, H1.SCORE2 = 0, H2.SCORE3 = 1;
    H2.SCORE1 = 2, H2.SCORE2 = 2, H2.SCORE3 = 0;
    H3.SCORE1 = 1, H3.SCORE2 = 3, H3.SCORE3 = 1;
    H4.SCORE1 = 2, H4.SCORE2 = 2, H4.SCORE3 = 0;

    //printf("%s\n%hu", A1.NAME, A1.SCORE1);
    
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
	scanf("%hu", &SCORE3DEN);//0
	scanf("%hu", &SCORE3FRA);//0

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

	//Inserción de los puntos para ordenar la tabla de grupos

	unsigned short int array[100]= {POINTSPER, POINTSDEN, POINTSAUS, POINTSFRA};

 	printf("Tabla acumulada del grupo C:\n");
	
	TABLEGROUP(array, 4);

	return 0;
}

// Función que calcula los puntos de algún partido.
unsigned short int POINTS(unsigned short int SCORE1, unsigned short int SCORE2)
{
	if(SCORE1>SCORE2){
		return 3;
	}	
	else if(SCORE1<SCORE2){
		return 0;
	}
	else return 1;
}

// Función que muestra la tabla ordenada
void TABLEGROUP(unsigned short int array[], unsigned short int n)
{
   unsigned short int i, j, swap;

   for (i = 0 ; i < ( n - 1 ); i++)
	{
		for (j = 0 ; j < n - (i + 1); j++)
		{
			if (array[j] < array[j+1])
			{
				swap       = array[j];
				array[j]   = array[j+1];
				array[j+1] = swap;
			}
		}
	}

	for ( i = 0 ; i < n ; i++ )
		printf("%hu\n", array[i]);
}