#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    while (cin >> num)
    {
        vector<int> v;
        v.push_back(0);
        int rootVal = sqrt(num);
        for(int i=1; i<=rootVal; i++){
            v.push_back(i*i);
        }
        bool b = false;
        for(int i=0; i<v.size(); ++i){
            for(int j=0; j<v.size(); j++){
                if(v[i]+v[j] == num){
                    b = true;
                    break;
                }
            }
        }
        if(b == true) cout << "YES" << endl;
        else cout << "NO" << endl;
        v.clear();
    }
    return 0;
}