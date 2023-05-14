#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while (cin >> n)
    {
        if(n==0) break;
        int peak = 0;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x; cin >> x;
            v.push_back(x);
        }
        if(v.size() == 2 && v[0] != v[1]) cout << 2 << endl;
        else{
            for (int i = 1; i < n-1; i++)
            {
                if(v[i] > v[i-1] && v[i] > v[i+1]) peak++;
                else if(v[i] < v[i-1] && v[i] < v[i+1]) peak++;
                else continue;
            }
            if((v[n-1] > v[0] && v[n-1] > v[n-2]) || (v[n-1] < v[0] && v[n-1] < v[n-2])) peak++;
            if((v[0] > v[1] && v[0] > v[n-1]) || (v[0] < v[1] && v[0] < v[n-1])) peak++;
            cout << peak << endl;
        }
    }
    return 0;
}