/*
 * main.c
 *
 *  Created on: Oct 18, 2019
 *      Author: Luka Karan RA50/2016
 */


#include "sum.h"

#include<ctype.h>
/*
 * main.c
 *
 *  Created on: Oct 18, 2019
 *      Author: Luka Karan RA50/2016
 *
 *      Zadatak broj 11
 *    				 Napisati funkciju koja sabira vrlo velike brojeve. Brojevi su predstavljeni nizom svojih cifara.
 *  				 Funkcija za sabiranje prima dva velika broja i vraca novi broj koji ppredstavlja njihov zbir.
 * 				     Napraviti od toga modul i realizovati ga kao staticku biblioteku.
 * 				     Tu biblioteku ukljuciti u glavni program koji ce obavljati komunikaciju s okruzenjem.
 *
 * 				     Primer velikog broja
 * 				     23456789098765432345678908765432345678908765432345678908765432345678909876543234567898765434567654336
 * 				     78565434325364783536758678451544553423564264534646146867453742187645127846532876459786458796459856876
 *
 *
 *      Kratak opise resenja:
*      				Implementiran je staticki modul.
*      				Modul sadrzi sum.c i sum.h fajlove.
*      				U fajlu sum.h nalazi se deklaracija funkcija.
*      				U fajlu sum.c su implementirane funkcije.
*      				-int_least8_t isDigit koja proverava da li je korisnik uneo broj ili znak
*      					ukoliko je uneo broj program ga prepoznaje i koristi za sabiranje
*      					ukoliko je uneo karakter program ga ne prepoznaje i ne konvertuje ga
*
*      				-int_least8_t charToInteger koja pretvara char u int kako bi mogao da prosledjuje
*      					ako je simbol oduzima mu 48 tj vrednost 0 i vraca ga za toliko mesta unazad
*
*					-int_least8_t *stringReverese koja sluzi za obrtanje redosleda elemenata niza
*
*					-void summNumbers kao glavna funkcija koja kao ulazne parametre prima dva broja
*						prvo odredjuje maksimalnu duzinu niza kako bi mogao da prolazi kroz sve elemente
*						u zavisnosti od duzine niza on koristi counter tj dodatak desetice
*							ako u oba niza postoji ista pozicija on ce sabrati ta dva broja i dodati carry
*							ukoliko zeljena pozicija ne postoji u nizu1(nizu2) on ce na niz2(niz1)dodati taj carry
*							rezlutat svakog sabiranja ce biti predstavljen kao moduo 10
*
*
*		Sto se tice MISRAc standarda izbacuje upozorenja za  <stdio.h> <string.h> <inttypes.h> iako su mi neophodni za rad
 *
 */

#include "inttypes.h"

int main(){

	int_least8_t num1[120];
	int_least8_t num2[120];


	printf("User choose numbers");

	printf("\nFirst Number:");
	scanf("%s", num1);
	isDigit(num1);

	printf("\nSecond Number:");
	scanf("%s", num2);
	isDigit(num2);

	summNumbers(num1,num2);



return 0;


}

