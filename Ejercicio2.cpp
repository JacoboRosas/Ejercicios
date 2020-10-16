#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int A=3;
    int B=0;
    int x=1;
    cout<<"A^x = B, A=3, B=81"<<endl;
    while(B!=81)
    {
        B=pow(A,x);
        cout<<A<<"^"<<x<<"="<<B<<endl;
        x=x+1;
    }
    cout<<"Resultado es X="<<x-1<<endl;

    return 0;
}