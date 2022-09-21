/* sami ghraibia 
   21/09/22
   somma tra 2 interi
*/

#include <stdio.h>    //inizio
 int main()
 
 {
 	int num1,num2,num3;  //dichiarare variabili
 	
 	printf("inserici 2 interi");  //chiedere all'utente due numeri
 	
 	scanf("%d%d", &num1, &num2);    //leggere 2 numeri
 	
 	num3=num1+num2;   //assegnazione
 	
 	printf("il risultato e %d",num3);    //stampare risultato
 	
 	return 0;         //chiusura programma
 }
