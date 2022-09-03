#include <iostream>
#include <vector>

using namespace std;
void print_array(vector<int> arr){
    cout << arr[0];
    for (int i = 1; i < arr.size(); i++) {
        cout << ", " << arr[i];
    }
    cout << endl;
}
vector<int> sliced(vector<int>& arr, int X, int Y) {
    auto start = arr.begin() + X;
    auto end = arr.begin() + Y + 1;
    vector<int> result(Y - X + 1);
    copy(start, end, result.begin());
    return result;
}