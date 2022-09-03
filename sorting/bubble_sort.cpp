#include <iostream>
#include <vector>
#include <algorithm>

#define ARRAY_SIZE 50

using namespace std;

// vector<int> bubble_sort(vector<int> arr);
// void print_array(vector<int> arr);

vector<int> bubble_sort(vector<int> arr) {
    if (arr.size() <= 1) return arr;
    for(int i = 0; i < arr.size(); i++){
        int flag = 0;
        for(int j = 0; j < arr.size() - 1; j++){
            if(arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
                flag++;
            }
        }
        if (flag == 0) break;
    }
    return arr;
}