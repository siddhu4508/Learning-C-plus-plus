// bool data type implicit conversion

#include <iostream>
using namespace std;

int main(){
    bool flag;
    flag = 1;
    bool flag1= true;
    cout<<flag<<" "<<flag1<<endl;

    int count = 0;
    int x = 12;
    float y = 35.24;
    bool k = count, k1 =x, k2 = y;
    int sum = x+flag+flag1;

    cout<<k<<" "<<count<<" "<<k1<<" "<<x<<" "<<k2<<" "<<y<<" "<<endl;
    cout<<"After adding Boolean and integer values: "<< sum <<endl;
    return 0;
    }