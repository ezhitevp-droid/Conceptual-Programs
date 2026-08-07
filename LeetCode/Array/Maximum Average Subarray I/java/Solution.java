class Solution {
    public double findMaxAverage(int[] nums, int k) {
       double sum=0;
        for(int i=0;i<k;i++){
            sum=sum+nums[i];
        }
    double avg=sum;
        for(int i =k;i<nums.length;i++){
            sum=sum+nums[i]-nums[i-k];
            avg=Math.max(avg,sum);
        }
return (double)avg/k;
    }
}
