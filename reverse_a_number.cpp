#include <iostream>
using namespace std;
int main()
{
    int number, digit;
    bool isNeg = false;
    string output = " ";
    cout << "program to reverse an integer number!" << endl;
    cout << "enter a number: ";
    cin >> number;
  
    if (number == 0)
        cout << "You entered zero\n";
    else{
        if (number < 0) {// the number is a negative number
            isNeg = true;
            number *= -1; //we make it positive
        }
      
        while (number > 0) {
            digit = number % 10; //take off the last digit and put it into the result
            output += ('0'+ digit);
            number /= 10; //delete the last digit
        }
        cout << "the reversed number is " << output << endl;
    }
    

    system("pause>0");
   
}


