#include <iostream>

void swap(int &a, int &b) {
  int temp = a;
  a = b;
  b = temp;
}

void bubbleSort(int a[], int length) {
  int i, j;
  for (i = length - 1; i > 0; i--) {
    for (j = 0; j < i; j++) {
      if (a[j] > a[j+1]) {
	      swap(a[j], a[j+1]);
      }
    }
  }
}

int main(int args, char *argv[]) {
  int arr[] = {5, 4, 1, 3, 6};
  bubbleSort(arr, 5);
  for(int i = 0; i < 5; i++) {
    std::cout<<arr[i]<<" ";
  }
  std::cout<<std::endl;
  return 0;
}
