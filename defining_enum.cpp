#include <iostream>
using namespace std;

enum TP{ C, Java, Python, Ruby, Kotlin, Javascript, Typescript, Others};

int main() {
    enum TP course;
    
    cout<<"Which course do you love the most?"<<endl;

    course = Python;
    
    cout<<"I love the "<<course+1<<"rd course";

    return 0;
}