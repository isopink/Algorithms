#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, x;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    cin >> x;

    vector<char> arr(1000001, 0); // 존재 여부 체크용
    int cnt = 0;

    for (int i = 0; i < n; i++) {
        int need = x - v[i];
        if (0 <= need && need <= 1000000 && arr[need]) {
            cnt++;
        }
        arr[v[i]] = 1; // 마지막에 기록
    }

    cout << cnt << "\n";
}