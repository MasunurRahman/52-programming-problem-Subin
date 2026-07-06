#include <bits/stdc++.h>
using namespace std;
int main() {
    int T, i, L;
    string N;
    scanf("%d",&T);
    for(int i=1; i<=T; i++)
    {
        cin>>N;
        L = N.length();
        if(N[L-1] == '0' || N[L-1] == '2' || N[L-1] == '4' || N[L-1] == '6' || N[L-1] == '8')
            cout<<"even\n";
        else
            cout<<"odd\n";
        
    }
    return 0;
}
