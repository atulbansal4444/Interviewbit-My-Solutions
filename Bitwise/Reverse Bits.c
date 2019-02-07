/*
Reverse bits of an 32 bit unsigned integer
Example 1:
x = 0,
          00000000000000000000000000000000  
=>        00000000000000000000000000000000
return 0
Example 2:
x = 3,
          00000000000000000000000000000011 
=>        11000000000000000000000000000000
return 3221225472
 */
unsigned int reverse(unsigned int A) {
    unsigned long long int x=0;
    int i,j=0;
    for(i=31;i>=0;i--)  {
        int a=A&(1<<j);
        j++;
        if(a)
            x=x|(1<<i);
    }
    return x;
}