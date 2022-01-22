class Solution {
public:
    string convert(string s, int numRows) {
        string ans="";
        if(numRows==1 or s.length()==1) return s;
        int n = min( numRows, int(s.length()));
        for(int i=0; i< n ; i++){
            ans += s[i];
            int j=i;
            while(j< s.length()){
                j+= 2*n - 2 -2*i;
                if(i!=0 && i!= (n -1) && j<s.length()) {
                    ans= ans + s[j];
                }
                j+= 2*i;
                if(j<s.length()){
                    ans+= s[j];
                }
            }
        }
        return ans;
    }
};