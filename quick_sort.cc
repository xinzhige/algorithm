#include <iostream>

void Swap(int &a, int &b) {
  int temp;
  temp = a;
  a = b;
  b = temp;
}

int Partition(int a[], int low, int high) {
  int i = low; // points to the most left number larger than pivot
  int pivot = a[high];
  for (int j = low; j < high; ++j) {
    if (a[j] < pivot) {
      if (j != i) { // avoid swapping the number with itself
        Swap(a[j], a[i]);
      }
      ++i;
    }
  }
  swap(a[i], a[high]);
  return i;
}
void QuickSort(int a[], int begin, int end) {
  if (begin < end) {
    int pivot_index = Partition(a, begin, end);
    QuickSort(a, begin, pivot_index-1);
    QuickSort(a, pivot_index+1, end);
  }
}

int main(int args, char *argv[]) {
  int arr[] = {5, 4, 1, 3, 6};
  QuickSort(arr, 0, 4);
  for(int i = 0; i < 5; i++) {
    std::cout<<arr[i]<<" ";
  }
  std::cout<<std::endl;
  return 0;
}
