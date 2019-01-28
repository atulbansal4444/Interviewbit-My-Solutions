int isPalindrome(int A) {
    int i,j,rem=0;
    j=A;
    for(;A!=0;)
    {
        rem=rem*10+(A%10);
        A=A/10;
    }
    if(rem==j && j>=0)  return 1;
    else  return 0;
}