//Code ini dibuat di linux fedora
#include <iostream>

#define max 5
using namespace std;

struct stacks{
  int atas = -1;
  int data[max];
};

stacks Tumpuk;

int penuh(){
  if(Tumpuk.atas == max-1)
    return 1;
  else
    return 0;
}

int kosong(){
  if(Tumpuk.atas == -1)
    return 1;
  else
    return 0;
}

void input (int data){
  if (kosong()==1){
    Tumpuk.atas++;
    Tumpuk.data[Tumpuk.atas] = data;
    cout << "Data " << Tumpuk.data[Tumpuk.atas] << " Masuk Ke Stack" << endl;
  } else if (penuh()==0){
    Tumpuk.atas++;
    Tumpuk.data[Tumpuk.atas] = data;
    cout << "Data " << Tumpuk.data[Tumpuk.atas] << " Masuk Ke Stack" << endl;
  } else {
    cout << "Tumpukan Penuh" << endl;
  }
}

void hapus(){
  if(kosong() == 0){
    cout << "Data teratas sudah diambil" << endl;
    Tumpuk.atas--;
  } else {
    cout << "Tumpukan Kosong" << endl;
  }
}

void tampil(){
  if(kosong()==0){
    for(int i = Tumpuk.atas; i>=0; i--){
      cout << "Tumpukan ke " << i+1 << " = " << Tumpuk.data[i] << endl;
    }
  }
}

void bersih(){
  Tumpuk.atas = -1;
  cout << "Tumpukan dikosongkan!" << endl;
}

int main(){
  int pil, x, p;
  do{
    cout << "\nStack data structure" << endl;
    cout << "====================" << endl;
    cout << "1. Push" << endl;
    cout << "2. Pop" << endl;
    cout << "3. Show Stack" << endl;
    cout << "4. Kosongkan stack" << endl;
    cout << "5. Quit" << endl;
    cout << "Pilihan: "; cin >> pil;

    switch (pil){
      case 1:
        cout << "Masukkan data: "; cin >> x;
        input(x);
        break;
      case 2:
        hapus();
        break;
      case 3:
        tampil();
        break;
      case 4:
        bersih();
        break;  
      default:
        cout << "TERIMA KASIH" << endl;
        break;
    }
    cout << "Press enter to continue" << endl;
    cin.ignore();
    cin.get();
    system("clear");
  } while (pil < 5);
}