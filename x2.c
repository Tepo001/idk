#include <stdio.h>
#include <string.h>

#define EURO 4.9766
#define LIRA 5.9447
#define DOLAR 4.54


int main() {
//idk
int userInput , select;
again:
float suma = 0;
    printf("Scrie suma pe care doresti sa o convertesti: ");
    scanf("%f", &suma);
    char moneda[25];
        printf("\n");
        printf("\n");
    printf("Scrie moneda in care vrei sa convertesti(euro/lira/dolari): ");
    scanf("%s", &moneda);
        printf("\n");
        printf("\n");
    if(strcmp(moneda, "euro") == 0 ) {
        float Euro;
        Euro = suma / EURO;
        printf("Suma ta in euro este %.2f", Euro);
        printf("\n");
        printf("\n");
    } else if (strcmp(moneda, "lira") == 0) {
        float Lira;
        Lira = suma / LIRA;
        printf("Suma ta in lire este %.2f", Lira);
        printf("\n");
        printf("\n");
    } else if (strcmp(moneda, "lire") == 0) {
        float Lira;
        Lira = suma / LIRA;
        printf("Suma ta in lire este %.2f", Lira);
        printf("\n");
        printf("\n");
    } else if (strcmp(moneda, "dolari") == 0) {
        float Dolar;
        Dolar = suma / DOLAR;
        printf("Suma ta in dolari este %.2f", Dolar);
        printf("\n");
        printf("\n");
    };
printf("Daca doriti sa incercati din nou apasati tasta 1\nDaca doriti sa iesiti apasati tasta 0");
scanf("%d" , &select);
if (select == 1)
{
    goto again;
}else{
    printf("Thanks ...");
}



}