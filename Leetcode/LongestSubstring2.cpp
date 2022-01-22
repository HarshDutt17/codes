#include<bits/stdc++.h>
using namespace std;

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map <char,int> lastloc;
        int maxlen=0, start=-1;
        for(int i=0; i< s.size() ; i++){
            if(lastloc.find(s[i]) != lastloc.end()){
                start= max(lastloc[s[i]],start);
                // cout<<"iwasexecuted  ";
            }
            lastloc[s[i]] = i;
            maxlen = max(maxlen, i-start);
            // cout<<i<<","<< start<<","<<maxlen<<"  ";
            
        }
        return maxlen;
        }
};