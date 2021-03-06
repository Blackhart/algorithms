#include <vector>

using namespace std;

// Complexity:
//
// Space: O(1)
// Time:
//    - best case: O(n) -> sorted array
//    - worst case: O(n^2) -> unsorted array
//
vector<int> insertionSort(vector<int> array) {
  for (size_t i = 1; i < array.size(); i++) {
    size_t j = i;

    while (j > 0 && array[j] < array[j - 1]) {
      swap(array[j], array[j - 1]);
      j--;
    }
  }

  return array;
}