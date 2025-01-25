#include <bits/stdc++.h>

using namespace std;

int main() {
    string players;
    cin >> players;

    int consecutiveCount = 1;
    bool dangerous = false;

    for (size_t i = 1; i < players.length(); i++) {
        if (players[i] == players[i - 1]) {
            consecutiveCount++;
            if (consecutiveCount >= 7) {
                dangerous = true;
                break;
            }
        } else {
            consecutiveCount = 1; // Reset count
        }
    }

    if (dangerous) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
