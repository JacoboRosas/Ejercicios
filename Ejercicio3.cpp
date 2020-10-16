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
 @@ Dados los valores de las constantes a, b, c y d, y de la variable x, que se introdurián al programa, escribir un programa que calcula la función determinada para:
 @@       ax^2 + bx + c si x < d
 @@ f(x)= 0             si x = d
 @@       -ax^2 + bx - c si x > d
 @@
 */
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int A=0;
    int B=0;
    int C=0;
    int D=0;
    int x=0;
    int R=0;
    cout<<"Introduzca el valor de A=\t";
    cin>>A;
    cout<<"Introduzca el valor de B=\t";
    cin>>B;
    cout<<"Introduzca el valor de C=\t";
    cin>>C;
    cout<<"Introduzca el valor de D=\t";
    cin>>D;
    cout<<"Introduzca el valor de X=\t";
    cin>>x;
    if(x<D){
        cout<<"X es menor que D. Ecuacion utilizada: f(x)= ax^2 + bx + c"<<endl;
        cout<<"f(x)="<<A<<"*"<<x<<"^2"<<"+"<<B<<"*"<<x<<"+"<<C<<endl;
        R=A*(x*x) + B*x + C;
        cout<<"El resultado es: "<<R;
    }
    else{
        if(x>D){
            cout<<"X es mayor que D. Ecuacion utilizada: f(x)= -ax^2 + bx - c"<<endl;
            cout<<"f(x)="<<"-"<<A<<"*"<<x<<"^2"<<"+"<<B<<"*"<<x<<"-"<<C<<endl;
            R=-A*(x*x) + B*x - C;
            cout<<"El resultado es: "<<R;
        }
        else{
            cout<<"X es igual que D"<<endl;
            R=0;
            cout<<"El resultado es: "<<R;
        }
    }

    return 0;
}
