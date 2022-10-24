#include <stdio.h>

int main()
{
 float Brutopreis, Mehrwertsteuersatz, Mehrwertsteuerbetrag, Nettopreis, a=100;

 printf("bitte tippen Sie Ihr Brutopreis ein:");
 scanf("%f", &Brutopreis);
 printf("bitte tippen Sie Ihr Mehrwertsteuersatz in %% ein:");
 scanf("%f", &Mehrwertsteuersatz); 

 Nettopreis = (Brutopreis/(a+Mehrwertsteuersatz/a));
 Mehrwertsteuerbetrag = Brutopreis-Nettopreis;

 printf("Ihr Nettopreis ist:" + Nettopreis + "und Ihr Mehrwertsteuerbetrag ist:" + Mehrwertsteuerbetrag +);
 return(0); 
}