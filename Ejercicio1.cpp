#include <stdio.h>
#include <math.h> 

using namespace std;

int main()
{
    cout<<"N \ Cuadrado \ Cubo \ Cuarta"<<endl;
    for(int i=1;i<=20;i++){
        cout<<i<<"\t";
        cout<<pow(i,2)<<"\t";
        cout<<pow(i,3)<<"\t";
        cout<<pow(i,4)<<"\t";
        cout<<endl;
    }

    return 0;
}