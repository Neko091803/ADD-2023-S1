#include <vector>
#include <queue>
#include <stdexcept>

int kth_largest(std::vector<int> values, int k) {
  if (k > values.size()) {
    throw std::invalid_argument("k cannot be larger than the number of elements in the vector");
  }

  // Create a min heap of size k
  std::priority_queue<int, std::vector<int>, std::greater<int>> minHeap(values.begin(), values.begin() + k);

  // Process the remaining elements of the vector
  for (int i = k; i < values.size(); ++i) {
    if (values[i] > minHeap.top()) {
      minHeap.pop();
      minHeap.push(values[i]);
    }
  }

  // The top of the heap is now the kth largest element
  return minHeap.top();
}
