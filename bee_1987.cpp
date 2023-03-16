#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s, str;
    int i, j, sum = 0;
    while(cin>>s>>str){
        sum = 0;
        for(i=0; str[i] != '\0'; i++){
            if(str[i] >= '0' && str[i] <= '9') sum = sum + (str[i] - 48);
        }
        if(sum %3 ==0) cout << sum << " sim" << endl;
        else cout << sum << " nao" << endl;
    }
    return 0;
}