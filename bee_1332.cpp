#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int num, i, j;
    scanf("%d ",&num);
    while (num--)
    {
        string str;
        cin >> str;
        if(str.length() == 5) cout << 3 << endl;
        else if(str.length() == 3){
            if( (str[0] == 't' && str[2] == 'o') || (str[0] == 't' && str[1] == 'w') || (str[1] == 'w' && str[2] == 'o') ) cout << 2 << endl;
            else cout << 1 << endl;
        }
    }
    
    return 0;
}