#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0 ; i <n  ; i++) cin >> a[i];
    sort(a.begin(), a.end());
    int max_valid = 0, left = 0;
    for (int right = 0; right < n; ++right) {
        while (a[right] > 2 * a[left]) ++left;
        max_valid = max(max_valid, right - left + 1);
    }
    cout << n - max_valid << endl;
    return 0;
}
