#include<iostream>
using namespace std;
int nhapnam(){
    int a;
    int *a1 = &a;
    cout << "Nhap vao nam: " << endl;
    cin >> a;
    while(a<1000 || a>3023){
        cout << "Nam khong hop le -> Nhap lai: " << endl;
        cin >> a;
        }
    return *a1;
    }

 

int nhapthang(){
    int b;
    int *b1 = &b;
    cout << "Nhap vao thang: " << endl;
    cin >> b;
    while(b<=0 || b>12){
        cout << "Thang khong hop le -> Nhap lai: " << endl;
        cin >> b;
    }
    return *b1;
}
int nhapngay(int &a1, int &b1, int *count ){
    int c;
    
    int *c1 = &c;
    cout << "Nhap vao ngay: " << endl;
    cin >> c;
    if(a1%4 == 0 && a1%100 != 0){
        cout << "Nam nhuan" << endl;
        if(b1 == 2){
            *count = 29;
            while(c<=0 || c>29){    
                cout << "Ngay khong hop le -> Nhap lai: " << endl;
                cin >> c;
           }
        }
        else if(b1 == 1 || b1 == 3 ||b1 == 5 || b1 == 7 ||b1 == 8 || b1 == 10 || b1 == 12){
            *count = 31;
            while(c<=0 || c>31){
                cout << "Ngay khong hop le -> Nhap lai: " << endl;
                cin >> c;
            }
        }
        else{
            *count = 30;
            while(c<=0 || c>30){
                cout << "Ngay khong hop le -> Nhap lai: " << endl;
                cin >> c;
            }
        }
    }
    else{
        cout << "Khong phai nam nhuan" << endl;
        if(b1 == 2){
            *count = 28;
            while(c<=0 || c>28){
                cout << "Ngay khong hop le -> Nhap lai: " << endl;
                cin >> c;
           }
        }
        else if(b1 == 1 || b1 == 3 ||b1 == 5 || b1 == 7 ||b1 == 8 || b1 == 10 || b1 == 12){
            *count = 31;
            while(c<=0 || c>31){
                cout << "Ngay khong hop le -> Nhap lai: " << endl;
                cin >> c;
            }
        }
        else{
            *count = 30;
            while(c<=0 || c>30){
                cout << "Ngay khong hop le -> Nhap lai: " << endl;
                cin >> c;
            }
        }
    }
    cout << "Count: " << *count << endl;
    return *c1;            
}
int Nextday(int &a1, int &b1, int &c1, int &count){
    if(c1 == count){
        if(b1 == 12){
            a1 = a1 + 1;
            b1 = 1;
            c1 = 1;
        }
        else{
            c1 = 1;
            b1 = b1 + 1;
        }
    }
    else{
        c1 = c1 +1;
    }
    return c1;
}
int Previousday(int &a1, int &b1, int &c1, int &count){
    if(c1 == 1){
        if(b1 == 12){
            a1 = a1 - 1;
            b1 = 1;
            c1 = 31;
        }
        else{
            if((a1%4 == 0 && a1%100 != 0)&&(b1 == 3)){
                c1 = 29;
            }
            else if(((a1%4 == 0 && a1%100 == 0)||((a1%4 != 0 || a1%100 != 0)))&&(b1 == 3)){
                c1 = 28;
            }
            b1 = b1 - 1;
        }
    }    
    else{
        c1 = c1 - 1;
    }
    return c1;
}
int main(){
    int q;
    int m = nhapnam();
    int n = nhapthang();
    int p = nhapngay(m,n,&q);

 

    int number;
    cout << "Year: " << m << endl;
    cout << "Month: " << n << endl;
    cout << "Date: " << p << endl;
    cout << "CALENDAR" << endl;
    cout << "=============MENU===============" << endl;
    cout << "1. Find the number of month" << endl;
    cout << "2. Show next day" << endl;
    cout << "3. Show previous day" << endl;
    cin >> number;
    switch(number){
        case 1:
            cout << "Number of month: " << q << endl;
            break;
        case 2:
            cout << "Next day: " << Nextday(m,n,p,q) << endl;
            break;
        case 3:
            cout << "previous day: " << Previousday(m,n,p,q) << endl;
            break;
    }
}
