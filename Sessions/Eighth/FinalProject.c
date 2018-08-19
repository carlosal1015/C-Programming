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
    unsigned short int SCOREFINAL;
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

    strcpy(C1.NAME, "France"), strcpy(C2.NAME, "Australia"), strcpy(C3.NAME, "Peru"), strcpy(C4.NAME, "Denmark");
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

    /*
    printf("%s\n%hu", A1.NAME, A1.SCORE1);

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
    */
	// Calculando los puntajes
	A1.SCOREFINAL = POINTS(A1.SCORE1,A2.SCORE1) + POINTS(A1.SCORE2,A3.SCORE2) + POINTS(A1.SCORE3,A4.SCORE3);
	A2.SCOREFINAL = POINTS(A2.SCORE1,A1.SCORE1) + POINTS(A2.SCORE2,A4.SCORE2) + POINTS(A2.SCORE3,A3.SCORE3);
	A3.SCOREFINAL = POINTS(A3.SCORE1,A4.SCORE1) + POINTS(A3.SCORE2,A1.SCORE2) + POINTS(A3.SCORE3,A2.SCORE3);
	A4.SCOREFINAL = POINTS(A4.SCORE1,A3.SCORE1) + POINTS(A4.SCORE2,A2.SCORE2) + POINTS(A4.SCORE3,A1.SCORE3);

    B1.SCOREFINAL = POINTS(B1.SCORE1,B2.SCORE1) + POINTS(B1.SCORE2,B3.SCORE2) + POINTS(B1.SCORE3,B4.SCORE3);
	B2.SCOREFINAL = POINTS(B2.SCORE1,B1.SCORE1) + POINTS(B2.SCORE2,B4.SCORE2) + POINTS(B2.SCORE3,B3.SCORE3);
	B3.SCOREFINAL = POINTS(B3.SCORE1,B4.SCORE1) + POINTS(B3.SCORE2,B1.SCORE2) + POINTS(B3.SCORE3,B2.SCORE3);
	B4.SCOREFINAL = POINTS(B4.SCORE1,B3.SCORE1) + POINTS(B4.SCORE2,B2.SCORE2) + POINTS(B4.SCORE3,B1.SCORE3);

	C1.SCOREFINAL = POINTS(C1.SCORE1,C2.SCORE1) + POINTS(C1.SCORE2,C3.SCORE2) + POINTS(C1.SCORE3,C4.SCORE3);
	C2.SCOREFINAL = POINTS(C2.SCORE1,C1.SCORE1) + POINTS(C2.SCORE2,C4.SCORE2) + POINTS(C2.SCORE3,C3.SCORE3);
	C3.SCOREFINAL = POINTS(C3.SCORE1,C4.SCORE1) + POINTS(C3.SCORE2,C1.SCORE2) + POINTS(C3.SCORE3,C2.SCORE3);
	C4.SCOREFINAL = POINTS(C4.SCORE1,C3.SCORE1) + POINTS(C4.SCORE2,C2.SCORE2) + POINTS(C4.SCORE3,C1.SCORE3);

    D1.SCOREFINAL = POINTS(D1.SCORE1,D2.SCORE1) + POINTS(D1.SCORE2,D3.SCORE2) + POINTS(D1.SCORE3,D4.SCORE3);
	D2.SCOREFINAL = POINTS(D2.SCORE1,D1.SCORE1) + POINTS(D2.SCORE2,D4.SCORE2) + POINTS(D2.SCORE3,D3.SCORE3);
	D3.SCOREFINAL = POINTS(D3.SCORE1,D4.SCORE1) + POINTS(D3.SCORE2,D1.SCORE2) + POINTS(D3.SCORE3,D2.SCORE3);
	D4.SCOREFINAL = POINTS(D4.SCORE1,D3.SCORE1) + POINTS(D4.SCORE2,D2.SCORE2) + POINTS(D4.SCORE3,D1.SCORE3);

    E1.SCOREFINAL = POINTS(E1.SCORE1,E2.SCORE1) + POINTS(E1.SCORE2,E3.SCORE2) + POINTS(E1.SCORE3,E4.SCORE3);
	E2.SCOREFINAL = POINTS(E2.SCORE1,E1.SCORE1) + POINTS(E2.SCORE2,E4.SCORE2) + POINTS(E2.SCORE3,E3.SCORE3);
	E3.SCOREFINAL = POINTS(E3.SCORE1,E4.SCORE1) + POINTS(E3.SCORE2,E1.SCORE2) + POINTS(E3.SCORE3,E2.SCORE3);
	E4.SCOREFINAL = POINTS(E4.SCORE1,E3.SCORE1) + POINTS(E4.SCORE2,E2.SCORE2) + POINTS(E4.SCORE3,E1.SCORE3);

    F1.SCOREFINAL = POINTS(F1.SCORE1,F2.SCORE1) + POINTS(F1.SCORE2,F3.SCORE2) + POINTS(F1.SCORE3,F4.SCORE3);
	F2.SCOREFINAL = POINTS(F2.SCORE1,F1.SCORE1) + POINTS(F2.SCORE2,F4.SCORE2) + POINTS(F2.SCORE3,F3.SCORE3);
	F3.SCOREFINAL = POINTS(F3.SCORE1,F4.SCORE1) + POINTS(F3.SCORE2,F1.SCORE2) + POINTS(F3.SCORE3,F2.SCORE3);
	F4.SCOREFINAL = POINTS(F4.SCORE1,F3.SCORE1) + POINTS(F4.SCORE2,F2.SCORE2) + POINTS(F4.SCORE3,F1.SCORE3);

    G1.SCOREFINAL = POINTS(G1.SCORE1,G2.SCORE1) + POINTS(G1.SCORE2,G3.SCORE2) + POINTS(G1.SCORE3,G4.SCORE3);
	G2.SCOREFINAL = POINTS(G2.SCORE1,G1.SCORE1) + POINTS(G2.SCORE2,G4.SCORE2) + POINTS(G2.SCORE3,G3.SCORE3);
	G3.SCOREFINAL = POINTS(G3.SCORE1,G4.SCORE1) + POINTS(G3.SCORE2,G1.SCORE2) + POINTS(G3.SCORE3,G2.SCORE3);
	G4.SCOREFINAL = POINTS(G4.SCORE1,G3.SCORE1) + POINTS(G4.SCORE2,G2.SCORE2) + POINTS(G4.SCORE3,G1.SCORE3);

    H1.SCOREFINAL = POINTS(H1.SCORE1,H2.SCORE1) + POINTS(H1.SCORE2,H3.SCORE2) + POINTS(H1.SCORE3,H4.SCORE3);
	H2.SCOREFINAL = POINTS(H2.SCORE1,H1.SCORE1) + POINTS(H2.SCORE2,H4.SCORE2) + POINTS(H2.SCORE3,H3.SCORE3);
	H3.SCOREFINAL = POINTS(H3.SCORE1,H4.SCORE1) + POINTS(H3.SCORE2,H1.SCORE2) + POINTS(H3.SCORE3,H2.SCORE3);
	H4.SCOREFINAL = POINTS(H4.SCORE1,H3.SCORE1) + POINTS(H4.SCORE2,H2.SCORE2) + POINTS(H4.SCORE3,H1.SCORE3);

    // Mostrando resultados de cada partido
	printf("Grupo A:\n\n");

	printf("Primera fecha:\n\n");
	printf("%-15s%-15s%-15s%-15s\n", A1.NAME, A2.NAME, A3.NAME, A4.NAME);
	printf("%-15hu%-15hu%-15hu%-15hu\n\n", A1.SCORE1, A2.SCORE1, A3.SCORE1, A4.SCORE1);

	printf("Segunda fecha:\n\n");
	printf("%-15s%-15s%-15s%-15s\n", A1.NAME, A3.NAME, A2.NAME, A4.NAME);
	printf("%-15hu%-15hu%-15hu%-15hu\n\n", A1.SCORE2, A3.SCORE2, A2.SCORE2, A4.SCORE2);

	printf("Tercera fecha:\n\n");
	printf("%-15s%-15s%-15s%-15s\n", A1.NAME, A4.NAME, A2.NAME, A3.NAME);
	printf("%-15hu%-15hu%-15hu%-15hu\n\n", A1.SCORE3, A4.SCORE3, A2.SCORE3, A3.SCORE3);

	//Inserción de los puntos para ordenar la tabla de grupos

	unsigned short int arrayA[100]= {A1.SCOREFINAL, A2.SCOREFINAL, A3.SCOREFINAL, A4.SCOREFINAL};

 	printf("Tabla acumulada del grupo A:\n");

	TABLEGROUP(arrayA, 4);

    printf("Grupo B:\n\n");

	printf("Primera fecha:\n\n");
	printf("%-15s%-15s%-15s%-15s\n", B1.NAME, B2.NAME, B3.NAME, B4.NAME);
	printf("%-15hu%-15hu%-15hu%-15hu\n\n", B1.SCORE1, B2.SCORE1, B3.SCORE1, B4.SCORE1);

	printf("Segunda fecha:\n\n");
	printf("%-15s%-15s%-15s%-15s\n", B1.NAME, B3.NAME, B2.NAME, B4.NAME);
	printf("%-15hu%-15hu%-15hu%-15hu\n\n", B1.SCORE2, B3.SCORE2, B2.SCORE2, B4.SCORE2);

	printf("Tercera fecha:\n\n");
	printf("%-15s%-15s%-15s%-15s\n", B1.NAME, B4.NAME, B2.NAME, B3.NAME);
	printf("%-15hu%-15hu%-15hu%-15hu\n\n", B1.SCORE3, B4.SCORE3, B2.SCORE3, B3.SCORE3);

	unsigned short int arrayB[100]= {B1.SCOREFINAL, B2.SCOREFINAL, B3.SCOREFINAL, B4.SCOREFINAL};

 	printf("Tabla acumulada del grupo B:\n");

	TABLEGROUP(arrayB, 4);

    printf("Grupo C:\n\n");

	printf("Primera fecha:\n\n");
	printf("%-15s%-15s%-15s%-15s\n", C1.NAME, C2.NAME, C3.NAME, C4.NAME);
	printf("%-15hu%-15hu%-15hu%-15hu\n\n", C1.SCORE1, C2.SCORE1, C3.SCORE1, C4.SCORE1);

	printf("Segunda fecha:\n\n");
	printf("%-15s%-15s%-15s%-15s\n", C1.NAME, C3.NAME, C2.NAME, C4.NAME);
	printf("%-15hu%-15hu%-15hu%-15hu\n\n", C1.SCORE2, C3.SCORE2, C2.SCORE2, C4.SCORE2);

	printf("Tercera fecha:\n\n");
	printf("%-15s%-15s%-15s%-15s\n", C1.NAME, C4.NAME, C2.NAME, C3.NAME);
	printf("%-15hu%-15hu%-15hu%-15hu\n\n", C1.SCORE3, C4.SCORE3, C2.SCORE3, C3.SCORE3);

	unsigned short int arrayC[100]= {C1.SCOREFINAL, C2.SCOREFINAL, C3.SCOREFINAL, C4.SCOREFINAL};

 	printf("Tabla acumulada del grupo C:\n");

	TABLEGROUP(arrayC, 4);

    printf("Grupo D:\n\n");

	printf("Primera fecha:\n\n");
	printf("%-15s%-15s%-15s%-15s\n", D1.NAME, D2.NAME, D3.NAME, D4.NAME);
	printf("%-15hu%-15hu%-15hu%-15hu\n\n", D1.SCORE1, D2.SCORE1, D3.SCORE1, D4.SCORE1);

	printf("Segunda fecha:\n\n");
	printf("%-15s%-15s%-15s%-15s\n", D1.NAME, D3.NAME, D2.NAME, D4.NAME);
	printf("%-15hu%-15hu%-15hu%-15hu\n\n", D1.SCORE2, D3.SCORE2, D2.SCORE2, D4.SCORE2);

	printf("Tercera fecha:\n\n");
	printf("%-15s%-15s%-15s%-15s\n", D1.NAME, D4.NAME, D2.NAME, D3.NAME);
	printf("%-15hu%-15hu%-15hu%-15hu\n\n", D1.SCORE3, D4.SCORE3, D2.SCORE3, D3.SCORE3);

	unsigned short int arrayD[100]= {D1.SCOREFINAL, D2.SCOREFINAL, D3.SCOREFINAL, D4.SCOREFINAL};

 	printf("Tabla acumulada del grupo D:\n");

	TABLEGROUP(arrayD, 4);

    printf("Grupo E:\n\n");

	printf("Primera fecha:\n\n");
	printf("%-15s%-15s%-15s%-15s\n", E1.NAME, E2.NAME, E3.NAME, E4.NAME);
	printf("%-15hu%-15hu%-15hu%-15hu\n\n", E1.SCORE1, E2.SCORE1, E3.SCORE1, E4.SCORE1);

	printf("Segunda fecha:\n\n");
	printf("%-15s%-15s%-15s%-15s\n", E1.NAME, E3.NAME, E2.NAME, E4.NAME);
	printf("%-15hu%-15hu%-15hu%-15hu\n\n", E1.SCORE2, E3.SCORE2, E2.SCORE2, E4.SCORE2);

	printf("Tercera fecha:\n\n");
	printf("%-15s%-15s%-15s%-15s\n", E1.NAME, E4.NAME, E2.NAME, E3.NAME);
	printf("%-15hu%-15hu%-15hu%-15hu\n\n", E1.SCORE3, E4.SCORE3, E2.SCORE3, E3.SCORE3);

	unsigned short int arrayE[100]= {E1.SCOREFINAL, E2.SCOREFINAL, E3.SCOREFINAL, E4.SCOREFINAL};

 	printf("Tabla acumulada del grupo E:\n");

	TABLEGROUP(arrayE, 4);

    printf("Grupo F:\n\n");

	printf("Primera fecha:\n\n");
	printf("%-15s%-15s%-15s%-15s\n", F1.NAME, F2.NAME, F3.NAME, F4.NAME);
	printf("%-15hu%-15hu%-15hu%-15hu\n\n", F1.SCORE1, F2.SCORE1, F3.SCORE1, F4.SCORE1);

	printf("Segunda fecha:\n\n");
	printf("%-15s%-15s%-15s%-15s\n", F1.NAME, F3.NAME, F2.NAME, F4.NAME);
	printf("%-15hu%-15hu%-15hu%-15hu\n\n", F1.SCORE2, F3.SCORE2, F2.SCORE2, F4.SCORE2);

	printf("Tercera fecha:\n\n");
	printf("%-15s%-15s%-15s%-15s\n", F1.NAME, F4.NAME, F2.NAME, F3.NAME);
	printf("%-15hu%-15hu%-15hu%-15hu\n\n", F1.SCORE3, F4.SCORE3, F2.SCORE3, F3.SCORE3);

	unsigned short int arrayF[100]= {F1.SCOREFINAL, F2.SCOREFINAL, F3.SCOREFINAL, F4.SCOREFINAL};

 	printf("Tabla acumulada del grupo F:\n");

	TABLEGROUP(arrayF, 4);

    printf("Grupo G:\n\n");

	printf("Primera fecha:\n\n");
	printf("%-15s%-15s%-15s%-15s\n", G1.NAME, G2.NAME, G3.NAME, G4.NAME);
	printf("%-15hu%-15hu%-15hu%-15hu\n\n", G1.SCORE1, G2.SCORE1, G3.SCORE1, G4.SCORE1);

	printf("Segunda fecha:\n\n");
	printf("%-15s%-15s%-15s%-15s\n", G1.NAME, G3.NAME, G2.NAME, G4.NAME);
	printf("%-15hu%-15hu%-15hu%-15hu\n\n", G1.SCORE2, G3.SCORE2, G2.SCORE2, G4.SCORE2);

	printf("Tercera fecha:\n\n");
	printf("%-15s%-15s%-15s%-15s\n", G1.NAME, G4.NAME, G2.NAME, G3.NAME);
	printf("%-15hu%-15hu%-15hu%-15hu\n\n", G1.SCORE3, G4.SCORE3, G2.SCORE3, G3.SCORE3);

	unsigned short int arrayG[100]= {G1.SCOREFINAL, G2.SCOREFINAL, G3.SCOREFINAL, G4.SCOREFINAL};

 	printf("Tabla acumulada del grupo G:\n");

	TABLEGROUP(arrayG, 4);

    printf("Grupo H:\n\n");

	printf("Primera fecha:\n\n");
	printf("%-15s%-15s%-15s%-15s\n", H1.NAME, H2.NAME, H3.NAME, H4.NAME);
	printf("%-15hu%-15hu%-15hu%-15hu\n\n", H1.SCORE1, H2.SCORE1, H3.SCORE1, H4.SCORE1);

	printf("Segunda fecha:\n\n");
	printf("%-15s%-15s%-15s%-15s\n", H1.NAME, H3.NAME, H2.NAME, H4.NAME);
	printf("%-15hu%-15hu%-15hu%-15hu\n\n", H1.SCORE2, H3.SCORE2, H2.SCORE2, H4.SCORE2);

	printf("Tercera fecha:\n\n");
	printf("%-15s%-15s%-15s%-15s\n", H1.NAME, H4.NAME, H2.NAME, H3.NAME);
	printf("%-15hu%-15hu%-15hu%-15hu\n\n", H1.SCORE3, H4.SCORE3, H2.SCORE3, H3.SCORE3);

	unsigned short int arrayH[100]= {H1.SCOREFINAL, H2.SCOREFINAL, H3.SCOREFINAL, H4.SCOREFINAL};

 	printf("Tabla acumulada del grupo E:\n");

	TABLEGROUP(arrayH, 4);

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