#include <iostream>

using namespace std;

struct kendaraan{
  char plat[10], jenis[15], namaPemilik[30], alamat[30], kota[15];
};

int main(){
  kendaraan pengguna;
  pengguna = { "DA1234MK",  "RUSH",  "Andika Hartanto",  "Jl. Kayu Tangi 1",  "Banjarmasin"};
  cout << "a. Plat Nomor Kendaraan   : " << pengguna.plat << endl;
  cout << "b. Jenis Kendaraan        : " << pengguna.jenis << endl;
  cout << "c. Nama Pemilik           : " << pengguna.namaPemilik << endl;
  cout << "d. Alamat                 : " << pengguna.alamat << endl;
  cout << "e. Kota                   : " << pengguna.kota << endl;
}