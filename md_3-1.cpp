#include <bits/stdc++.h>
#include<vector>
using namespace std;

#define LL long long


class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
		int N = nums.size();
		if(!N){
			return (ceil)(log(n + 1) / log(2));
		}
		// count
		LL ans = 1;
		int cnt = 0;
		for(int i = 0; i <= N - 1;){
			if((LL)nums[i] <= ans){
				ans += (LL)nums[i++];
			}
			else{
				ans += ans;
				cnt++;
			}
			if(ans > (LL)n){
				break;
			}
		}
		while(ans <= (LL)n){
			ans += ans;
			cnt++;
		}
        return cnt;
    }
};

int main(int argc, char** argv){
	Solution sol;
   
	std::vector<int> nums = {1, 2, 31, 38};
	int n = 2147483647;
	cout << "ans: " << sol.minPatches(nums, n) << endl;
	return 0;
}o # Applets
