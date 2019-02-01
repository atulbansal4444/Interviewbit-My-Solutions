/**
*****
    A = 30
    B = 12
    We return
    X = 5
*****
 * @input A : Integer
 * @input B : Integer
 * 
 * @Output Integer
 */
 int gcd(int a,int b)
 {
     if(b==0)  return a;
     else  return gcd(b,a%b);
 }
int cpFact(int A, int B) {
   if(gcd(A,B)==1)  return A;
    else  {
    int  x;
    while(gcd(A,B)!=1)
    {
        x=gcd(A,B);
        A=A/x;
    }
    }
   return A;
}