#include <iostream>
using namespace std;

class TP{
    public:
    string tp;

    void print() {
        cout<<tp<<endl;
    }
};

int main() {
    TP object;
    object.tp = "I am loving C++";
    object.print();

    return 0;
}