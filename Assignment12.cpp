#include<iostream>
#include "Assignment12.h"
using namespace std;
/*==========================================================================
  FUNCTION   : Constructor
              
  PARAMETERS : 
              
  RETURN     : 
              
  COMMENT    : To initialise count to 0 (default constructor)
              
==========================================================================*/
template <class T> 
Stack<T>::Stack(){
	count = 0;
}
/*==========================================================================
  FUNCTION   : Push
              
  PARAMETERS : int number
              
  RETURN     : count
              
  COMMENT    : import data into Arr.
              
==========================================================================*/
template <class T>
T Stack<T>::Push(T number){
	this->Arr[count] = number;
	count++;
	return count;
}
/*==========================================================================
  FUNCTION   : Pop
              
  PARAMETERS : T number
              
  RETURN     : Arr[count] - The last element of the array
              
  COMMENT    : import data into Arr.
              
==========================================================================*/
template <class T>
T Stack<T>::Pop(T number){
	this->Arr[count - 1] = Arr[count -2];
	count--;  
	return Arr[count];
}
int main(){
	int number1, number2, number3;
	cout << "Insert number1, number2 and number3: " << endl;
	cin >> number1 >> number2 >> number3;
	Stack<int> New_Stack;
	New_Stack.Push(number1);
	New_Stack.Push(number2);
	New_Stack.Push(number3);
	int resutl = New_Stack.Pop(number3);
	cout << "After removing number3, Top element is: " << resutl << endl;
}


