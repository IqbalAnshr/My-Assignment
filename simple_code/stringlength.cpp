#include <iostream>
#include <string>

using namespace std;

int main(){
  string a;
  int jumlah;

  cout << "Masukkan sebuah string: ";
  cin >> a ;

  jumlah = a.length();

  cout << "Jumlah kata adalah " << jumlah << endl;
}