class Solution {
    public int[] finalPrices(int[] prices) {
       Stack<Integer> stack=new Stack<>();
       for(int i=prices.length-1;i>=0;i--){
        int original=prices[i];

        while(!stack.isEmpty() && stack.peek()>original){
            stack.pop();
        }
        if(!stack.isEmpty()){
            prices[i]=original-stack.peek();
        }
        stack.push(original);
       } 
       return prices; 
    }
}