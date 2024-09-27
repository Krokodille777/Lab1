#include <iostream>
using namespace std;
int main()
{
    int age;
    int salary;
    string name;
    cout<<"Enter your age: ";
    cin>>age;
    cout<<"Enter your salary: ";
    cin>>salary;
    if (age>20 && salary > 400 && salary < 1000){
        cout<<"Enter your name: ";
        cin>>name;
        cout<<"Congratulations! We will consider your position,"<<name<<"."<<endl; 

    }
    else{
        cout<<"Sorry! You are not suitable."<<endl;
    }
}