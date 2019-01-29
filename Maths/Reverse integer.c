int reverse(int A) {
 long long  temp = abs(A), rev = 0;
    while (temp)
    {
        rev = rev * 10 + temp % 10;
        if (rev > INT_MAX) return 0;
        temp /= 10;
    }
    if(A<0)  return -rev;
    else  return rev;
}
