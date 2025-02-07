#include <iostream>
using namespace std;

struct TP {
    string tp;
    int grade;
};

int main() {
    TP is_object;
    is_object.tp = "I am coding";
    is_object.grade =  9;
    
    cout<<is_object.tp<<endl;
    cout<<"How much you love coding?"<<":"<< is_object.grade;

    return 0;

}