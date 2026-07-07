#include <bits/stdc++.h>
using namespace std;

int main() {
    int T,  C ;
    string input, X;
    cin >> T;
    cin.ignore();
    while(T--)
    {
        getline(cin,input);
        stringstream ss(input);
        C = 0;
        while(ss>>X)
        {
            C++;
        }
            cout << C << endl;
    }
    
    return 0;
}
