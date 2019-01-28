public class Solution {
    public ArrayList<String> fizzBuzz(int A) {
    int i=0;
    ArrayList<String> v = new ArrayList<String>();
    for(i=1;i<=A;i++)
    {
        if(i%3 == 0 && i%5==0)
            v.add("FizzBuzz");
        else if(i%5==0)
            v.add("Buzz");
        else if(i%3==0)
            v.add("Fizz");
        else
            v.add(i+"");
    }
    return v;
    }
}