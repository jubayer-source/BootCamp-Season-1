#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;

    int presses = 0;
    int i = 0;


    while(i < S.length()){

        if(i+1 < S.length() && S[i] == '0' && S[i+1] == '0'){
            presses++;
            i +=2;
        }
        else{
            presses++;
            i++;
        }


    }

    cout << presses <<endl;
    return 0;
}
