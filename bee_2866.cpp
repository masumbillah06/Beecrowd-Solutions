
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int i, j, n;
    string str;
    scanf("%d ",&n);
    while (n--)
    {
        cin >> str;
        for(i=str.length()-1; i>=0; i--){
            if(str[i] >= 'a' && str[i] <= 'z') cout << str[i];
        }
        cout << endl;
    }
    return 0;
}