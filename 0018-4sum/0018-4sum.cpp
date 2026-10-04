class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        // Size of the array
        int n = nums.size(); 
        
        // Set to store unique quadruplets
        set<vector<int>> st; 
 
        // Checking all possible quadruplets
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                
                // Set to store elements seen so far in the loop
                set<long long> hashset; 
                for (int k = j + 1; k < n; k++) {
                    
                    // Calculate the fourth element needed to reach target
                    long long sum = nums[i] + nums[j];
                    sum += nums[k];
                    long long fourth = target - sum;
                    
                    /* Find if fourth element exists in
                    hashset (complements seen so far)*/
                    if (hashset.find(fourth) != hashset.end()) {
                        
                        // Found a quadruplet that sums up to target
                        vector<int> temp = {nums[i], nums[j], nums[k], static_cast<int>(fourth)};
                        // Sort the quadruplet to ensure uniqueness
                        sort(temp.begin(), temp.end()); 
                        st.insert(temp);
                        
                    }
                    
                    // Insert the kth element into hashset for future checks
                    hashset.insert(nums[k]);
                }
            }
        }
        
        // Convert set to vector (unique quadruplets)
        vector<vector<int>> ans(st.begin(), st.end());
        return ans;
    }
};
