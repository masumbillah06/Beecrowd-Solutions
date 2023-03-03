#include<iostream> 
#include<cstring>
#include<iomanip>
using namespace std;
int main()
{
    string s1, s2;
    getline(cin,s1);
    getline(cin,s2);
    int i , j, l1, l2;
    int flag = 0;
    l1 = s1.length();
    l2 = s2.length();

    if(l1>l2){
        int temp = l2;
        l2 = l1;
        l1 = temp;
    }
    for(i=0; i<l2; i++){
        if(s1[i] == s2[i]) {
            continue;
            /*flag ++;
            if(flag == l2){
                cout << s1 << endl;
                cout << s2 << endl;
                break;
            }*/
        }
        else{
            if(s1[i] < s2[i]) {
                cout << s1 << endl;
                cout << s2 << endl;
                break;
            }
            else{
                cout << s2 << endl;
                cout << s1 << endl;
                break;
            }
        }
    }

    return 0;
}