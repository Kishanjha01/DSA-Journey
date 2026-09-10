
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;
        unordered_map<int,int> m;  
        int prefix = 0;

        for (int i = 0; i < n; i++) {
            prefix += nums[i];  

            if (prefix == k) count++;

       
            if (m.find(prefix - k) != m.end()) {
                count += m[prefix - k];
            }
            m[prefix]++;
        }
        return count;
    }
};
