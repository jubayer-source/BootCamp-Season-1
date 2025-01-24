#include <bits/stdc++.h>
using namespace std;
#define endl \n

int main()
{
    int T;
    cin >> T;

    while(T--)
    {
        int N;
        cin >> N;

        string code[N];
    //  vector<string> code(N);
    //  ?? you can use vector instead of string to do more dynamic.
        int startcode = 0;
        int endcode = 0;

        for(int i = 0; i < N; i++)
        {
            cin >> code[i];
            if(code[i]== "START38")
            {
                startcode++;
            }
            else if(code[i] == "LTIME108")
            {
                endcode++;
            }
        }

        cout << startcode << " " <<endcode <<endl;
    }

    return 0;
}
