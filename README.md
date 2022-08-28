## Sorting Algorithms and Data Structure Practice

### Sorts

#### Bubble Sort
 As the name suggests, in the sorting algorithm each number bubbles up to its correct order (depending on the implementation it can be ascending or descending)

 Best case:
    - Can have all sorted, runtime: N
    - Just one number needs to be bubbled up: N + N - 1 = 2N - 1; have to check if the second is in the right order and nothing has to be bubbled up

Worst case:
    - In opposite order; everything has to be bubbled up
    --> N + (N - 1) + (N - 2) + ... + 1 = N(N+1)/2 = N^ 2/2 + N/2; we take the dominating term and remove constants for ease of comparison and understanding
    - O(N^2)