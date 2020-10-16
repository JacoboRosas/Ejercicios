 /*
 @@
 @@ Instituto Tecnologico de Tijuana
 @@ Depto de Sistemas y Computación
 @@ Ing. En Sistemas Computacionales
 @@   
 @@ Autor : Jacobo Rosas Jonathan Adalberto @nickname JacoboRosas
 @@ Repositorio: http://github.com/JacoboRosas/Ejercicios
 @@ Fecha de revisión: 10/15/2020
 @@ 
 @@
 @@ Objetivo del programa:
 @@ Imprimir una tabla de cuadrados, cubos y raíces cuartas de los veinte primeros enteros.
 @@ 
 */
#include <stdio.h>
#include <iostream>
#include <ostream>
#include <math.h> 

using namespace std;

int main()
{
    cout<<"N Cuadrado Cubo  Cuarta"<<endl;
    for(int i=1;i<=20;i++){
        cout<<i<<"\t";
        cout<<pow(i,2)<<"\t";
        cout<<pow(i,3)<<"\t";
        cout<<pow(i,4)<<"\t";
        cout<<endl;
    }

    return 0;
}
