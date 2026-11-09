// time complexity O(N) because while loop isn't run for each each i;
// space O(1)
class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int len = nums.size();
        int valid_left = 0;
        int product = 1;
        int ans =0;
        for(int i=0;i<len;i++){
            product*=nums[i];
            while(product>=k && valid_left<=i){
                product/=nums[valid_left];
                valid_left++;
                }
                ans+=i-valid_left+1;
            }
        
        return ans;
    }
};