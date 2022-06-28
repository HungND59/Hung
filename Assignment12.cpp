#include<iostream>
#include "Assignment12.h"
/*==========================================================================
  FUNCTION   : Constructor
             
  PARAMETERS :
             
  RETURN     :
             
  COMMENT    : To initialise top and MAX(default constructor)
             
==========================================================================*/
template <class T>
Stack<T>::Stack() {
    top = 0;
    MAX = 0;
 }
 /*==========================================================================
  FUNCTION   : checkfull()
             
  PARAMETERS : int number
             
  RETURN     : 1 if the array isn't full, 0 if the array is full
             
  COMMENT    : Check array.
             
==========================================================================*/
template <class T>
bool Stack<T>::checkfull(){
    if(top <= MAX - 1){
        return 1;
    }
    else{
       
        return 0;
    }
}
/*==========================================================================
  FUNCTION   : Push()
             
  PARAMETERS : T k
             
  RETURN     :
             
  COMMENT    : import data into Arr.
             
==========================================================================*/
template <class T>
void Stack<T>::push(T k)
{
    cout << "Inserted element " << k << endl;
    if(checkfull() == true){
        st[top] = k;
        top++;
    }
    else{
        cout << "can't insert " <<k<< " because Array is full" << endl;
    }
}
/*==========================================================================
  FUNCTION   : Pop()
             
  PARAMETERS :
             
  RETURN     :Popped_element - The last element of the array
             
  COMMENT    : Remove the top element of array.
             
==========================================================================*/
template <class T>
T Stack<T>::pop()
{
    T popped_element = st[top-1];
    top--;
    return popped_element;
}
/*==========================================================================
  FUNCTION   : topElement()
             
  PARAMETERS :
             
  RETURN     :top_element - The top element of the array
             
  COMMENT    : The top element of array.
             
==========================================================================*/
template <class T>
T Stack<T>::topElement()
{
    T top_element = st[top-1];
    return top_element;
}
int main()
{
    int number;
    Stack<int> integer_stack;
    cout << "Enter the size of Array" <<endl;
    cin >> integer_stack.MAX;
    cout <<"Enter the number of elements to insert: " <<endl;
    cin >> number;
    int Arr[number];
    for(int i = 0; i < number; i++){
        cout << "Insert the element number"<<i+1<<": ";
           cin >> Arr[i];
           integer_stack.push(Arr[i]);
    }
    cout << integer_stack.pop() << " is removed from Array " << endl;
    cout << "Top element is " << integer_stack.topElement() << endl;
    return 0;
}
