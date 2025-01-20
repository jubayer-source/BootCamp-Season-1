#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long N;
    cin >> N;

    string Ninteger[N];

    for( int i = 0; i < N; i+=2)
    {
        cin >> Ninteger[i];

    }

    cout << Ninteger[N] <<endl;


    return 0;
}
