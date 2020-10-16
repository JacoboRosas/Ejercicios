#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int N1=60, N2=12;
    while(N1 != N2){
        if(N1 > N2)
            N1 -= N2;
        else
            N2 -= N1;
    }

    cout<<"Pareja 1: 60;12"<<endl;
    cout<<"MCD = "<<N1<<endl;
    int N3=35, N4=10;
    while(N3 != N4){
        if(N3 > N4)
            N3 -= N4;
        else
            N4 -= N3;
    }
    cout<<"Pareja 2: 35;10"<<endl;
    cout<<"MCD = "<<N3<<endl;
    int N5=28, N6=32;
    while(N5 != N6){
        if(N5 > N6)
            N5 -= N6;
        else
            N6 -= N5;
    }
    cout<<"Pareja 3: 28;32"<<endl;
    cout<<"MCD = "<<N5<<endl;
    int N7=65, N8=179;
    while(N7 != N8){
        if(N7 > N8)
            N7 -= N8;
        else
            N8 -= N7;
    }
    cout<<"Pareja 4: 65;179"<<endl;
    cout<<"MCD = "<<N7<<endl;
    int N9=210, N10=1036;
    while(N9 != N10){
        if(N9 > N10)
            N9 -= N10;
        else
            N10 -= N9;
    }
    cout<<"Pareja 5: 210;1036"<<endl;
    cout<<"MCD = "<<N9;



    return 0;
}