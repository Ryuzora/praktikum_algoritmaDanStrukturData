#include <iostream>
#include <cstring>

using namespace std;

extern void insertion(char data[], int n);
extern void mergeSort(char data[], int l, int r);
extern void printSort(char data[], int max);
extern void shellSort(char data[], int max);
extern void quickSort(char data[], int low, int high);
extern void bubbleSort(char data[], int n);
extern void selectionSort(char data[], int n);

void printData(char data[], bool cur){
  if(!cur){
    cout << "Data sebelum disorting : ";
  } else {
    cout << "Data sesudah Sorting   : ";
  }
  for(int i = 0; i < strlen(data); ++i){
    if(data[i] == ' ') continue;
    cout << data[i];
  }
  cout << endl;
}

int main(){
  int pil = 0;
    while (pil < 7){
      char nama[24] = "Muhammad Azma Al Faqih";
      char nim[15] = "2410817110008";
      int nama_max = strlen(nama);
      int nim_max = strlen(nim);
      cout << "------------------------" << endl;
      cout << "|       SORTING        |" << endl;
      cout << "------------------------" << endl;
      cout << "1. Insertion Sort" << endl;
      cout << "2. Merge Sort" << endl;
      cout << "3. Shell Sort" << endl;
      cout << "4. Quick Sort" << endl;
      cout << "5. Bubble Sort" << endl;
      cout << "6. Selection Sort" << endl;
      cout << "7. Exit" << endl;
      cout << "------------------------" << endl;
      cout << "Masukkan Pilihan : ";
      cin >> pil;
      switch(pil){
        case 1:
          printData(nama, 0);
          insertion(nama, nama_max);
          printData(nama, 1);
          break;
        case 2:
          printData(nama, 0);
          mergeSort(nama, 0, nama_max-1);
          printData(nama, 1);
          break;
        case 3:
          printData(nama, 0);
          shellSort(nama, nama_max);
          printData(nama, 1);
          break;
        case 4:
          printData(nim, 0);
          quickSort(nim, 0, nim_max-1);
          printData(nim, 1);
          break;
        case 5:
          printData(nim, 0);
          bubbleSort(nim, nim_max);
          printData(nim, 1);
          break;
        case 6:
          printData(nim, 0);
          selectionSort(nim, nim_max);
          printData(nim, 1);
          break;
        default:
          continue;
      }
      cout << "Press enter to continue";
      cin.ignore(); cin.get();
      system("clear");
    }
    if (pil >= 7) {
      cout << "Terima kasih :D";
    }
}