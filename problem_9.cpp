#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int  i, T, N, S;
    cin >> T;
    while(T--)
    {
        cin >> N;
        S = sqrt(N);
        if(S * S == N)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        
    }
    
    return 0;
}
