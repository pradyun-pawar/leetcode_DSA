class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        int i = 0;
        int j = 0;
        vector<int> result;

        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        while ((i <= n2 - 1) && (j <= n1 - 1)) {
            if (nums2[i] > nums1[j]) {
                j++;
            }
            else if (nums2[i] == nums1[j]) {
                result.push_back(nums2[i]);
                i++;
                j++;
            }
            else{
                i++;
            }
        }
        return result;
    }
};