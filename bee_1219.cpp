#include<bits/stdc++.h> // ready to submit
using namespace std;
int main()
{
    double a, b, c;
    while (cin >> a >> b >> c)
    {
        double s, T_area, R, r, outer_circle, inner_circle, redu_triangle, redu_outcircle;
        s = (a+b+c)/2.00;
        T_area = sqrt(s * (s - a) * (s - b) * (s - c));
        R = (a * b * c) / (4.00 * T_area);
        r = T_area / s;
        outer_circle = M_PI * R * R;
        inner_circle = M_PI * r * r;
        redu_outcircle = outer_circle - T_area;
        redu_triangle = T_area - inner_circle;
        cout << fixed << showpoint << setprecision(4);
        cout << redu_outcircle << " " << redu_triangle << " " << inner_circle << endl;
    }
    return 0;
}
