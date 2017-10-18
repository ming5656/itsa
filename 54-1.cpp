#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float x[10],big,sma;
    int t,i;
    cin>>t;
    while(t--)
    {
        for(i=0;i<10;i++)
            cin>>x[i];
        big=sma=x[0];
        for(i=1;i<10;i++)
        {
            if(big<x[i])
                big=x[i];
            if(sma>x[i])
                sma=x[i];
        }
        cout<<"maximum:"<<fixed<<setprecision(2)<<big<<endl;
        cout<<"minimum:"<<fixed<<setprecision(2)<<sma<<endl;
    }
    return 0;
}
