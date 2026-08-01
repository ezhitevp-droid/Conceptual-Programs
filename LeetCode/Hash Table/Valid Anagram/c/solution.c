int cmp(void  const *a,void const *b){
    return (*(const char* )a-*(const char* )b);
}

bool isAnagram(char* s, char* t) {
    int n=strlen(s);
    int m=strlen(t);
     qsort(s,n,sizeof(char),cmp);
     qsort(t,m,sizeof(char),cmp);

     return(strcmp(s,t)==0);
}