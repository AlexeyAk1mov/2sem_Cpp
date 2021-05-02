#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double H = 0;
    double V_x;
    double g = 9.81;
    cin >> H;
    cin >> V_x;
    double T = 2 * H / g; //t^2
    double t = sqrt(T);
    double S = V_x * t;
    printf("%.4lf", S);

    return 0;
}