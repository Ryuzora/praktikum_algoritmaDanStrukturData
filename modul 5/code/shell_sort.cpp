#include <cctype>
using namespace std;

void shellSort(char nama[], int n){
  for(int g=n/2; g > 0; g /= 2){
    for(int i = g; i < n; ++i){ 
      int temp = nama[i];
      int j;
      for(j = i; j >= g && tolower(nama[j - g]) > tolower(temp); j -= g){
        nama[j] = nama[j - g];
      }
      nama[j] = temp;
    }
  }
}