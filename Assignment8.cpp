#include<iostream>
#include<string.h>
using namespace std;
/*
Description: search for the first position where the substring appear in the parent string
Parameter:
const char *str: parent string
char *sub: sub string
Return value: return to the first postion where the substring appear in the parent string, if substring doesn't appear in parrent string, return -1.
strstr(): If the substring is found, the strstr() function returns the pointer to the first character of the substring
*/
int findsubstr(const char *str, char *sub){
    char *result;
    result = strstr(str, sub);
    if (result != NULL){
        return strlen(str) - strlen(result);   
    }   
    else{
        return -1;
    }
}
int main(){
    char text1[100];
    char text2[100];
    cout << "Enter the content of text1: " << endl;
    cin.getline(text1,100);
    cout << "Enter the content of text2: " << endl;
    cin.getline(text2,100);
    cout << "The content of text1 is: " << text1 << endl;
    cout << "The content of text2 is: " << text2 << endl;
    cout << "The first postion where the substring appear in the parent string is: " << findsubstr(text1,text2) << endl;
}
