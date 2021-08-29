#include<stdio.h>
int main()
{
	int m, n;
	printf("Enter no. of rows and columns: ");
	scanf("%d%d", &m, &n);
	int **a;
	int i,j;
     a = (int **) malloc(m * sizeof(int *));
	for(int i=0; i<m; i++)
	{
		a[i] = (int *) malloc(n * sizeof(int));
	}

	printf("Enter matrix elements: ");
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("Matrix elements are: \n");
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
