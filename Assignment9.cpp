#include<iostream>
#include "Assignment9.h"
#include "math.h"
#include <cstdlib>
using namespace std;
/*==========================================================================
  FUNCTION   : input
              
  PARAMETERS : CFraction &cFraction
              
  RETURN     : cFraction
              
  COMMENT    : import data for the Fraction.
              
==========================================================================*/
CFraction::input(CFraction &cFraction){
    cout << "Enter the numerator: ";
    cin >> cFraction.numerator;
    cout << "Enter the denominator: ";
    cin >> cFraction.denominator;
    while(cFraction.denominator == 0){
        cout << "Ivalid denominator value, pls try again!" << endl;
           cin >> cFraction.denominator;
        }
    }
/*==========================================================================
  FUNCTION   : reduce
              
  PARAMETERS : CFraction &cFraction
              
  RETURN     : 0
              
  COMMENT    : Function to find the greatest Common Divisor.
              
==========================================================================*/
void CFraction::reduce(CFraction& cFraction){
    int A[Max];
    int i, count = -1;
    int sNum = abs(cFraction.numerator) >= abs(cFraction.denominator)? abs(cFraction.denominator) : abs(cFraction.numerator);
    if (sNum <= 1)
        return;
    for(i = 2; i <= sNum; i++){
        if(cFraction.numerator%i == 0 && cFraction.denominator%i == 0){
            count++;
            A[count] = i;
           
        }
    }
    if (count == -1) return;
    cFraction.numerator = cFraction.numerator/A[count];
    cFraction.denominator = cFraction.denominator/A[count];
}
/*==========================================================================
  FUNCTION   : output
              
  PARAMETERS : CFraction &cFraction
              
  RETURN     : 0
              
  COMMENT    : Show the result of the calculation .
              
==========================================================================*/
CFraction::output(CFraction &cFraction){
    if (cFraction.numerator == 0)
        cout << "0" << endl;
    else if (cFraction.denominator == 1)
        cout << cFraction.numerator << endl;
    else if (cFraction.denominator == -1)
        cout << (-1) * cFraction.numerator << endl;
    else
        cout << cFraction.numerator << "/" << cFraction.denominator << endl;
}
/*==========================================================================
  FUNCTION   : CFraction operator+ (const CFraction&, const CFraction&)
              
  PARAMETERS : CFraction &cFraction
              
  RETURN     : cFraction_tmp
              
  COMMENT    : Perform the addition of 2 fractions .
              
==========================================================================*/
CFraction operator+ (const CFraction&CFraction1, const CFraction&CFraction2){
    CFraction cFraction_tmp;
    cFraction_tmp.numerator = CFraction1.numerator*CFraction2.denominator + CFraction2.numerator*CFraction1.denominator;
    cFraction_tmp.denominator = CFraction1.denominator*CFraction2.denominator;
    cFraction_tmp.reduce(cFraction_tmp);
    return cFraction_tmp;
}
/*==========================================================================
  FUNCTION   : CFraction operator- (const CFraction&, const CFraction&)
              
  PARAMETERS : CFraction &cFraction
              
  RETURN     : cFraction_tmp
              
  COMMENT    : Perform the subtract of 2 fractions .
              
==========================================================================*/
CFraction operator- (const CFraction&CFraction1, const CFraction&CFraction2){
    CFraction cFraction_tmp;
    cFraction_tmp.numerator = CFraction1.numerator*CFraction2.denominator - CFraction2.numerator*CFraction1.denominator;
    cFraction_tmp.denominator = CFraction1.denominator*CFraction2.denominator;
    cFraction_tmp.reduce(cFraction_tmp);
    return cFraction_tmp;
}
/*==========================================================================
  FUNCTION   : CFraction operator* (const CFraction&, const CFraction&)
              
  PARAMETERS : CFraction &cFraction
              
  RETURN     : cFraction_tmp
              
  COMMENT    : Perform the multiplication of 2 fractions .
              
==========================================================================*/
CFraction operator* (const CFraction&CFraction1, const CFraction&CFraction2){
    CFraction cFraction_tmp;
    cFraction_tmp.numerator = CFraction1.numerator*CFraction2.numerator;
    cFraction_tmp.denominator = CFraction1.denominator*CFraction2.denominator;
    cFraction_tmp.reduce(cFraction_tmp);
    return cFraction_tmp;
}
/*==========================================================================
  FUNCTION   : CFraction operator/ (const CFraction&, const CFraction&)
              
  PARAMETERS : CFraction &cFraction
              
  RETURN     : cFraction_tmp
              
  COMMENT    : Perform the division of 2 fractions .
              
==========================================================================*/
CFraction operator/ (const CFraction&CFraction1, const CFraction&CFraction2){
    CFraction cFraction_tmp;
    cFraction_tmp.numerator = CFraction1.numerator*CFraction2.denominator;
    cFraction_tmp.denominator = CFraction1.denominator*CFraction2.numerator;
    cFraction_tmp.reduce(cFraction_tmp);
    return cFraction_tmp;
}
int main(){
    CFraction CFraction1,CFraction2,add,minus,multiply,divide;
    while (1)
    {
        cout << "Enter the CFraction1:" << endl;
        CFraction1.input(CFraction1);
        cout << "Enter the CFraction2:" << endl;
        CFraction2.input(CFraction2);
        add = CFraction1+CFraction2;
        cout << "Sum of two CFraction:" << endl;
        add.output(add);
        minus = CFraction1-CFraction2;
        cout << "Minus of two CFraction:" << endl;
        minus.output(minus);
        multiply = CFraction1*CFraction2;
        cout << "multiply of two CFraction:" << endl;
        multiply.output(multiply);
        divide = CFraction1/CFraction2;
        cout << "divide of two CFraction:" << endl;
        divide.output(divide);
        system("pause");
        system("cls");
    }
}
