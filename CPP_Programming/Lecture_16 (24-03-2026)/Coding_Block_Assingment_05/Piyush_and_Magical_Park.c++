#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M, K, S;
    cin >> N >> M >> K >> S;

    vector<vector<char>> grid(N, vector<char>(M));

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> grid[i][j];
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {

            if (grid[i][j] == '#') {
                break; // jump to next row
            }

            // Apply cell effect
            if (grid[i][j] == '.') {
                S -= 2;
            } else if (grid[i][j] == '*') {
                S += 5;
            }

            // Step cost (only if not last column)
            if (j != M - 1) {
                S -= 1;
            }

            // Check condition
            if (S <= K) {
                cout << "No";
                return 0;
            }
        }
    }

    if (S >= K) {
        cout << "Yes\n" << S;
    } else {
        cout << "No";
    }

    return 0;
}