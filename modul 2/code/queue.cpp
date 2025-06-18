//Code ini dibuat di linux fedora
#include <iostream>
#include <stdlib.h>
#define n 10
using namespace std;

void INSERT(char x);
void DELETE();
void CETAKLAYAR();
void Inisialisasi();
void RESET();
int PIL, F, R;
char pilihan[1], HURUF;
char Q[n];
int main(){
  Inisialisasi();
  do{
    cout << "QUEUE" << endl;
    cout << "==============" << endl;
    cout << "1. INSERT" << endl;
    cout << "2. DELETE" << endl;
    cout << "3. CETAK QUEUE" << endl;
    cout << "4. QUIT" << endl;
    cout << "PILIHAN : "; cin >> pilihan;
    PIL = atoi(pilihan);

    switch(PIL){
      case 1:
        cout << "Masukkan Data: "; cin >> HURUF;
        INSERT(HURUF);
        break;
      case 2:
        DELETE();
        break;
      case 3:
        CETAKLAYAR();
        break;
      default:
        cout << "TERIMA KASIH" << endl;
    }
    cout << "Press enter to continue" << endl;
    cin.ignore();
    cin.get();
    system("clear");
  }
  while (PIL < 4);
}


int penuh(){
  if (R == n -1 ){
    return 1;
  } else {
    return 0;
  }
}

int kosong(){
  if( R == -1){
    return 1;
  } else {
    return 0;
  }
}

void INSERT(char x){
  if(kosong()==1){
    R = F = 0;
    Q[R] = x;
  } else if(penuh()==1){
    cout << "Antrian penuh" << endl;
  } else {
    R++;
    cout << "data " << x << " dimasukkan ke antrian" << endl;
    Q[R] = x;
  }
}

void DELETE(){
  if (kosong()==1){
    cout << "Antrian kosong" << endl;
  } else {
    int data = Q[F];
    for(int i = F; i<=R-1; i++){
      Q[i] = Q[i+1];
    }
    R--;
    cout << "Data terdepan Sudah dihapus" << endl;
  }
}

void Inisialisasi(){
  F=R=-1;
}

void CETAKLAYAR(){
  if (kosong()==0){
    for(int i=F; i<=R; i++){
      cout << "Antrian ke " << i << " = " << Q[i] << endl;
    }
  }
}