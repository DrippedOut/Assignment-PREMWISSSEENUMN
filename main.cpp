#include <iostream>
using namespace std;
// 1. Creating make file
// 2. Swap the value in the array using pointers** to help
// 3. Take input from argv
int main(int argc, char** argv) {
  int n = argc - 1;
  int* a = new int[n];

  for (int i = 0; i < n; i++) {
    a[i] = atoi(argv[i + 1]);
    cout << "a[" << i << "] = " << a[i] << endl;
  }

  int* start = a;
  int* end = a + n - 1;

  // Swapping
  while (start < end) {
    int temp = *start;
    *start = *end;
    *end = temp;
    start++;
    end--;
  }

  // Print result
  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }

  delete[] a;

  return 0;
}
