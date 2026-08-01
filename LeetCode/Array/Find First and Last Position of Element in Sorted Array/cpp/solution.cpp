class Solution {
public:
    int firstoccur(vector<int>nums,int target){
        int l=0;
        int r=nums.size()-1;
        int ans=-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(nums[mid]==target){
                ans=mid;
                r=mid-1;
            }
            else if(nums[mid]>target){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return ans;
    }
    int lastoccur(vector<int>nums,int target){
        int l=0;
        int r=nums.size()-1;
        int ans=-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(nums[mid]<=target){
                if(nums[mid]==target){
                ans=mid;
                }
        l=mid+1;
                //r=mid-1;
            }
            else{
                r=mid-1;
                //l=mid+1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans(2);
        ans[0]=firstoccur(nums,target);
        ans[1]=lastoccur(nums,target);
        return ans;
    }
};