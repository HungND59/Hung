#include<iostream>
#define Max 100
using namespace std;
class CFraction{
    public:
        int numerator;
        int denominator;
    public:
           friend CFraction operator+ (const CFraction&, const CFraction&);
          friend CFraction operator- (const CFraction&, const CFraction&);
          friend CFraction operator* (const CFraction&, const CFraction&);
          friend CFraction operator/ (const CFraction&, const CFraction&);   
        int input(CFraction&);
        int output(CFraction&);
        void reduce(CFraction&cFraction);
};
