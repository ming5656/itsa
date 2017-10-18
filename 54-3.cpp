#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double t,i;
    int n,times,r;
    char d;
    cin>>times;
    while(times--)
    {
        cin>>t>>d>>n;
        i=n;
        i=i*(i+1.0)/2;
        t+=i*(2.71828);
        r=(int)(t*100000);
        cout<<fixed<<setprecision(4)<<t<<endl;
    }
    return 0;
}
