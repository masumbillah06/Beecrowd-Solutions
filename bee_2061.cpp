#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
int main()
{
    int tab, action, i, close_count = 0, ad_count = 0;
    vector<string> vs;
    string in;
    scanf("%d %d ",&tab,&action);
    for(i=0; i<action; i++){
        cin >> in;
        vs.push_back(in);
        if(vs[i] == "fechou") close_count++;
        else if(vs[i] == "clicou") ad_count++;
    }
    int remain = (tab - close_count) + (close_count*2) - ad_count;
    cout << remain << endl;
    return 0;
}