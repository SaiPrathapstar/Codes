#include<stdio.h>
int main()
{
	int cost[10][10] , path[10][10] , i  ,j  , n , p , min , v , index = 1;
	int distance[10] , row , column;
	printf("Enter no of nodes : ");
	scanf("%d" , &n);
	printf("Enter the cost matrix : ");
	for( i = 1 ; i <= n ; i++)
	{
		for(j = 1 ; j <= n ; j++)
		{
			scanf("%d",  &cost[i][j]);
		}
	}
	printf("Choose your node to visit : ");
	scanf("%d" , &v);
	printf("Enter noof paths for the node %d : " ,v);
	scanf("%d" ,&p);
	printf("Enter the path matrix : ");
	for(i = 1 ; i <= p ; i++)
	{
		for(j = 1 ; j <= n ; j++)
		{
			scanf("%d" ,&path[i][j]);
		}
	}
	for(i = 1 ; i <= p ; i++)
	{
		distance[i] = 0;
		row = 1;
		for(j = 1 ; j <= n ; j++)
		{
			if(row != v)
			{
				column = path[i][j+1];
				distance[i] = distance[i] + cost[row][column];
			}
			row = column;
		}
	}
	min = distance[1];
	for(i = 1 ; i <= p ; i++)
	{
		if(distance[i] <= min)
		{
			min = distance[i];
			index = i;
		}
	}
	printf("The minimum distance is %d : ", min);
	printf("The shortest path is : ");
	for(i=1 ; i <= n ; i++)
	{
		if(path[index][i] != 0)
		{
			printf("--->%d", path[index][i]);
		}
	}
}
