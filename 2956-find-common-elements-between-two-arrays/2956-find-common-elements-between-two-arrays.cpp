class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        // Convert nums2 into a set for O(1) lookup
        unordered_set<int> s2(nums2.begin(), nums2.end());
        unordered_set<int> s1(nums1.begin(), nums1.end());

        int com1 = 0, com2 = 0;

        // Directly count without extra loops on sets
        for (int x : nums1) {
            if (s2.count(x)) com1++;
        }
        for (int x : nums2) {
            if (s1.count(x)) com2++;
        }

        return {com1, com2};
    }
};
