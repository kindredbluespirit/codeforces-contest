#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int t; cin >> t;
    for (auto i = 0; i < t; i++) {

        int n; cin >> n;
        vector<int> v;
        for (auto j = 0; j < n; j++) {
            string s; cin >> s;
            auto p = s.find('#') + 1;
            v.push_back(p);
        }
        for (auto rit = v.rbegin(); rit != v.rend(); rit++) 
            cout << *rit << " ";
        cout << '\n';
    }
}
