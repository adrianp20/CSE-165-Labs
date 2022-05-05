/*
Write a program that keeps reading in integer values. If an input value is positive, store it in a vector. If the input
value is negative, you will remove all existing values in your vector with the same absolute value. When 0 is read
output the number of entries that remained in the vector and the sum of all entries. Then stop. In the following
example, a sequence of numbers beginning at 1 and ending at 6 are input, followed by a -5, and finally a 0 to stop
reading. The result is the sequence of numbers with the number 5 removed because of the -5 from the input, then
the sum of the remaining values, 16.
I n p u t :
1
2
3
4
5
6
−5
0
Output :
1 2 3 4 6 16
*/

#include <iostream>
#include <vector>

using namespace std;

void add_positive_nums(vector<int> &nums, int num) {
    if (num > 0) { // if num is positive, add to vector
        nums.push_back(num); // add num to vector
    }
}

void remove_negative_nums(vector<int> &nums, int num) {
    if (num < 0) { // if num is negative, remove from vector
        for (int i = 0; i < nums.size(); i++) { // iterate through vector
            if (nums[i] == -num) { // if num is found in vector
                nums.erase(nums.begin() + i); // remove num from vector
            }
        }
    }
}

void print_nums(vector<int> &nums) {
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
}

int main() {
    vector<int> nums;
    int num;
    cout<<"Enter numbers: ";
    while (cin >> num) {
        if (num == 0) {
            int sum = 0;
            for (int i = 0; i < nums.size(); i++) {
                sum += nums[i]; // add all numbers in vector to sum
            }
            print_nums(nums); // print vector (positive user input)
            cout << sum << endl; // print sum of vector
            break;
        }
        add_positive_nums(nums, num); // add positive nums to vector
        remove_negative_nums(nums, num); // remove negative nums from vector
    }
    return 0;
}
