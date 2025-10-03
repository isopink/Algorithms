#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, K;
    cin >> N >> K;

    int cnt[2][7] = {0}; // [성별][학년] (성별:0,1 / 학년:1~6)

    for (int i = 0; i < N; i++) {
        int s, y;
        cin >> s >> y; // 성별, 학년
        cnt[s][y]++;
    }

    int rooms = 0;
    for (int s = 0; s < 2; s++) {
        for (int y = 1; y <= 6; y++) {
            if (cnt[s][y] > 0) {
                rooms += (cnt[s][y] + K - 1) / K; // 올림
            }
        }
    }

    cout << rooms << "\n";
    return 0;
}