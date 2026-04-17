#include <bits/stdc++.h>
using namespace std;

long long countSubarrays(vector<int> &nums, long long k) {
    if (k <= 1) return 0; // Important edge case

    long long prod = 1;
    int left = 0;
    long long count = 0;

    for (int right = 0; right < nums.size(); right++) {
        prod *= nums[right];

        while (prod >= k) {
            prod /= nums[left];
            left++;
        }

        count += (right - left + 1);
    }

    return count;
}

int main() {
    int n;
    long long k;
    cin >> n >> k;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << countSubarrays(nums, k) << endl;
    return 0;
}