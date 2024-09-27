#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "1251");
    int mark;
    string meaning;
    cout<<"enter your mark: ";
    cin>>mark;
    if(mark <60 && mark >= 0){
        cout<<"Незараховано"<<endl;
    }
    else if (mark >= 60 && mark <= 75){
        cout<<"Зараховано"<<endl;
}
    else if (mark > 75 && mark <= 90){
        cout<<"Добре"<<endl;
    }
    else if (mark > 90 && mark <= 100){
        cout<<"Відмінно"<<endl;
    }
    else{
        cout<<"Невірний ввід"<<endl;
    }
    return 0;
}