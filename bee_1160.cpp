#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tcase; cin >> tcase;
    while (tcase--)
    {
        int PA, PB;
        double GA, GB;
        cin >> PA >> PB >> GA >> GB;
        int cnt = 0;
        while (PA <= PB)
        {
            PA = PA + PA*(GA/100.00);
            PB = PB + PB*(GB/100.00);
            cnt++;
            if(cnt > 100) break;
        }
        if(cnt > 100) cout << "Mais de 1 seculo." << endl;
        else cout << cnt << " anos." << endl;
    }
    return 0;
}