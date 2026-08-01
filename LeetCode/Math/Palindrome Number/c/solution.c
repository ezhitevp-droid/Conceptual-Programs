bool isPalindrome(int x) {
    if(x<0){
        return false; 
    }
    int quotient = x;
    int counter=1;
    while(quotient>=1){
        quotient = quotient /10; 
        counter++;
    }
    quotient = x;
    int size = counter -1;
    int arr[counter];
    for(int i =0; i<size ; i++){
        float remainder = quotient % 10;
        quotient = quotient /10;
        if(remainder<10){
            remainder = remainder * 10;
        }
        arr[i]= remainder;
    }
    for(int i=0; i<size/2; i++){
        if(arr[i]!=arr[(size-1)-i]){
            return false;
        }
    }
    return true;
}