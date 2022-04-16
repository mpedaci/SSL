#include <stdio.h>

int main(){
    char nombre[20];
    int edad = 0;
    printf("Ingrese su nombre: ");
    scanf("%s", nombre);
    printf("Ingrese su edad: ");
    scanf("%d", &edad);
    printf("Hola %s, tienes %d anios\n", nombre, edad);

    return 0;
}