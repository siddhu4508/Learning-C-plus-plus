#include <iostream>
using namespace std;

union TP {
    int tp1, tp2;
};

int main(){
    union TP t;
    t.tp1 = 32;
    cout << "value of tp1 initially " <<t.tp1<<endl;

    t.tp2 = 54;
    cout << "value of tp2 after tp1 changed " <<t.tp2<<endl;
 return 0;

}