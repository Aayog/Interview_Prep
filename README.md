## Sorting Algorithms and Data Structure Practice

### Sorts
#### Comparison based sorting
##### [Bubble Sort ](../main/sorting/bubble_sort.cpp)
 As the name suggests, in the sorting algorithm each number bubbles up to its correct order (depending on the implementation it can be ascending or descending)

Best case:
    - Can have all sorted, runtime: N
    - Even if just one number needs to be bubbled up: ```N + N - 1 = 2N - 1```; have to check if the second is in the right order and nothing has to be bubbled up

Worst case:
    - In opposite order; everything has to be bubbled up
    ```N + (N - 1) + (N - 2) + ... + 1 = N(N+1)/2 = N^2/2 + N/2```
    we take the dominating term and remove constants for ease of comparison and understanding
    - ```O(N^2)```


##### [Selection Sort ](../main/sorting/bubble_sort.cpp)
 As the name suggests, in the sorting algorithm each number is placed in its correct order by getting the smallest item left to be placed or the biggest item left to be placed(depending on the implementation it can be ascending or descending)

Best case:
    - Even if all sorted, still has to compare each item to all the other unsorted items; same as worst case.

Worst case:
    - Each item is compared to the items left that are not sorted yet, so the runtime adds up :
    ```N + (N - 1) + (N - 2) + ... + 1 = N(N+1)/2 = N^2/2 + N/2```
    we take the dominating term and remove constants for ease of comparison and understanding
    - ```O(N^2)```

---

### Divide and Conquer

##### [Merge Sort ](../main/sorting/merge_sort.cpp)
 As the name suggests, in the sorting algorithm each number bubbles up to its correct order (depending on the implementation it can be ascending or descending)

Best case and Worst case:
    - In merge sort the array is divided by half each iteration until it reaches a single item array, then combined back up until it reaches the full array.
    - So, the depth of the tree this algorithm forms when going from N .. N/2 ...N/4 ... ... 1 is log<sub>2</sub>(N).
    - It doesn't matter if the array is completely sorted, partially sorted, all in opposite order it follows all the same process.
    - So, the run time for each element will be log<sub>2</sub>(N) and for all the elements will be N times.
    - so runtime complexity: O(Nlog<sub>2</sub>N)