/*
Given an array of integers, every element appears thrice except for one which occurs once.
Find that element which does not appear thrice.
Note: Your algorithm should have a linear runtime complexity.
Could you implement it without using extra memory?

Example :
Input : [1, 2, 4, 3, 3, 2, 2, 3, 1, 1]
Output : 4
*/
int singleNumber(const int* A, int n1) {
    int x=0,i,j,r=0;
    for(i=0;i<31;i++)
    {
        x=0;
        for(j=0;j<n1;j++)
        {
            if(A[j]&(1<<i))
            x++;
        }
         x=x%3;
        if(x)
            r=r|(1<<i);
    }
    return r;
}