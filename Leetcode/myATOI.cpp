#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        int curdigit;
        bool negative=false;
        bool sett=false;
        bool digitencountered=false;
        set<int> integers= {0,1,2,3,4,5,6,7,8,9};
        queue<int> digits;
        for(int i=0;i< s.length() ; i++){
            curdigit= s[i] - '0';
            if(integers.find(curdigit)!=integers.cend()){
                digits.push(curdigit);
                digitencountered=true;
                continue;
            }else if(digitencountered || sett){break;}
            if(s[i]=='-'){
                    negative=true;
                    sett=true;
            }else if(s[i]=='+'){
                sett=true;
                continue;
            }else if(s[i]==' '){
                continue;
            }else{break;}
        }
        if(digits.empty()) return 0;
        int ans=0;
        while(!digits.empty()){
            if( ans!=0 && (INT_MAX/ans) < 10){
                if(negative){
                    ans=INT_MIN;
                }else{
                    ans=INT_MAX;
                }
                break;
            }  
            ans*=10;
            if ((INT_MAX - ans) < digits.front()){
                if(negative){
                    ans=INT_MIN;
                }else{
                    ans=INT_MAX;
                }
                break;
            }
            ans+= digits.front();
            digits.pop();
        }
        if(negative){
            return -abs(ans);
        }
        return ans;
    }   
};