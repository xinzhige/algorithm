#include <iostream>

inline int Parent (int i) { return i>>1; }  
inline int Left (int i) { return i<<1; }  
inline int Right (int i) { return (i<<1)|1; }

void swap(int &a, int &b) {
  if (a != b) {
    a ^= b;
    b ^= a;
    a ^= b;
  }
}

void MaxHeapify(int *A, int heap_size, int i) {
  int l = Left(i);
  int r = Right(i);
  int largest;
  if (l <= heap_size && A[l] > A[i]) {
    largest = l;
  } else {
    largest = i;
  }
  if (r <= heap_size && A[r] > A[largest]) {
    largest = r;
  }
  if (largest != i) {
    swap(A[i], A[largest]);
    MaxHeapify(A, heap_size, largest);
  }
}

void BuildMaxHeap(int *A, int heap_size) {
  for (int i = heap_size>>1; i >= 1; --i) {
    MaxHeapify(A, heap_size, i);
  }
}

void HeapSort(int *A, int heap_size) {
  BuildMaxHeap(A, heap_size);
  int len = heap_size;
  for (int i = heap_size; i >= 2; --i) {
    swap(A[1], A[i]);
    --len;
    MaxHeapify(A, len, 1);
  }
}

int main(int args, char *argv[]) {
  int arr[] = {5, 4, 1, 3, 6};
  HeapSort(arr, 5);
  for(int i = 0; i < 5; i++) {
    std::cout<<arr[i]<<" ";
  }
  std::cout<<std::endl;
  return 0;
}
