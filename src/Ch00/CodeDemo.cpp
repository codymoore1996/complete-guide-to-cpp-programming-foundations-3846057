// Complete Guide to C++ Programming Foundations
// Exercise 00_03
// Using the Exercise Files in GitHub Codespaces, by Eduardo Corpeño 

#include <iostream>
using namespace std; 

int main(){
    float num_1, num_2, result;

    cout << "Enter number 1: " << std::flush;
    cin >> num_1;
    cout << "Enter number 2: " << std::flush;
    cin >> num_2;
    
    result = num_1 + num_2;
    
    cout << "The result of the addition is " << result << std::endl;
    
    cout << std::endl << std::endl;
    return 0;
}
