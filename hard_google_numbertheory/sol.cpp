	long long findNth(long long n)
    {
        long long f=1;
        long long num=0;
        
        while(n>0)
        {
            num+= (f*(n%9));  // 9 can be replaced by desired digit
            f*=10;
            n/=9;
        }
        
        return num;
    }