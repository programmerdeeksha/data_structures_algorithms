int closest3Sum(int a[], int n, int x)
    {  int sum=0;
       int diff= INT_MAX;
       int max_s= INT_MIN;
        
        sort(a,a+n);
        for(int i=0;i<n-2;i++)
        {
            int j=n-1,k=i+1;
            
            while(k<j)
            {
                if(a[i]+a[j]+a[k]==x)
                {
                    return a[i]+a[j]+a[k];
                }
                else if(a[i]+a[j]+a[k]<x)
                {   
                    sum= a[i]+a[j]+a[k];
                    int d= abs(sum-x);
                    if(d<=diff)
                    {
                        diff=d;
                        max_s= max(max_s,sum);
                    }
                    k++;
                }
                else
                {   
                    sum= a[i]+a[j]+a[k];
                    int d= abs(sum-x);
                    if(d<=diff)
                    {
                        diff=d;
                        max_s= max(max_s,sum);
                    }
                    j--;
                    
                }
            }
        }
        return max_s;
    }
