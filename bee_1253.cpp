#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int n;
    scanf("%d\n",&n);
    while (n--)
    {
        int num;
        string str;
        cin >> str;
        scanf("%d",&num);
        for(int i=0; str[i] != '\0'; i++){
            if((char) (str[i] - num) >= 'A' && (char) (str[i] - num) <='Z')
                cout << (char) (str[i] - num);
            else
                cout << (char) (str[i] - num + 26);
        }
        cout << endl;
    }
    
    return 0;
}
