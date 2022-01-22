class Solution {
public:
    int reverse(int x) {
        if(x==0 or x<=INT_MIN or x>= INT_MAX) return 0;
        int ans=0;
        bool negative=false;
        if(x<0){
            negative=true;
        }
        x=abs(x);
        int temp;
        int n=floor((log10(x))) +1;
        for(int i=0; i< n ;i++){
            // cout<< i; 
            if( ans!=0 && (INT_MAX/ans) < 10) return 0;
            ans*=10;
            temp = x%10;
            x/=10;
            if ((INT_MAX - ans) < temp) return 0;
            ans+=temp;
        }
        if(negative) {ans= -ans;}
        return ans;
    }
};