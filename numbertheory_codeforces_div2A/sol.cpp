int main()
{     
     ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
 lli t;
 cin>>t;
 while(t--)
{
 lli n;
 cin>>n;
 if((n&(n-1))==0)
 {
     cout<<n-1<<endl;
 }
 else
 {
     lli p = (lli)log2(n);
    lli q=(lli)pow(2, p);
    cout<<q-1<<endl;
 }
 
 
 
 
 
}
 
}