int fib(int n)
{
       int result;
        if(n==0)
           result=7;
        else if(n==1)
            result=11;
        else
            result=fib(n-1)+fib(n-2);
      return result;
}
