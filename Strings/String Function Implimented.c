int strStr(const char* A, const char* B) {
    int i,j,x,y,idx,c=0;
    y=strlen(B);
    x=strlen(A);
 
    for(i=0;i<=(x-y);i++)
    {
        for(j=0;j<y;j++)
        {
            if(A[i+j]==B[j])
            {
                if(j==0)  idx = i;
                  
                c++;
            if(c==y)
                return idx;
            }
            else
            {
                c=0;
                break;
            }
        }
    }
    return -1;
}