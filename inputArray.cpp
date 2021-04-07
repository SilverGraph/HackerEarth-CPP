#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int findOdd(vector<int> v) {
    int len = v.size(), res{0};
    sort(v.begin(), v.end());

    for(int i=0; i<len; ++i) {
        for(int j=0; j<len; ++j) {
            if(i != j && v.at(i) == v.at(j)) {
                ++res;
            }
        }
        ++res;
        if(res%2 != 0) {
            res = v.at(i); break;
        }
        else {
            res = 0;
        }
    }
    return res;
}

int main() {
    int n{0};
    // vector<int> v{0, 0, 1, 0, 2, 0, 3, 4, 1, 2, 3, 4, 1};
    // vector<int> v{2,2,2,2,6,6,8,0,8,0,9,9,9};

    vector<int> v;
    cin >> n;

    do {
        int num{0};
        cin >> num;
        v.push_back(num);
        --n;
    } while (n > 0);
    
    // for(auto num: v) {
    //     cout << num << " ";
    // }

    cout << "\n" << findOdd(v);
    
    return 0;
}