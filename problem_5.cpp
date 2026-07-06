#include <bits/stdc++.h>
using namespace std;
int main() {
    int i, j, k, T, N;
    cin >> T;
    for(i=1; i<=T; i++)
    {
        cin >> N;
        for(j=1; j<=N; j++)
        {
         for(k=1; k<=N; k++)
         {
            cout << "*" ; 
         }
         cout << "\n";
        }
        if(i!=T) cout << "\n";
    }
    return 0;
}
