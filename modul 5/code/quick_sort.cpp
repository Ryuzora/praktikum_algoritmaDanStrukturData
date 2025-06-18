#include <utility>
using namespace std;

int partition(char data[], int low, int high) {
  int pivot = data[high];
  int i = low - 1;
  for (int j = low; j <= high - 1; j++) {
    if (data[j] < pivot) {
      i++;
      swap(data[i], data[j]);
    }
  }
  swap(data[i + 1], data[high]);  
  return i + 1;
}

void quickSort(char data[], int low, int high) {
  if (low < high) {
    int pi = partition(data, low, high);
    quickSort(data, low, pi - 1);
    quickSort(data, pi + 1, high);
  }
}