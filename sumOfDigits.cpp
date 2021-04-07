#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int sumOfDigits(int n) {
    int sum{0};
    while (n > 0)
    {
        sum += n%10;
        n /= 10;
    }
    return sum;
}

int main() {
    int n{0};
    cin >> n;

    cout << sumOfDigits(n);
    
    return 0;
}