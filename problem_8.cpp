#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b, c, i, T, N;
    cin >> T;
    i = 1;
    while(T--)
    {
        cin >> a >> b >> c;
        if(a > b)
        {
            if(a > c)
            {
                if(b > c)
                {
                    N = a;
                    a = c;
                    c = N;
                }
                else
                {
                    N = a;
                    a = b;
                    b = c;
                    c = N;
                }
            }
            
            else 
            {
                N = b;
                b = a;
                a = N;
            }
        }
        else if(b > c)
        {
            if(a > c)
            {
                N = b;
                b = a;
                a = c;
                c = N;
            }
            else
            {
                N = b;
                b = c;
                c = N;
                
            }
        }
        
        cout << "Case " << i << ": " << a << " " << b << " " << c << "\n";
        i++;
    }
    return 0;
}
