bool canMakeArithmeticProgression(int* arr, int arrSize) {
    int i,m=0,ans[arrSize],j,c;
    for(i=0;i<arrSize;i++)
    for(j=i+1;j<arrSize;j++)
    if(arr[i]>arr[j])
    {
        c=arr[i];
        arr[i]=arr[j];
        arr[j]=c;
    }
    for(i=0;i<arrSize-1;i++)
    ans[m++]=arr[i+1]-arr[i];
    for(i=1;i<m;i++)
    if(ans[0]!=ans[i])
    return false;
    return true;
}