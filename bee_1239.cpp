#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int i, j;
    string str;
    while(getline(cin,str)){
        int astrix=1;
        int underscore = 1;
        for(i=0; str[i] != '\0'; i++){
            if(str[i]=='*'){
                if(astrix % 2 == 1){
                    cout << "<b>";
                    astrix++;
                }
                else{
                    cout << "</b>";
                    astrix++;
                }
            }
            else if(str[i]=='_'){
                if(underscore % 2 == 1){
                    cout << "<i>";
                    underscore++;
                }
                else{
                    cout << "</i>";
                    underscore++;
                }
            }
            else cout << str[i];
        }
        cout << endl;
    }
    return 0;
}