#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<iomanip>

using namespace std;

int main() {
    int T{0}, N{0}, M{0};
    cin >> T;

    do {
        cin >> N >> M;
        double i{0.0}, fraction{0.0};

        fraction = (static_cast<double>(M)/N) - (M/N);

        auto a = (fraction != 0.0) ? "No\n" : "Yes\n";
        cout << a;

        --T;
    } while (T > 0);

    // int M{14}, N{5};
    // double pi{0.0};
    // cout << fixed << setprecision(2);

    // pi = static_cast<double>(M)/N;
    // cout << M << " " << N << " " << pi << endl;

    return 0;
}
