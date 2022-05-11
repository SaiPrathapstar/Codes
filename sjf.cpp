#include<stdio.h>
int main()
{
	int p[20] , wt[20] , bt[20] , tt[20] , i , j , n ,temp , pos;
	float avgwt = 0 , avgtt = 0;
	printf("Enter the number of processes : ");
	scanf("%d", &n);
	printf("Enter the process id : ");
	for(i = 0 ; i < n ; i++)
	scanf("%d", &p[i]);
	printf("Enter the burst time of processes : ");
	for( i= 0 ; i < n ; i++)
	scanf("%d" , &bt[i]);
	for(i = 0 ; i < n ; i++ )
	{
		for(j = 0 ; j < n - 1; j++)
		{
			if(bt[j] > bt[j+1] )
			{
				temp = bt[j];
				bt[j] = bt[j+1];
				bt[j+1] = temp;
				
				temp = p[j];
				p[j] = p[j+1];
				p[j+1] = temp;
			}
		}
	}
	wt[0] = 0;
	for(i = 1; i < n; i++)
	{
		wt[i] = wt[i-1] + bt[i-1];
	}
	for( i = 0 ; i<n ;i++ )
	{
		tt[i]  = bt[i] + wt[i];
	}
	for(i = 0 ; i < n ; i++)
	{
		avgwt = avgwt + wt[i];
		avgtt = avgtt + tt[i];
	}
	avgwt = avgwt/n;
	avgtt = avgtt/n;
	printf("P \tWT\tTT\tBT\n");
	for( i = 0 ; i < n ; i++ )
	{
		printf("%d \t%d \t%d \t%d\n", p[i], wt[i] , tt[i] , bt[i] );
	}
	printf("Average waiting time is     : %f\n" , avgwt);
	printf("Average turn around time is : %f" , avgtt);
}