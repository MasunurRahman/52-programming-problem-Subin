#include <bits/stdc++.h>
using namespace std;
int main() {
    int i;
    i = 1000;
    while(i>=1)
    {
         cout << i << "\t";
         i--;
         if(i%5 == 0)
            cout << "\n"; 
    }
    return 0;
}
