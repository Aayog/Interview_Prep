#include <iostream>
#include <vector>

void quick_sort(vector<int>& arr, int start = 0, int end = -1) {
    if (end == -1) end = arr.size() - 1;
    if (start >= end) return;
    // conquer
    // pivot --> last element
    int pivot = arr.back();
    int left = 0;
    int pivot_ptr = 0;
    while (pivot_ptr < end)
    {
        if(arr[left] < arr[pivot_ptr]) {
            swap(arr[left], arr[pivot_ptr]);
            pivot_ptr++;
        }
        left++;
    }
    swap(arr[pivot_ptr], arr[end]);
    print_array(arr);
    quick_sort(arr, start, pivot_ptr - 1);
    quick_sort(arr, pivot_ptr  + 1, end);
}