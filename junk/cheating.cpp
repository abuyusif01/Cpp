#include <bits/stdc++.h>
using std::cin;
using std::cout;
using std::endl;

void find_mean(int list[], int sizeofarray) {
  int mean = 0;
  int total_list = 0, size_of_list = 0;
  for (int i = 0; i < sizeofarray; i++) {
    total_list += list[i];
    size_of_list++;
  }
  mean = total_list / size_of_list;
  cout << "Mean is equal to: " << mean << endl;
  for (int j = 0; j < sizeofarray; j++) {
    // so now we're testing finally we're not here fuck this things ls gosss
    // l s nice i think i dont need any
    if (list[j] > mean) {
      cout << list[j]
           << "is greeter than the mean at good one thos but index: " << j
           << endl;
    }
  }
}
int main() {
  int size;
  cout << "Enter the size of an array: ls  s lls  lsll lls lls lls";
  cin >> size;

  int array[size];
  for (int i = 0; i < size; i++) {
    cin >> array[i];
  }
  find_mean(array, size);
  return 0;
}
