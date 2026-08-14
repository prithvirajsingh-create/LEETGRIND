class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int marker = -1;
        int n = nums.size();
        for(int i= n-2; i>=0; i--){
            if(nums[i]<nums[i+1]){
                marker=i;
                break;
            }
        }       
        if( marker==-1){
            reverse(nums.begin(), nums.end());
            return;
        }
        for(int i= n-1; i>marker; i--){
            if (nums[i]>nums[marker]){
                swap(nums[i], nums[marker]);
                break;
            }
        }

        if( marker==-1){
            reverse(nums.begin(), nums.end());
            return;
        }

        reverse(nums.begin() + marker + 1, nums.end());
    
    }


};