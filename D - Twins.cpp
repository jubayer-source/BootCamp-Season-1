#include <bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin >> n;


    int total_sum = 0;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
        total_sum += a[i];
    }


    sort(a.rbegin(), a.rend());


    int count = 0;
    int pick_sum = 0;
    for( int i = 0; i< n; i++){
        pick_sum += a[i];
        count++;
        if(pick_sum > (total_sum / 2)){
            break;
        }
    }
    cout << count <<endl;

    return 0;
}
