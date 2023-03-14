#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int i, x;
    string str;
    while(getline(cin,str)){
        x=1;
        for(i=0; str[i] != '\0'; i++){
            if( (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z') ){
                if( x%2 == 1 && (str[i] >= 'a' && str[i] <= 'z') ){
                    str[i] = str[i] - 32;
                    cout << str[i];
                    x++;
                }
                else if(x%2 == 1 && (str[i] >= 'A' && str[i] <= 'Z')) {
                    cout << str[i];
                    x++;
                }
                else if(x%2==0 &&(str[i] >= 'A' && str[i] <= 'Z')){
                    str[i] = str[i] + 32;
                    cout << str[i];
                    x++;
                }
                else if(x%2==0 &&(str[i] >= 'a' && str[i] <= 'z')){
                    cout << str[i];
                    x++;
                }
            }
            else cout << str[i];
        }
        cout << endl;
    }
    return 0;
}