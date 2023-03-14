#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int i , j;
    string str;
    while(getline(cin,str)){
        for(i=0; str[i] != '\0'; i++){
            if((str[i+1] == ',' || str[i+1] == '.') && (str[i] == ' ')) continue;
            else cout << str[i];
        }
        cout << endl;
    }    
    return 0;
}