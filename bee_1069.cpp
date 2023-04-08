#include<bits/stdc++.h> 
using namespace std;
int main()
{
    int tcase;
    scanf("%d ",&tcase);
    while(tcase--){
        string str;
        cin >> str;
        int left_count=0, right_count=0, i;
        for(i=0; str[i]!='\0';i++){
            if(str[i] == '<') left_count++;
            if(str[i] == '>' && left_count > 0) {
                right_count++;
                left_count--;
            }
        }
        cout << right_count << endl;
    }
    return 0;
}