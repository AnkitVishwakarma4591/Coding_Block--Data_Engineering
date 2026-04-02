#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int squareRoot(int x) {
        if (x < 2) return x;   // handle 0 and 1

        int left = 1;
        int right = x / 2;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (mid <= x / mid) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return right;  // floor sqrt
    }
};


int main () {
        int A;
        cin >> A;
        Solution s1;
        cout << s1.squareRoot(A);
	return 0;
}