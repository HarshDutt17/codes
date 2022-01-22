#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> used;
        queue<char> ord;
        queue<char> ans ;
        for(int i=0; i< s.size() ; i++){
            if( used.find(s[i])!= used.cend() ){
                used.erase(s[i]);
                while( ord.front() != s[i] ){
                    used.erase(ord.front());
                    ord.pop();
                }
                ord.pop();
            }
            used.insert(s[i]);
            ord.push(s[i]);
            if(ord.size() > ans.size() ){
                ans = ord ;
            }
        }
        return ans.size();
    }
};