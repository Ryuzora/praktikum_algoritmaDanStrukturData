#include <iostream>

using namespace std;

struct inputs {
  char huruf[2], kata[10];
  int angka;
};

int main(){
  inputs n;
  cout << "a. Masukkan sebuah huruf            = "; cin >> n.huruf;
  cout << "b. Masukkan sebuah kata             = "; cin >> n.kata;
  cout << "c. Masukkan Angka                   = "; cin >> n.angka;
  cout << "d. Huruf yang anda masukkan adalah  = " << n.huruf << endl;
  cout << "e. Kata yang anda masukkan adalah   = " << n.kata << endl;
  cout << "f. Angka yang anda masukkan adalah  = " << n.angka << endl;
}
