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