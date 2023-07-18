#include<bits/stdc++.h>
using namespace std;
int main()
{
    int elements, ques;
    while (cin >> elements >> ques)
    {
        if(elements == 0 && ques == 0) break;
        int ara[elements], temp[elements];
        int i, j, cnt = 0, freq_cnt=0;
        for(i=0; i<elements; i++){
            cin >> ara[i];
            temp[i] = ara[i];
        }
        for(i=0; i<elements; i++){
            for(j=0; j<elements; j++){
                if(ara[i] == temp[j]){
                    cnt++;
                    temp[j] = -100;
                }
            }
            if(cnt >= ques) freq_cnt++;
            cnt = 0;
        }
        cout << freq_cnt << endl;
    }
    return 0;
}

//improved version
#include<bits/stdc++.h>
using namespace std;

int freqQues(int &n , int &k, unordered_map<int,int> &map){
    int cnt=0;
    for(const auto & it: map){
        if(it.second >= k) cnt++;
    }
    return cnt;
} 
int main()
{
    int n, k;
    while (cin >> n >> k)
    {
        if(n==0 && k==0) break;
        unordered_map<int,int> map;
        for(int i=1; i<=n; i++){
            int x; cin >> x;
            map[x]++;
        }
        cout << freqQues(n, k, map) << endl;
    }
    return 0;
}
