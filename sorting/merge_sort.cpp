#include <iostream>
#include <vector>

#define ARRAY_SIZE 50

using namespace std;

vector<int> merge_sort(vector<int> arr);
void print_array(vector<int> arr);

// int main() {
//     vector<int> arr(ARRAY_SIZE);
//     srand(100);
//     for (int i = 0; i < arr.size(); i++) {
//         arr[i] = rand() % 20 - 10;
//     }
//     print_array(arr);
//     vector<int> res = merge_sort(arr);
//     cout << "Sorted: " << endl;
//     print_array(res);
// }
// void print_array(vector<int> arr){
//     cout << arr[0];
//     for (int i = 1; i < arr.size(); i++) {
//         cout << ", " << arr[i];
//     }
//     cout << endl;
// }
// vector<int> sliced(vector<int>& arr, int X, int Y) {
//     auto start = arr.begin() + X;
//     auto end = arr.begin() + Y + 1;
//     vector<int> result(Y - X + 1);
//     copy(start, end, result.begin());
//     return result;
// }
vector<int> merge_sort(vector<int> arr) {
    if (arr.size() <= 1) return arr;
    //divide
    int mid = arr.size() / 2;
    vector<int> first = merge_sort(sliced(arr, 0, mid - 1));
    vector<int> second = merge_sort(sliced(arr, mid, arr.size() - 1));
    vector<int> result (arr.size());
    //merge
    int l = 0, r = 0;
    for (int i = 0; i < arr.size(); i++) {
        if ((r == second.size()) || (l < first.size() && first[l] <= second[r])){
            result[i] = first[l++]; 
        }else {
            result[i] = second[r++];
        }
    }
    return result;
}