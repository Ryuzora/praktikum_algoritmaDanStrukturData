#include <utility>
using namespace std;

void selectionSort(char data[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < n; ++j) {
            if (data[j] < data[minIndex]) {
                minIndex = j;
            }
        }
        swap(data[i], data[minIndex]);
    }
}