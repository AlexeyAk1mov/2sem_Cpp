#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int k;
    float sum = 0, a;
    cin >> k;
    for (int i = 0; i < k; i++) {
        cin >> a;
        sum += pow(a, 2);
    }
    sum = pow(sum, 0.5);
    printf("%.4lf", sum);
    return 0;
}
