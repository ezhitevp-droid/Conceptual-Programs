class Solution {
    public int fib(int n) {
        if(n<=1)
            return n;
        int a=0;
        int b=1;
        int temp;
        for(int i=2;i<=n;i++){
            temp = b;
            b = a + b;
            a = temp;
        //int fib[i]=i;
        
         
        }
        
    
        return b;
    }
    }