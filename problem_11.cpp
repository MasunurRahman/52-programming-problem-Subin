#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int N, T, i, P;
    cin >> T;
    while(T--)
    {
        P = 1;
        cin >> N;
        for(i=2; i<=N; i++)
        {
            P = P * i;
        }
        cout << P << "\n";
    }
    return 0;
}
