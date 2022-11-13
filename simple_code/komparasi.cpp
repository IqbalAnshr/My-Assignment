#include <iostream>
using namespace std;

int main()
{
    int a,b;
    bool c;
    a=7;
    b=3;
    cout<<"operator perbandingan\n";
   
    c=(a==b);
    cout<<"a==b hasilnya "<<c<<endl;
    c=(a!=b);
    cout<<"a!=b hasilnya "<<c<<endl;
    c=(a>b);
    cout<<"a>b hasilnya "<<c<<endl;
    c=(a<b);
    cout<<"a<b hasilnya "<<c<<endl;
    c=(a>=b);
    cout<<"a>=b hasilnya "<<c<<endl;
    c=(a<=b);
    cout<<"a<=b hasilnya "<<c<<endl;
    return 0;
}