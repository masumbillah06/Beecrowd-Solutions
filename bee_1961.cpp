#include<bits/stdc++.h>
using namespace std;

bool checkHeight(int &h, int &p, vector<int> & vec){
    for(int i=0; i<p-1; i++){
        if(vec[i]+h < vec[i+1]) return false;
    }
    return true;
}

int main()
{
    int jumpHeight, pillars, i , j;
    cin >> jumpHeight >> pillars;
    vector<int> ph;
    int x;
    for(i=0; i<pillars; i++){
        cin >> x;
        ph.push_back(x);
    }
    bool b = checkHeight(jumpHeight, pillars, ph);
    if(b == true) cout << "YOU WIN" << endl;
    if(b == false) cout << "GAME OVER" << endl;
    return 0;
}