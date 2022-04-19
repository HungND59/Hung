#include<iostream>
using namespace std;

 

int main(){
    int a,b,c,d=0;
    cout << "Input: " << endl;
    cin >> a;
    for(b=a; a!=0; a = a/10 ){
        c = a%10;
        d = d*10 + c;
    }
    if(b == d){
        cout << "A la so doi xung" << endl;
        
    }
    else{
        cout << "A khong la so doi xung" << endl;
    }
}
