#include<iostream> //thin one 10% error
using namespace std;
int main()
{
    int ara[4];
    int i, j, temp;

    for(i=0; i<4; i++) cin >> ara[i];

    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            if(ara[i] < ara[j]){
                temp = ara[j];
                ara[j] = ara[i];
                ara[i] = temp;
            }
        }
    }
    cout << (ara[0]+ara[3]) - (ara[1]+ara[2]) << endl;
    return 0;
}

#include<iostream> // this one is accepted
#include<cmath>
using namespace std;
int main()
{
    int a, b, c, d, mindif;
    cin >> a >> b >> c >> d;
    mindif = abs((a+b) - (c+d));
    if( abs((b+c) - (a+d) < mindif) ) mindif = abs((b+c) - (a+d));
    else if( abs((b+d) - (a+c) < mindif) ) mindif = abs((b+d) - (a+c));
    cout << mindif << endl;
    return 0;
}
