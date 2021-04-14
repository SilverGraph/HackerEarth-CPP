#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

bool checkPrime(int n) {
    if (n == 1) {
        return false;
    }
    for (int i = 2; i < n; i++) {
        if(n%i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int T{0};
    cin >> T;

    do {
        long long int n{0};
        cin >> n;
        checkPrime(n) ? cout << "yes\n" : cout << "no\n";
        --T;
    } while (T > 0);
    
    
    return 0;
}