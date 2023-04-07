#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d;
    while (cin >> a >> b >> c >> d)
    {
        if(a==0 && b==0 && c==0 && d==0) break;

        if(a==c && b==d) cout << 0 << endl;
        else if(a==b && b==c && c==d && d==a) cout << 0 << endl;
        else if(a==c || b==d)cout << 1 << endl;
        //else if( ((a+b)/2) == ((c+d)/2) ) cout << 1 << endl;
        else if( abs(a-c) == abs(b-d) ) cout << 1 << endl;
        else cout << 2 << endl;
    }
    
    return 0;
}