#include <iostream>
using namespace std;

int main(){
    int c = 10;
    int& refer=c;

    cout<<"Initial value of integer is "<<c<<endl;

    refer= 123;

    cout<<"After changing value using reference variable " <<c<<endl;

    return 0;
}