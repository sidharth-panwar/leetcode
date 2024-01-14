#include<iostream>
#include<vector>

using namespace std;

//Leetcode url: https://leetcode.com/problems/missing-number/
//Time Complexity: O(n)
//Space Complexity: O(1)
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int size = nums.size();
        int sum = size * (size + 1)/2;
        int arraySum = 0;

        for (int i = 0; i<size; i++) arraySum += nums[i];

        return sum - arraySum;
    }
};

int main() {

    Solution s;
    vector<int> arr = {2, 0, 1};

    cout<<"Missing Number: "<<s.missingNumber(arr);

    return 0;
}