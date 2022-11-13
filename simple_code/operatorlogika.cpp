#include <iostream>
using namespace std;

int main (){
    int m ;
    bool c ;

    cin >> m;
    
    c =  m <= 0 && m >= 150;
    cout << c << endl;
    c = m >= 0 && m <= 150;
    cout << c << endl;
    c = m >= 0 || m <= 150;
    cout << c << endl;
    c = m <= 0 || m >= 150;
    cout << c << endl;
    return 0;

}