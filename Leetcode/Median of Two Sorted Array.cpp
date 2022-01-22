//  1 3
//  2 
//  lo 0 hi 2 mid 3 mid2 2
//  min1 8 max1 9 min2 4 max2 11

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> A, B;
        if( nums1.size() > nums2.size() ){
            A = nums2;
            B = nums1;
        }else{
            A = nums1;
            B = nums2;
        }
        cout<< A[1];
        int n = A.size();
        int m = B.size();
        int lo= 0;
        int hi= n;
        double median;
        while(lo<=hi){
            int mid = (lo + hi)/2 ;
            int mid2 = (n+m+1)/2 - mid;
            int min1 = (mid<=0) ? INT_MIN : A[mid - 1];
            int min2 = (mid2<=0) ? INT_MIN : B[mid2 - 1];
            int max1 = (mid >= n) ? INT_MAX : A[mid];
            int max2 = (mid >= m) ? INT_MAX : B[mid2];
            if( min1<=max2 && min2 <=max1){
                if((n+m)%2 == 0){
                    median =max(min1,min2) + min(max1,max2);
                    median/=2;
                }else{
                    median = max(min1,min2);
                }
                break;
            }else if( min1> max2){
                hi= mid -1;
            }else{
                lo = mid +1;
            }
            
        }
        return median;
    }
};