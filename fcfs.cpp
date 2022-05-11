#include<stdio.h>
int main()
{
	int i , j , n ,p[20] , bt[20] , wt[20] , tt[20];
	float avgwt = 0 , avgtt = 0;
	printf("Enter the number of processes : ");
	scanf("%d" , &n );
	printf("Enter the process id's of processes : ");
	for( i = 0 ; i < n ; i++ )
	scanf("%d" , &p[i] );
	printf("Enter the burst time of each process : ");
	for(i= 0 ; i < n ; i++)
	scanf("%d" , &bt[i]);
	wt[0] = 0;
	for(i = 1 ; i < n  ; i++)
	{
		wt[i] = wt[i-1] + bt[i-1];
	}
	for(i = 0 ; i < n ;i++)
	{
		tt[i] = wt[i] + bt[i];
	}
	for( i= 0 ; i < n ; i++)
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
	return 0;
}