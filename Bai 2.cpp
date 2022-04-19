#include<iostream>
using namespace std;
int main(){
    int i,j;
    string Arr[100] = {"          *      ","         ***      ","        *****      ","       *******      ","      *********      "};
    for(i=0;i<2;i++){
        if(i==0){
            for(j=0;j<5;j++){
                cout << Arr[j] << endl;
            }
            
        }
        else{
            for(j=3;j>=0;j--){
                cout << Arr[j] << endl;
            }
        }
    }
}
