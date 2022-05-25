#include<iostream>
using namespace std;
class String
{
    public:
        String();
        String(char* str);
        ~String();
    private:
        char* str;
        friend String operator+ (const String&, const String&);
        friend ostream& operator << (std::ostream&, String&);
        friend istream& operator >> (std::istream&, String&);
};
