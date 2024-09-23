#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int a,b, s, p;
    cout<<"Enter a and b: ";
    cin>>a>>b;
    s = a*b;
    p = 2*(a+b);
    cout<<"Areal = "<<s<<endl<<"Perimeter = "<<p<<endl;
    int A, S, M, D; 
    A = s + p;
    S = s - p;
    M = s * p;
    D = s / p;
    cout<<"Sum = "<<A<<endl<<"Difference = "<<S<<endl<<"Product = "<<M<<endl<<"Quotient = "<<D<<endl; 
    system("pause>>void");
    return 0;
}

