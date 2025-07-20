#include <iostream>

using namespace std;

int main(){
  
  int arr[] = {4, 5, 143, 345, 78, 1, 999};

  int min = arr[0];
  int max = arr[0];
  for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {

    if (arr[i] < min)
       min = arr[i];

    if (arr[i] > max)
       max = arr[i];
 }
  
  cout << "Min value: " << min << endl << "Max value: " << max << endl;
  return 0;
}