int arraySign(int* a, int n) {
    int ans=1,m;
    for(int i=0;i<n;i++){
        // int t=a[i];
      if(a[i]<0){
         m=-1;
      }
      else if(a[i]>0){
       m=1; 
      }
      else{
        m=0;
      }
      ans*=m;
    }
    return ans;
}