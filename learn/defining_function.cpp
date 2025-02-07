#include <iostream>
using namespace std;


string fun(int n){
    // return if n is odd or even
    if(n%2) return "Given number is Odd!";
    else return "Given number is Even!";
}

int main(){
    int a;
    //enter a number
    cin>>a;
    cout<<fun(a);
    //a simple function to check if a number is odd or even
    return 0;
}