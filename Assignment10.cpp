#include<iostream>
#include "Assignment10.h"
using namespace std;
/*==========================================================================
  FUNCTION   : String::String()
              
  PARAMETERS : 
              
  RETURN     : 
              
  COMMENT    : Constructor
              
==========================================================================*/
String::String(){
   
}
String::String(char* str){
    this->str = str;
}
   
String::~String(){
   
}
/*==========================================================================
  FUNCTION   : String operator+ (const String&String1, const String&String2)
              
  PARAMETERS : String&String1, String&String2
              
  RETURN     : new_String
              
  COMMENT    :Function to add two character strings
              
==========================================================================*/
String operator+ (const String&String1, const String&String2){
    int i=0;
    int count =0;
    int j = 0;
    String new_String;
    new_String = String1;
    while(String1.str[count] != '\0'){
        count++;
    }
    for(i = count; String2.str[j] != '\0'; i++){
        new_String.str[i] = String2.str[j];
        j++;
    }
    new_String.str[i] = '\0';
    return new_String;       
}
/*==========================================================================
  FUNCTION   : ostream& operator << (std::ostream&out, String&in_string)
              
  PARAMETERS : std::ostream&out, String&in_string
              
  RETURN     : out
              
  COMMENT    :Print function
              
==========================================================================*/

ostream& operator << (std::ostream&out, String&in_string){
    out << in_string.str;
    return out;
}
/*==========================================================================
  FUNCTION   : istream& operator >> (std::istream&in, String&in_string)
              
  PARAMETERS : std::istream&in, String&in_string
              
  RETURN     : in
              
  COMMENT    :input function
              
==========================================================================*/
istream& operator >> (std::istream&in, String&in_string){
    in_string.str = new char[100];
    in.getline(in_string.str,100);
    return in;
}
int main(){
    String String1, String2, Add_String;
    cout << "Enter the content of string1: " << endl;
    cin >> String1;
    cout << "Enter the content of string2: " << endl;
    cin >> String2;
    cout << "The content of string1 is: " << endl;
    cout << String1 << endl;
    cout << "The content of string2 is: " << endl;
    cout << String2 << endl;
    cout << "The sum of string2 is: " << endl;
    Add_String = String1 + String2;
    cout << Add_String << endl;
}
