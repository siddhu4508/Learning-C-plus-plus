#include <iostream>
using namespace std;

class Numbers {
    private:
    int a;
    int b;
    int c;


    public:
    // function to set values
    void setValues(int x, int y, int z) {
        a = x;
        b = y;
        c = z;
    }

    // function to add these numbers
    double add() {
        return a + b + c;
    }
    
    // function to display values
    void display() {
        cout << "a:" << a << "b:"<< b << "c:" << c << endl;
    }

};

int main() {
    // create an object of numbers class

    Numbers numObj;

    // set values
    numObj.setValues(1000, 1000,10000);

    //display values
    numObj.display();

    // add function 
    int sum = numObj.add();
    cout << "sum:" << sum << endl;

    return 0;
}