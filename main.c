#include <stdio.h>

 /* Applicazione che chiede all'utente di inserire 3 interi
  * a, b e c da tastiera, li legge e stampa un messaggio
  * che dice all'utente se i tre numeri rappresentano oppure
  * no le misure dei lati di un triangolo. */
int main() {
	    int lato1, lato2, lato3;            // i lati del triangolo
		
		/* INPUT */
		printf("Caro utente, introduci le lunghezze dei lati di un triangolo\n");
		scanf("%d%d%d", &lato1, &lato2, &lato3);
		
		/* OUTPUT */
		if(lato1 <=0 || lato2 <=0 || lato3 <=0)
			    printf("Non sono i lati di un triangolo\n");
		else 
			    if(lato1>=lato2+lato3 || lato2>=lato1+lato3 || lato3>=lato1+lato2)
					    printf("Non sono i lati di un triangolo\n");
				else
					    printf("Sono i lati di un triangolo\n");
}
