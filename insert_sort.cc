#include <iostream>

void insertionSort(int a[], int begin, int end) {
  int i, j;
  int temp;
  for (i = begin+1; i <= end; ++i) {
    temp = a[i];
    int j = i - 1;
    while (j >= begin && a[j] > temp) {
      a[j+1] = a[j];
      --j;
    }
    a[j+1] = temp;
  }
}

int main(int args, char *argv[]) {
  int a[] = {5, 4, 1, 2, 6};
  insertionSort(a, 0, 4);
  for (int i = 0; i < 5; ++i) {
    std::cout<<a[i]<<" ";
  }
  std::cout<<std::endl;
  return 0;
}
