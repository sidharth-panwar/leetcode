#include<iostream>
#include<vector>

using namespace std;

//Leetcode url: https://leetcode.com/problems/single-number/
//Time Complexity: O(n)
//Space Complexity: O(1)

class Solution {
public:
    int singleNumber(vector<int>& nums) {

        int result=0;
        for(int a:nums) {

            result ^= a;
        }
        return result;
    }
};

int main() {

    vector<int> v = {1, 1, 2, 2, 3};
    Solution s;

    cout<<s.singleNumber(v);
}