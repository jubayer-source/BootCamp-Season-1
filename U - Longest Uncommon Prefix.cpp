#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    string S;
    cin >> N >> S;

    for (int i = 1; i < N; ++i) {
        int l = 0;

        while (l + i < N && S[l] != S[l + i]) {
            ++l;
        }

        cout << l << endl;
    }

    return 0;
}
