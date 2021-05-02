#include <iostream>
using namespace std;

int main()
{
    int N;
    int M;
    cin >> N >> M;
    for (int i = 0; i < M; ++i) {
        cout << "*";
        if (i == M - 1) {
            cout << endl;
        }

    }


    for (int j = 1; j < N - 1; ++j) {
        cout << "*";
        for (int k = 1; k < M - 1; ++k) {
            cout << " ";
        }
        cout << "*" << endl;

    }
    for (int i = 0; i < M; ++i) {
        cout << "*";
        if (i == M - 1) {
            cout << endl;
        }
    }

    return 0;
}