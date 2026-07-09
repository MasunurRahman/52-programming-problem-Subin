#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        double A, B, PB, RL, BL, CRR, RRR;   
        cin >> A >> B >> BL;
        PB = 300.0 - BL;
        CRR = (B*6.0)/PB;
        RRR = 0.00; 
        if(B<=A) //problem e 1<=r1<=r2 deya thakleo eita dite hoyeche
        {
        RL = (A+1.0) - B;
        RRR = (RL*6.0)/BL;
        }
        cout << fixed << setprecision(2) << CRR << " " << RRR << "\n";
    }
    return 0;
}
