#include <iostream>
#include <vector>
#include <algorithm>

#define ARRAY_SIZE 100000

using namespace std;

vector<int> bubble_sort(vector<int> arr);
void print_array(vector<int> arr);

int main() {
    vector<int> arr(ARRAY_SIZE);
    srand(100);
    for (int i = 0; i < arr.size(); i++) {
        arr[i] = rand() % 20 - 10;
    }
    // print_array(arr);
    vector<int> res = bubble_sort(arr);
    cout << "InEfficient " << endl;
    // print_array(res);
}
void print_array(vector<int> arr){
    cout << arr[0];
    for (int i = 1; i < arr.size(); i++) {
        cout << ", " << arr[i];
    }
    cout << endl;
}

// void swap(vector<int>& arr, int i, int j) {
//     int temp = arr[i];
//     arr[i] = arr[j];
//     arr[j] = temp;
// }
vector<int> bubble_sort(vector<int> arr) {
    if (arr.size() <= 1) return arr;
    for(int i = 0; i < arr.size(); i++){
        // int flag = 0;
        for(int j = 0; j < arr.size() - 1; j++){
            if(arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
                // flag++;
            }
        }
        // if (flag == 0) break;
    }
    return arr;
}