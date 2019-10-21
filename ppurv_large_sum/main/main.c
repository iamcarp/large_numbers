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
 *      Kratak opise resenja:
 *      					Implementiran je staticki modul.
 *      					Modul sadrzi sum.c i sum.h fajlove.
 *      					U fajlu sum.h nalazi se deklaracija funkcije.
 *      					U fajlu sum.c su implementirane funkcije.
 *      					Funkcija stringReverese vrsi rotaciju stringa.
 *      					Funkcija chrtoint pretvara znakove u cifre.
 *      					Funkcija summNumbers je glavna funkcija koja racuna duzinu nizova, racuna vrednost za svaki posebno sabran broj,
 *      					ukoliko je zbir veci od 10 dodaje 1u sledecem koraku sabiranja
 *
 */

#include "inttypes.h"

int main(){
	char num1[80];
	char num2[80];

	printf("User choose numbers");
	printf("\nFirst Number:");
	scanf("%s", num1);
	printf("\nSecond Number:");
	scanf("%s", num2);


	summNumbers(num1,num2);

	printf("\ntest : 10352167389123123+21231278538o9123213123120 \n");
	test1();

return 0;


}
