#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        if (n == 1) {
            cout << 1 << "
";
            continue;
        }
 
        vector<int> a(n);
        iota(a.begin(), a.end(), 1);
 
        for (int i = 0; i + 1 < n; i += 2)
            swap(a[i], a[i + 1]);
 
        if (n % 2 == 1)
            swap(a[n - 1], a[n - 2]);
 
        for (int x : a)
            cout << x << " ";
        cout << "
";
    }
 
    return 0;
}