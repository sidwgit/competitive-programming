#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int k;
        cin >> k;

        bool ok = false;
        int cnt2 = 0;

        for (int i = 0; i < k; i++) {
            int x;
            cin >> x;

            if (x >= 3)
                ok = true;
            else if (x == 2)
                cnt2++;
        }

        if (ok || cnt2 >= 2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}

