#include<iostream>
#include<malloc.h>
using namespace std;
int length = 0;
int* get_even_num(int *arr, int* sz){
	int count = 0;
    int i = 0;
    int j = 0;
    int* new_arr = NULL;
    for(i = 0; i < length; i++){
        if(arr[i]%2 == 0){
            count++;    
        }
    }
    new_arr = new int(count+1);
    new_arr[0] = count;
    for(i = 0; i <length; i++){
        if(arr[i]%2 == 0){
            new_arr[j+1] = arr[i];
            j++;
        }
    } 
    sz = new_arr;
    return sz;
}
int main(){
    int i = 0;
    int size = 0;
    cout << "Nhap vao so phan tu cua mang: ";
    cin >> length;
    int *Arr = new int[length];
    for(i = 0; i < length; i++){
    	cout << "Nhap vao phan tu thu " << i +1 << endl;
        cin >> Arr[i];
    }
	int* ptr = get_even_num(Arr, &size);
	cout << "So phan tu mang moi: " << *ptr << endl;
    for(i = 0; i < *ptr; i++){
    		cout << "Phan tu thu: " << i +1 << endl;
    		cout << ptr[i+1] << endl;
        }
}
 
