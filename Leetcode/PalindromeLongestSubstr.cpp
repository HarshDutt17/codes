class Solution {
public:
    string longestPalindrome(string s) {
        if(s.length() <= 0) return "";
        if(s.length()==1) return s;
        int start=0, end=0;
        int maxlen=0,l1,l2;
        for(int i=0; i< s.length() ; i++){
            l1=longestpalindrome(s, i, i);
            l2=longestpalindrome(s, i,i+1);
            maxlen = max(l1, l2);
            if(end-start+1 < maxlen){
                start = i - (maxlen+1)/2 + 1;
                end = i + (maxlen)/2    ;
            }
        }
        // cout<< start << end <<endl ;
        // cout<< s <<endl;
        // cout<< s.substr(start,end);
        return s.substr(start,end-start+1);
    }
    
    int longestpalindrome(string s,int left,int right){
        while(left<=right && left>=0 && right<=s.length() && s[left]==s[right]){
            left--;
            right++;
        }
        return right-left-1;
    }
    
};