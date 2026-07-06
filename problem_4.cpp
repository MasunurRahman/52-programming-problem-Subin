#include <bits/stdc++.h>
using namespace std;
int main() {
    int i, j, T, N;
    cin >> T;
    for(i=1; i<=T; i++)
    {
        cin >> N;
        cout << "Case " << i << ":";
        for(j=1; j<=N; j++)
        {
         if(N%j == 0)
            cout << " " << j ; 
        }
        cout << "\n";
    }
    return 0;
}
