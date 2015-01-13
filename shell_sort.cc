#include <iostream>

template <typename T>

void shell_sort(T A[], size_t length) {
  size_t gap;
  int i, j; 
  T temp;
  for (size_t gap = length >> 1; gap > 0; gap >>= 1) {
    for (i = gap; i < length; ++i) {
      temp = A[i];
      for (j = i; j >= gap && A[j - gap] > temp; j -= gap) {
        A[j] = A[j- gap];
      }
      A[j] = temp;
    }
  }
}

int main(int args, char* argv[]) {
  int a[] = {5, 6, 1, 9, 4, 7, 3, 8};
  for (int i = 0; i < 8; ++i) {
    std::cout<<a[i]<<" ";
  }
  std::cout<<std::endl;
  shell_sort(a, 8);
  for (int i = 0; i < 8; ++i) {
    std::cout<<a[i]<<" ";
  } 
  std::cout<<std::endl; 
  return 0;
}
