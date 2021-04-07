#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int main() {
    int n{0}, X{0};
    vector<string> vec;
    cin >> n >> X;

    for(int i=0; i<n; ++i) {
        int num{0};
        string s;
        cin >> num;
        if(num >= X) {
            vec.push_back("YES");
        }
        else {
            vec.push_back("NO");
        }
    }

    for(auto num: vec) {
        cout << num << endl;
    }
    
    return 0;
}