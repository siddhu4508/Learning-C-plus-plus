#include <iostream>
using namespace std;

// global variable declaration
int g = 20;

int main() {
    // local variable declaration
    int g = 10;

    cout<< "value of g(local variable): " << g;
    cout<<endl;

    cout << "value of g(Global variable): " << ::g;

    return 0;

}