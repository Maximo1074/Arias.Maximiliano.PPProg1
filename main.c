#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int id;
    char nombre[20];
    int infectados;
    int recuperados;
    int muertos;
}ePais;

void actualizarRecuperados(ePais lista[]);
void invertirCadenas(char caracteres);
void OrdenarCaracteres();

int main()
{
    char cadenas;

    invertirCadenas(cadenas);
    return 0;
}

void actualizarRecuperados(ePais lista[]){
    int contadorRecuperados = 0;
    int acumuladorTengoPais = 0;
    char opcion;

    printf("De que pais sos?: ");
    fflush(stdin);
    gets(lista->nombre);

    printf("Te has recuperado? (s/n): ");
    fflush(stdin);
    getchar(opcion);

    if(opcion == 's'){
        contadorRecuperados++;
    }

}

void invertirCadenas(char* cadenaC){

    char *cadena[200];
    int i = 0;

    printf("Introduce una cadena de texto: \n");
    gets(*cadena);
    printf("\nLa cadena introducida es: %s\n\n", *cadena);
    printf("La cadena al reves es:\n\t");

    for (i=strlen(*cadena); i>=0; i--){
        printf("%c", *cadena[i]);
    }
    puts("");

}

void OrdenarCaracteres(){



}
