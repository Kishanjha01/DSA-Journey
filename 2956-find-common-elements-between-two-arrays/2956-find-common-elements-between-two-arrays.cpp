class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s1(nums1.begin(), nums1.end());
        unordered_set<int> s2(nums2.begin(), nums2.end());

        int com1 = 0, com2 = 0;

        // Count indices in nums1 that exist in nums2
        com1 = count_if(nums1.begin(), nums1.end(),
                        [&](int x){ return s2.count(x); });

        // Count indices in nums2 that exist in nums1
        com2 = count_if(nums2.begin(), nums2.end(),
                        [&](int x){ return s1.count(x); });

        return {com1, com2};
    }
};
