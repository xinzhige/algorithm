#include <iostream>

void swap(int &a, int &b) {
  int temp;
  temp = a;
  a = b;
  b = temp;
}

void SelectionSort(int a[], int length) {
  int i, j, min;
  for (i = 0; i < length-1; ++i) {
    min = i;
    for (j = i+1; j < length; j++) {
      if (a[min] > a[j]) {
	min  = j;
      }
    }
    if (min != i) {
      swap(a[min], a[i]);
    }
  }
}

int main(int args, char *argv[]) {
  int arr[] = {5, 4, 1, 3, 6};
  SelectionSort(arr, 5);
  for(int i = 0; i < 5; i++) {
    std::cout<<arr[i]<<" ";
  }
  std::cout<<std::endl;
  return 0;
}
