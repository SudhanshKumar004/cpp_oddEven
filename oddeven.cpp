#include <iostream>
using namespace std;
int main(){
    //WAP to accept an integer from user. If the number 
    //is even make it odd and print. If the number is odd make it even and print.
   
    cout << "enter an integer" << "\n";
    int number = 0;
    cin >> number;

    if(number % 2 == 0){
        cout << number + 1 << " is odd" << "\n";
    }
    else{
        cout << number + 1 << " is Even" << "\n";
    }

    return 0;
}