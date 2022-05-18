#include<iostream>
using namespace std;
//Function to add two numbers
float add(float a, float b){
    return a+b;
} 
//Function to subtract two numbers
float Minus(float a, float b){
    return a-b;
}
//Function to multiply two numbers
float multiply(float a, float b){
    return a*b;
}
//Function to divide two numbers
float divide(float a, float b){
    return a/b;
}
//main function
void operation(float a, float b, float (*p2Func)(float, float)){
    float result = p2Func(a,b);
    cout << result;
}
int main(){
    float a, b;
    int option = 0;
    cout << "Enter a and b: " << endl;
    cin >> a;
    cin >> b;
    cout << "******************Menu*****************" <<endl;
    cout << "1. A Add B" << endl;
    cout << "2. A subtract B" << endl;
    cout << "3. A Multiplie B" << endl;
    cout << "4. A divided B" << endl;
    cout << "0. End" << endl;
    cout << "***************************************" <<endl;
    cout << "Enter option: " << endl;
    cin >> option;
    switch(option){
        case 1:
            operation(a,b,add);
            break;
        case 2:
            operation(a,b,Minus);
            break;
        case 3:
            operation(a,b,multiply);
            break;
        case 4:
            operation(a,b,divide);
            break;
        case 0:
            exit(0);
    }
    return 0;
}
