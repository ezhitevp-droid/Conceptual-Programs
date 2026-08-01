class Solution {
public:
    int n;
    void convert(vector<int>& nums,int i){
        if(i == n)return;
        if(i + 1== nums[i]){convert(nums,i+1);return;}
        if(!(0 < nums[i] && nums[i] <= n)){convert(nums,i+1);return;}
        int next = nums[i];
        nums[i] = -1;    
        while((1 <= next && next <= n)&& nums[next-1] != next){
            cout << next << endl;
            int temp = nums[next-1];
            nums[next-1] = next;
            next = temp;
        }
        convert(nums,i+1);
        return;
    }

    int firstMissingPositive(vector<int>& nums) {
        n = nums.size();
        convert(nums,0);
        for(int i = 0 ; i < n  ;i ++)
        if(i+1 != nums[i])return i+1;
        return n+1;
    }
};