#include <bits/stdc++.h>
using namespace std;

int main() {

    int N;
    cin >> N;

    int count = 0;


    while ((N & 1) == 0) {
        count++;
        N >>= 1;
    }


    cout << count << endl;

    return 0;
}
