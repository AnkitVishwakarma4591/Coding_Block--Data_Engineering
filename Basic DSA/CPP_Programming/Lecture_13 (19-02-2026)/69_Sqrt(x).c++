# include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {
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


int main(){
    Solution s1;
    int x = 4;

    cout<<s1.mySqrt(x)<<endl;

    return 0;
}