#include <iostream>

using namespace std;

int main()
{
    long long int k[32],ans;
    int i,d,n;
    int t;
    cin>>t;
    while(t--)
    {
        ans=0;
        cin>>d;
        k[d]=1;
        for(i=d-1;i>0;i--)
        {
            k[i]=k[i+1]*2;
        }
        for(i=1;i<=d;i++)
        {
            cin>>n;
            ans+=(k[i]*n);
        }
        cout<<ans<<endl;
    }

    return 0;
}
