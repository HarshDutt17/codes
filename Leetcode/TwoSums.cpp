#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int,int> pair;
        for(int i=0; i<= nums.size() ; i++){
            if(pair.find(target - nums[i]) != pair.end()){
                ans.push_back(pair[target-nums[i]] );
                ans.push_back(i);
                return ans;
            }
            pair[nums[i]]=i;
        }
        return ans;
    }
};