#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while (cin >> n)
    {
        set<string> str;
        for(int i=0; i<n; i++){
            string s;
            cin >> s;
            str.insert(s);
        }
        for(auto it : str){
            cout << it << endl;
        }
    }
    
    return 0;
}
