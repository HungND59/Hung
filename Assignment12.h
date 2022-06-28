#include<iostream>
using namespace std;
template <class T>
class Stack {

 

public:
    Stack();            //Constructor
    void push(T k);        // Function to push the element to the Stack
    T pop();            // function to remove the element from the Stack
    T topElement();        // Function to show the top of the element in array
    int MAX;            // Max of array 
private:
    T top;                
    T st[];
    bool checkfull();    //check if the array can still be added or not
};
