#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int main() {
    int T{0};
    cin >> T;
    
    do {
        int A{0}, B{0}, C{0};
        vector<int> v{0, 0, 0};
        cin >> A >> B >> C;
        v.at(0) = A;
        v.at(1) = B;
        v.at(2) = C;
        std::sort(v.begin(), v.end());
        cout << v.at(1) << endl;
        --T;

    } while (T > 0);
    
    
    return 0;
}