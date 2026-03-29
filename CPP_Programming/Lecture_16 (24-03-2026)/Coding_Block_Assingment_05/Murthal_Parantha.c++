#include <bits/stdc++.h>
using namespace std;

bool canCook(int P, vector<int> &ranks, int mid) {
    int totalParanthas = 0;

    for (int r : ranks) {
        int time = 0;
        int j = 1;

        while (true) {
            time += j * r;
            if (time > mid) break;

            totalParanthas++;
            j++;

            if (totalParanthas >= P) return true;
        }
    }

    return totalParanthas >= P;
}

int minTimeToCook(int P, vector<int> &ranks) {
    int low = 0;
    int high = 1e7; // safe upper bound
    int ans = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (canCook(P, ranks, mid)) {
            ans = mid;
            high = mid - 1; // try smaller time
        } else {
            low = mid + 1;
        }
    }

    return ans;
}

int main() {
    int P, L;
    cin >> P;
    cin >> L;

    vector<int> ranks(L);
    for (int i = 0; i < L; i++) {
        cin >> ranks[i];
    }

    cout << minTimeToCook(P, ranks) << endl;

    return 0;
}