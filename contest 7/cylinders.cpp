#include <iostream>
using namespace std;
int main()
{
    int N;
    double d, b, c;
    cin >> N;
    double* a = (double*)malloc(N * sizeof(double));
    for (int i = 0; i < N; ++i)
    {
        cin >> d >> b >> c;
        a[i] = b * d * d * c;
    }
    double max = a[0];
    int count = 0;
    for (int i = 1; i < N; ++i)
    {
        if (a[i] > max)
        {
            max = a[i];
            count = i;
        }
    }
    cout << count;
    free(a);
}