#include<stdio.h>
int main()
{
    int r,c;
    scanf("%d%d",&r,&c);
    int arr1[r][c];
    for(int i=0;i<r;i++)
    {
    for(int j=0;j<c;j++)
    {
        scanf("%d",&arr1[i][j]);
    }
    }
    int x,y;
    scanf("%d%d",&x,&y);
    int arr2[x][y];
    for( int i=0;i<x;i++)
    {
        for( int j=0;j<y;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    for( int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            int num=arr1[i][j]+arr2[i][j];
            printf("%d ",num);
        }
        printf("
");
    }
}