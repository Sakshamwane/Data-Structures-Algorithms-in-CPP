class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        // i points to the last valid element in nums1
        int i = m - 1;
        
        // j points to the last element in nums2
        int j = n - 1;
        
        // k points to the last position in nums1 (including extra space)
        int k = m + n - 1;

        // Merge nums1 and nums2 starting from the end
        while (i >= 0 && j >= 0) {
            
            // Compare current elements from nums1 and nums2
            if (nums1[i] > nums2[j]) {
                // Place the larger element at position k
                nums1[k] = nums1[i];
                i--;   // Move pointer in nums1
            } else {
                // Place element from nums2 at position k
                nums1[k] = nums2[j];
                j--;   // Move pointer in nums2
            }
            k--;   // Move to the next position from the end
        }

        // If elements remain in nums2, copy them
        // (No need to copy nums1 leftovers—they are already in place)
        while (j >= 0) {
            nums1[k] = nums2[j];
            j--;
            k--;
        }
    }
};
