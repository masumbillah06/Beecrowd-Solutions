#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int l;
    long long fact;
    string str;
    while(cin >> str){
        if(str[0] == '0') break;
        fact = 1;
        l = str.length();
        while(l>0){
            fact = fact * l--;
        }
        cout << fact << endl;
    }
    return 0;
}