#include<iostream>
#include<vector>

using namespace std;

//Leetcode url: https://leetcode.com/problems/pascals-triangle/
//Time Complexity: O(n^2)
//Space Complexity: O(n^2)
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>> pTriangle;
        vector<int> prevRow;
        for (int i=0; i<numRows; i++) {
            
            vector<int> row;
            for (int j=0; j<=i; j++) {
    
                if (j == 0 || j == i) row.insert(row.begin()+j, 1);
                else {
                    row.insert(row.begin()+j, prevRow[j-1] + prevRow[j]);
                }
            }
            prevRow = row;
            pTriangle.insert(pTriangle.begin()+i, row);
        }   

        return pTriangle;
    }
};

int main() {

    Solution s;
    vector<vector<int>> pTriangle = s.generate(5);

    for (vector<int> x:pTriangle) {
        cout<<"[";
        for(int y:x) cout<<y;
        cout<<"]";
    }

    return 0;
}