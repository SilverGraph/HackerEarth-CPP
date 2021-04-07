#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

bool solve(vector<int>& nums, int k) {
    bool is_sum = false;
    
    sort(nums.begin(), nums.end());
    int len = nums.size() - 1;
    int l{0}, r{len};

    while(l<r) {
        if(nums.at(l) + nums.at(r) < k) {
            ++l;
        }
        else if(nums.at(l) + nums.at(r) > k) {
            --r;
        }
        if(nums.at(l) + nums.at(r) == k && l<r) {
            is_sum = true; break;
        }
    }

    return is_sum;
}

int main() {
    vector<int> nums{22, 1};
    int k{44};

    cout << solve(nums, k);
    
    return 0;
}