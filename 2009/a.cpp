#include <bits/stdc++.h>
using namespace std;

// #define C_UNSYNC ios::sync_with_stdio(0)
// #define IO_UNSYNC cin.tie(0), cout.tie(0)

// fn solve() -> void;
// fn main() -> int {
//     C_UNSYNC;
//     IO_UNSYNC;
//     int T; cin >> T;
//     LOOPI(tc, 1, T, 1) {
//         // cout << "Case #" << tc << ": ";
//         solve();
//     }
// }

// fn solve() -> void {
//     end:;
//     cout << flush;
// }

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int t; cin >> t;

    int a, b;
    for (auto i = 0; i < t; i++) {
        cin >> a >> b;
        cout << b - a << '\n';
    }
}
