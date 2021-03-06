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
 @@ Objetivo del programa:
 @@ Que la computadora genere parejas de enteros. Encontrar el máximo común divisor.
 @@ 
 */
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    int N1=0, N2=0;
    srand((int)time(0));
    N1=(rand() % 100) + 1;
    N2=(rand() % 100) + 1;
    cout<<"N1 = "<<N1<<endl;
    cout<<"N2 = "<<N2<<endl;
    while(N1 != N2){
        if(N1 > N2)
            N1 -= N2;
        else
            N2 -= N1;
    }
    cout<<"MCD = "<<N1<<endl;
    return 0;
}
