class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>temp(m+n);
        int index =0;
        int i=0,j=0;
        while(i<m &&j<n)
        {
            if(nums1[i]<nums2[j])
            {
                temp[index++]=nums1[i++];
            }
            else
            {
                temp[index++]=nums2[j++];
            }
        }

        while(i<m)
        {
            temp[index++]=nums1[i++];
        }
        while(j<n)
        {
            temp[index++]=nums2[j++];
        }
        for(int i=0; i<m+n; i++)
        {
            nums1[i]=temp[i];
        }
        
    }
};