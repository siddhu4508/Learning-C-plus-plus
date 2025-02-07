#include <iostream>
using namespace std;

int main() {
    int a = 20; // declare variable a
    int b = 10;
    int c = 30;

    int *p= &a;

    int *r= &b;
    
    int *s= &c; // declare pointer and assign it to variable "a"
    
    cout <<"Address of variable a:" <<p<<endl;
    cout<<"Value of variable a:" <<*p<<endl;

    cout <<"Address of variable b:" <<r<<endl;
    cout<<"Value of variable b:" <<*r<<endl;

    cout << "Address of variable c:" <<s<< endl;
    cout << "Value of variable c:" <<*s<< endl;

    return 0;
    
}