int prime(int x)
 {
    int i,j,f=0;
    for(i=2;i<x/2;i++)  {
        if(x%i==0)  {
            f=1;
            break;
        }
    }
    if(f==0)  return 1;
    else  return 0;
 }
int* primesum(int A, int *len1) {
    static int a[2];
    int i;
    *len1=2;
    for(i=2;i<=A/2;i++)  {
        if(prime(i))  {
            if(prime(A-i))  {
             a[0]=i;
             a[1]=A-i;
             break;
            }
        }
    }
    return a;
}