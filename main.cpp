#include <iostream>
#include "Complex.h"

using namespace std;

int main()
{
    int z;
    Complex k1,k2;
    cout << "Enter the real part of the first number" << endl;
    cin >> k1.Re;
    cout << "Enter the imaginary part of the first number" << endl;
    cin >> k1.Im;
    cout << "Enter the real part of the second number" << endl;
    cin >> k2.Re;
    cout << "Enter the imaginary part of the second number" << endl;
    cin >> k2.Im;
    while(z!=1 && z!=2 && z!=3 && z!=4)
    {
       cout << "Choose an operation on numbers(Only a digit):" << endl << "1.Addition " << endl << "2.Subtraction " << endl << "3.Multiplication " << endl << "4.Division " << endl;
       cin >> z;
       switch(z)
       {
          case 1:
              cout << "The real part of the number: " << Addition(k1,k2).Re << ", The imaginary part of a number: " << Addition(k1,k2).Im << endl;
              break;
          case 2:
              cout << "The real part of the number: " << Subtraction(k1,k2).Re << ", The imaginary part of a number: " << Subtraction(k1,k2).Im << endl;
              break;
          case 3:
              cout << "The real part of the number: " << Multiplication(k1,k2).Re << ", The imaginary part of a number: " << Multiplication(k1,k2).Im << endl;
              break;
          case 4:
              cout << "The real part of the number: " << Division(k1,k2).Re << ", The imaginary part of a number: " << Multiplication(k1,k2).Im << endl;
              break;
          default:
              cout << "Error!" << endl;
              break;
       }
    }

    return 0;
}
