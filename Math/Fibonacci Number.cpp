class Solution {
public:
    int fib(int n) {  //bruteforce
        int a=0,b=1,c;
        int count =2;
        if(n==0 || n==1)
        {
           return n;
        }
        while(count<=n)
        {
           c=a+b;
           a=b;
           b=c;
           count++;
        }
        
        return c;
        
       /* 
       // recursion method
    if(n==0) 
		return 0;
    if(n==1)
        return 1;

	return fib(n-1) + fib(n-2);*/
    }
};
