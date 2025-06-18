#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <time.h>

using namespace std;
int random(int bil)
{
  int jumlah = rand() % bil;
  return jumlah;
}

void randomize()
{
  srand(time(NULL));
}

void clsscr()
{
  system("clear");
}

void sequential();
void binary();
void perbedaan();

int main(){
  int pilihan = 0;
  while (pilihan < 4){
  cout << "Pilih menu" << endl;
  cout << "1. Sequential Searching" << endl;
  cout << "2. Binary Searching" << endl;
  cout << "3. Jelaskan Perbedaan Sequential Searching dan Binary Searching!" << endl;
  cout << "4. Exit" << endl;
  cout << "Pilih: ";
  cin >> pilihan;
    switch (pilihan){
      case 1:
        clsscr();
        sequential();
        break;
      case 2:
        clsscr();
        binary();
        break;
      case 3:
        clsscr();
        perbedaan();
        break;
      default:
        continue;
    }
    cout << "Press Enter To Continue";
    cin.ignore(); cin.get();
    system("clear");
  }
  cout << "Terima kasih!";
  return 0;
}

void sequential(){
  clsscr();
  int data[100];
  int cari = 20;
  int counter = 0;
  int flag = 0;
  int save;
  randomize();
  printf("generating 100 numnber . . .\n");
  for (int i = 0; i < 100; i++)
  {
    data[i] = random(100) + 1;
    printf("%d ", data[i]);
  }
  printf("\ndone.\n");

  for (int i = 0; i < 100; i++)
  {
    if (data[i] == cari)
    {
      counter++;
      flag = 1;
      save = i; 
    }
  }

  if (flag == 1)
  {
    printf("Data ada, sebanyak %d!\n", counter);
    printf("pada indeks ke-%d\n", save);
  }
  else
  {
    printf("Data tidak ada!\n");
  }
}

void binary(){
  int n, kiri, kanan, tengah, temp, key;
  bool ketemu = false;

  cout << "Masukkan jumlah data? ";
  cin >> n;
  int angka[n];
  for (int i = 0; i < n; i++){
    cout << "Angka ke - [" << i << "] : ";
    cin >> angka[i];
  }

  for (int i = 0; i < n; i++){
    for (int j = 0; j < n-1; j++){
      if (angka[j] > angka[j+1]){
        temp = angka[j];
        angka[j] = angka[j+1];
        angka[j+1] = temp;
      }
    }
  }
  cout << "=======================================================\n";
  cout << "Data yang telah diurutkan adalah:\n";
  for (int i = 0; i < n; i++){
    cout << angka[i] << " ";
  }
  cout << endl;
  cout << "=======================================================\n";
  cout << "Masukkan angka yang dicari : ";
  cin >> key;

  kiri = 0;
  kanan = n-1;
  while (kiri <= kanan){
    tengah = (kiri + kanan) / 2;
    if(key == angka[tengah]){
      ketemu = true;
      break;
    } else if (key < angka[tengah]){
      kanan = tengah - 1;
    } else {
      kiri = tengah + 1;
    }
  }
  if (ketemu == true){
    cout << "Angka ditemukan!" << endl;
  } else {
    cout << "Angka tidak ditemukan!" << endl;
  }
}

void perbedaan(){
  cout << "Sequential Searching: ";
  cout << "Memeriksa elemen satu per satu, dimulai dari awal hingga akhir. Sampai data yang dicari ditemukan" << endl;
  cout << "time complexity: O(n)" << endl << endl;
  cout << "Binary Searching: ";
  cout << "Pencarian dilakukan dengan membagi data yang telah terurut menjadi dua bagian, lalu menentukan apakah data yang dicari";
  cout << "berada di tengah-tengah pembagian" << endl;
  cout << "time complexity: O(log n)" << endl;
}