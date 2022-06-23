#include<iostream>
#define Max 10
using namespace std;
template <class T>
class Stack{
	private:
		T count; // count the number of elements in the array
		T Arr[Max]; // The array for storing the elements
	public:
		Stack(); //constructor
		T Push(T);// function to push the element to the Stack
		T Pop(T);// function to remove the element from the Stack
};
