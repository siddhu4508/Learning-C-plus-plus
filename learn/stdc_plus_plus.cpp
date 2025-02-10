#include <bits/stdc++.h>
#include <iostream>
#include <string>
// Removed duplicate include
using namespace std;
#include <vector>

int main() {

    int number;
    string name;

    cout << "welcome to C++ programming" << endl;

    // Input of user's name and number
cout << "Please enter your name: ";
cin >> name;
cout << "Please enter your number:";
cin >> number;
cout << "Hello, " << name << " You entered " << number << endl;

// Demonstrating some STL functions
#include <vector>

vector<int> numbers;
cout << "Enter 4 numbers: ";

for (int i = 0; i< 4; ++i) {
  int temp;
  cin >> temp;
  numbers.push_back(temp);
}

cout << "You entered the following numbers: ";
for (int num : numbers) { 
    cout << num << " " ;
}
cout << endl;

sort(numbers.begin(), numbers.end());
cout << "Sorted numbers: ";
for (int num : numbers) {
    cout << num << " ";
}
cout << endl;

return 0;
}

