#include<iostream>
#include<cstring>
using namespace std;
int main()
{
     int n;
     scanf("%d\n",&n);
     while (n>0)
     {
        string s1, s2;
        cin >> s1 >> s2;
        int l1 = s1.length();
        int l2 = s2.length();

        int len;

        if(l1<l2) len = l2;
        else len = l1;
        for(int i=0; i<len; i++){
            if(i<l1) cout << s1[i];
            if(i<l2) cout << s2[i];
        
        }
        cout << endl; 
        n--;
     }
     
    return 0;
}