#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while (cin >> n)
    {
        if(n==0) break;
        cin.ignore();
        string names[n], name_of_planet;
        int year[n], travel_time[n];
        int first_massage[n];
        for(int i=0; i<n; i++){
            cin >> names[i];
            cin >> year[i] >> travel_time[i];
            first_massage[i] = year[i] - travel_time[i];
            cin.ignore();
        }
        int min = first_massage[0];
        for(int i=1; i<n; i++){
            if(min > first_massage[i]) min = first_massage[i];
        }
        for(int i=0; i<n; i++){
            if(first_massage[i] == min){
                name_of_planet = names[i];
            }
        }
        cout << name_of_planet << endl;
    }
    return 0;
}