// classic method, return the index of target once we find it
int search(int A[], int begin, int end, int target) {
  int middle;
  while(left <= right) {
    middle = begin + (end - begin) / 2;
    if (A[middle] == target) {
      return middle;
    } else if (A[middle] < target) {
      begin = middle + 1;
    } else {
      end = middle - 1;
    }
  }
  return -1;
}

// 1) if there are many elements as same as target, then return the first occurence in the array; 2) has just 2 comparisons in the loop
int BinarySearch(int A[], int begin, int end, int target) {
  int middle;
  while(begin < end) {
    middle = begin + (end - begin) / 2;
    if (A[middle] < target) {
      begin = middle + 1;
    } else {
      end = middle;
    }
  }
  if ((begin == end) && (A[end] == target)) {
    return begin;
  }
  return -1;
}
