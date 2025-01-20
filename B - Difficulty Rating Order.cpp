#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while(T--)
    {
        int N;
        cin >> N;

        bool flag = true;

        vector<int> number(N);
        for(int i = 0; i < N; i++)
        {
            cin >> number[i];
        }

        for(int i = 0; i < N-1; i++)
        {
            if(number[i] > number[i+1])
            {
                flag = false;
                break;
            }
        }

        if(flag)
        {
            cout << "Yes" <<endl;
        }
        else
            cout << "No" <<endl;

    }

    return 0;
}
