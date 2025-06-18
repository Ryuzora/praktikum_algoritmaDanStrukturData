#include <cctype>
using namespace std;

void insertion(char data[], int n){
  for (int i=0; i < n; i++){
      char key = data[i];
      char j = i - 1;

      while (tolower(key) < tolower(data[j])){
        data[j+1] = data[j];
        j--;
      }
      data[j+1] = key;
  }
}