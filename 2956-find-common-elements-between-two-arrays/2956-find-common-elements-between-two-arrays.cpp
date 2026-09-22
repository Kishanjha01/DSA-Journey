class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s1(nums1.begin(), nums1.end());
        unordered_set<int> s2(nums2.begin(), nums2.end());
        int com1 = 0, com2 = 0;
        for (int x : nums1) {
            if (s2.find(x) != s2.end()) {
                com1++;
            }
        }
        for (int x : nums2) {
            if (s1.find(x) != s1.end()) {
                com2++;
            }
        }
        return vector<int>{com1, com2}; 
    }
};
