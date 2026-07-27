#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        long long w, h, n;
        cin >> w >> h >> n;
 
        long long sheets = 1;
 
        while (w % 2 == 0) {
            sheets *= 2;
            w /= 2;
        }
 
        while (h % 2 == 0) {
            sheets *= 2;
            h /= 2;
        }
 
        cout << (sheets >= n ? "YES" : "NO") << "
";
    }
 
    return 0;
}