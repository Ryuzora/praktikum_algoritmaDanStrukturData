#include <cstring>
#include <cctype>
using namespace std;

void merge(char data[], int l, int m, int r){
  int i, j, k;
  int n1 = m - l + 1;
  int n2 = r - m;

  char L[n1], R[n2];

  for(i = 0; i < n1; i++){
    L[i] = data[l + i];
  }
  for(j = 0; j < n2; j++){
    R[j] = data[m + j + 1];
  }

  i = 0;
  j = 0;
  k = l;
  while (i<n1 && j < n2){
    if (tolower(L[i]) <= tolower(R[j])){
      data[k] = L[i];
      i++;
    } else {
      data[k] = R[j];
      j++;
    }
    k++;
  }

  while (i < n1){
    data[k] = L[i];
    i++;
    k++;
  }

  while (j<n2){
    data[k] = R[j];
    j++;
    k++;
  }
}

void mergeSort(char data[], int l, int r){
  if (l<r){
    int m = l + (r - l) / 2;
    mergeSort(data, l, m);
    mergeSort(data, m+1, r);
    merge(data, l, m, r);
  }
}