#include <bits/stdc++.h>
using namespace std;

int main() {
    int i, T, N, F, L;
    cin >> T;
    for(i=1; i<=T; i++)
    {
        cin >> N;
        F = N/10000;
        L = N%10;
        cout << "Sum = " << F+L << '\n';
    }
    return 0;
}
