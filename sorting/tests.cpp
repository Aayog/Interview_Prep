#include "utils.cpp"
#include "quick_sort.cpp"
#include "merge_sort.cpp"
#include "bubble_sort.cpp"
// #include "selection_sort.cpp"
#include <gtest/gtest.h>

#define SIZE 10
TEST(MergeSortTest, RandomArray) {
    vector<int> new_vec;
    for(int i = 0; i < SIZE; i++){
        new_vec.push_back(rand() % 100);
    }
    vector<int> sec_vec(new_vec);
    std::sort(sec_vec.begin(), sec_vec.end());
    new_vec = merge_sort(new_vec);
    ASSERT_EQ(sec_vec, new_vec);
}

TEST(BubbleSortTest, RandomArray) {
    vector<int> new_vec;
    for(int i = 0; i < SIZE; i++){
        new_vec.push_back(rand() % 100);
    }
    vector<int> sec_vec(new_vec);
    std::sort(sec_vec.begin(), sec_vec.end());
    new_vec = bubble_sort(new_vec);
    ASSERT_EQ(sec_vec, new_vec);
}


TEST(QuickSortTest, RandomArray) {
    vector<int> new_vec;
    for(int i = 0; i < SIZE; i++){
        new_vec.push_back(rand() % 100);
    }
    vector<int> sec_vec(new_vec);
    std::sort(sec_vec.begin(), sec_vec.end());
    print_array(new_vec);
    quick_sort(new_vec);
    ASSERT_EQ(sec_vec, new_vec);
}


int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}