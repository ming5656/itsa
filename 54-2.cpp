#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;

int main()
{
    int m,tw,n,i,j,sz,ve;
    vector <int> store;
    vector <int> w;
    string buffer;
    cin>>m;
    while(m--)
    {
        cin>>tw;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>sz>>ve>>buffer;
            for(j=0;j<tw/sz;j++)
            {
                store.push_back(ve);
                w.push_back(sz);
            }
        }
        int c[w.size()+1][tw+1];
        memset(c,0,sizeof(c));
        for(i=0;i<w.size();i++)
        {
            for(j=0;j<=tw;j++)
            {
                if(j-w[i]<0)
                    c[i+1][j]=c[i][j];
                else
                {
                    c[i+1][j]=max(c[i][j],c[i][j-w[i]]+store[i]);
                }
            }
        }
        cout<<"Total: "<<c[i][tw]<<endl;
        store.clear();
        w.clear();
    }
    return 0;
}
