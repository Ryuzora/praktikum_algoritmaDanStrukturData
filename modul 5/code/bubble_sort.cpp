#include <utility>
using namespace std;

void bubbleSort(char data[], int n) {
  bool swapped;

  for (int i = 0; i < n - 1; i++) {
    swapped = false;
    for (int j = 0; j < n - i - 1; j++) {
      if (data[j] > data[j + 1]) {
        swap(data[j], data[j + 1]);
        swapped = true;
      }
    }
    if (!swapped)
      break;
  }
}