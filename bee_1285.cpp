#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1, n2; while (cin >> n1 >> n2)
    {
        
        int count = 0, range = n2 - n1 + 1;
        while (n1 <= n2)
        {
            int temp = n2;
            int ara[10], l=0;
            bool flag = true;
            while (temp>0)
            {
                ara[l] = temp%10;
                temp = temp / 10;
                l++;
            }
            for(int i=0; i<l; i++){
                for(int j=i+1; j<l; j++){
                    if(ara[i] == ara[j]){
                        flag = false;
                        break;
                    }
                }
            }
            if(flag == true) count++;
            n2--;
        }
        cout << count << endl;
    }
    return 0;
}