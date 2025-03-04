//Escribir un programa que dado el año de nacimiento y el año actual
//calcule la edad de una persona
//escriba una funcion que imprima la edad
//escriba una funcion que lo retorne
//use ambas en el programa principal
#include <stdio.h>

void edad();
void main(){
    edad();
}
void edad(){
    int a_nac = 1956;
    int a_actual = 2025;
    int edad=0;
    edad = a_actual - a_nac;
    printf("%d - %d = %d",a_actual, a_nac, edad);
}
