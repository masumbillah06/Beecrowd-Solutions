#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;    
    double sum = 0.00;
    while (n--)
    {
        sum = sum + 6.00;
        sum = 1.0 / sum;
    }
    double ans = 3.00 + sum;
    printf("%.10lf\n",ans);
    return 0;
}
