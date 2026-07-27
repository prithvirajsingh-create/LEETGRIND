class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        vector<int> ans(nums1.size());

        for (int i = 0; i < nums1.size(); i++) {

            stack<int> s;   

            for (int j = nums2.size() - 1; j >= 0; j--) {

                if (nums2[j] == nums1[i]) {

                    while (!s.empty() && s.top() <= nums2[j]) {
                        s.pop();
                    }

                    if (s.empty())
                        ans[i] = -1;
                    else
                        ans[i] = s.top();

                    break;      
                }

                s.push(nums2[j]);   
            }
        }

        return ans;
    }
};