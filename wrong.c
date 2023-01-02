#include<stdio.h>
int main(){
    int n,i,j;
    int* a, int size,int *jam;
    int size[i];
    int sum[i];
    scanf("%d",&n);
    int** arr = (int**)malloc(n*sizeof(int*));
    for ( i = 0; i < n; i++)
    {
        int m;
        scanf("%d",&m);
        size[i]=m;
        arr[i] = (int*)malloc(m*sizeof(int));
        for ( j = 0; j < m; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        
    }
    for (i=0;i<n;i++)
	{
    	sort(*(arr+i),size[i],&sum[i]);
	}
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < size[i]; j++)
        {
            printf("%d ",*(*(arr+i)+j));
        }   
        printf("\n");
    }
   return 0;
}
