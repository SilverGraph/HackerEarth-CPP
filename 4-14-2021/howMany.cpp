#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

void digits(int n) {
    int num{0};
    do
    {
        n /= 10;
        ++num;
    } while (n != 0);
    
    if(num <= 3) {
        cout << num << endl;
    }
    else {
        cout << "More than 3 digits" << endl;
    }
    
}

int main() {
    long long int N{0};
    cin >> N;
    digits(N);
    
    return 0;
}