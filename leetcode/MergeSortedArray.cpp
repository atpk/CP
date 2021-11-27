class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {     
        int i=0, j=0;
        vector<int> t;
        while(i<m && j<n){
            if(nums1[i]<nums2[j]){
                t.push_back(nums1[i]);
                i++;
            }
            else{
                t.push_back(nums2[j]);
                j++;
            }
        }
        while(i<m){
            t.push_back(nums1[i]);
            i++;
        }
        while(j<n){
            t.push_back(nums2[j]);
            j++;
        }
        
        for(i=0;i<n+m;i++)
            nums1[i]=t[i];
    }
};