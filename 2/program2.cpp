#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int a, b, c, d, e;
    cout<<"Enter a value: ";
    cin>>a;
    d = a % 7;
    cout<<"Remainder = "<<d<<endl;
    cout<<"Enter value of b: ";
    cin>>b;
    cout<<"Enter value of c: ";
    cin>>c;
    e = b % c;
    if (e == 0){
        cout<<"b is divisible by c"<<endl;
    }else{
        cout<<"b is not divisible by c"<<endl;
    }
    if (b % 2 == 0 && c % 2 == 0){
        cout<<"Both b and c are even"<<endl;
    }
    else if (b % 2 == 0 || c % 2 == 0){
        cout<<"One of the values is even"<<endl;
    }
    else{
        cout<<"Both b and c are odd"<<endl;
    }
    system("pause>>void");
    return 0;


}