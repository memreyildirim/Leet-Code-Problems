/*There are two sorted arrays nums1 and nums2 of size m and n respectively.

You may assume nums1 and nums2 cannot be both empty.

Example 1:

nums1 = [1, 3]
nums2 = [2]

The median is 2.0
Example 2:

nums1 = [1, 2]
nums2 = [3, 4]

The median is (2 + 3)/2 = 2.5
*/


class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double ans = 0;
        nums1.insert( nums1.end(),nums2.begin(), nums2.end() );
        sort(nums1.begin(),nums1.end());
        int size = nums1.size();
        int sizemed = floor(nums1.size()/2);
        cout<<sizemed;
        if(sizemed == 0 && size ==0){
            ans = 1;
        }
        else if(sizemed == 0 && size ==1){
            ans = nums1[0];
        }
        else if (size%2!=0 ){
            ans = nums1[sizemed];
        }
        else{
            sizemed--; 
            ans = ((double)nums1[sizemed]+(double)nums1[sizemed+1])/2.0 ;
        }
        return ans;
    }
    
   