#include <iostream>

void Merge(int a[], int b[], int low, int mid, int high) {
  int i = low;
  int j = mid + 1;
  int k = low;
  while (i <= mid && j <= high) {
    if (a[i] < a[j]) {
      b[k] = a[i];
      ++i;
    } else {
      b[k] = a[j];
      ++j;
    }
    ++k;
  }
  while (i <= mid) {
    b[k] = a[i];
    ++k;
    ++i;
  }
  while (j <= high) {
    b[k] = a[j];
    ++k;
    ++j;
  }
  for (i = low; i <= high; i++) {
    a[i] = b[i];
  }
}

void MergeSort(int a[], int begin, int end) {
  if (begin < end) {
    int len = end - begin + 1;
    int b[len];
    int mid = begin + (end-begin)/2;
    MergeSort(a, begin, mid);
    MergeSort(a, mid+1, end);
    Merge(a, b, begin, mid, end);
  }
}

int main(int args, char *argv[]) {
  int arr[] = {5, 4, 1, 3, 6};
  MergeSort(arr, 0, 4);
  for(int i = 0; i < 5; i++) {
    std::cout<<arr[i]<<" ";
  }
  std::cout<<std::endl;
  return 0;
}
