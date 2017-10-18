#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int **mul(int **matrix,int m)
{
    int i,j,k;
    int **ans=(int **)malloc(sizeof(int *)*m);
    for(i=0;i<m;i++)
    {
        ans[i]=(int *)malloc(sizeof(int)*m);
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            ans[i][j]=0;
            for(k=0;k<m;k++)
            {
                ans[i][j]+=(matrix[k][i]*matrix[k][j]);
            }
        }
    }
    return ans;
}
int main()
{
    int n,m,v,i,r,c,val,**ans,j;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d",&m,&v);
        int **matrix=(int **)malloc(sizeof(int *)*m);
        for(i=0;i<m;i++){
            matrix[i]=(int *)malloc(sizeof(int)*m);
            for(j=0;j<m;j++)
                matrix[i][j]=0;
        }

        for(i=0;i<v;i++)
        {
            scanf("\n(%d:%d)=%d",&r,&c,&val);
            matrix[c-1][r-1]=val;
        }
        ans=mul(matrix,m);
        for(i=0;i<m;i++)
        {
            for(j=0;j<m;j++)
            {
                printf("%d",ans[i][j]);
                if(j!=m-1)
                    printf(" ");
            }
            printf("\n");
        }
    }
    return 0;
}
