#include <iostream>
using namespace std;
const int row = 3;
int main() {
    int array[row];
    cout << "enter the numbers in the array\n";
    for (int i = 0; i < row; i++) {
        cin >> array[i];
    }
    for (int i = 0; i < row; i++) {
        for (int j = i + 1; j < row; j++) {
            if (array[i] < array[j]) {
                int temp =0;
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    for (int i = 0; i < row; i++) {
        cout << array[i] << " ";
    }

    return 0;
}
