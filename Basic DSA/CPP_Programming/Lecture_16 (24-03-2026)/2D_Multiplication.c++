#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> Multiplication(vector<vector<int>> &mat1, vector<vector<int>> &mat2) {
        int m1 = mat1.size();
        int n1 = mat1[0].size();

        int m2 = mat2.size();
        int n2 = mat2[0].size();

        // Check if multiplication is possible
        if (n1 != m2) {
            return {}; 
        }

        // Correct result size: m1 x n2
        vector<vector<int>> result(m1, vector<int>(n2, 0));

        // Matrix multiplication
        for (int i = 0; i < m1; i++) {
            for (int j = 0; j < n2; j++) {
                for (int k = 0; k < n1; k++) {
                    result[i][j] += mat1[i][k] * mat2[k][j];
                }
            }
        }

        return result;
    }
};

int main() {
    Solution s1;

    vector<vector<int>> mat1 = {{2,4,6},{8,10,12},{14,16,18}};
    vector<vector<int>> mat2 = {{1,3,5},{7,9,11},{13,15,17}};

    vector<vector<int>> ans = s1.Multiplication(mat1, mat2);

    for (auto row : ans) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}