#include<stdio.h>
int main()
{
	int a[20] , b[25] , i , j = 0 , count = 0 , n;
	printf("Enter input frame length : ");
	scanf("%d" , &n);
	printf("Enter the input frame : ");
	for(i = 0 ; i < n ; i++)
	scanf("%d" , &a[i]);
	for(i = 0 ; i < n ; i++)
	{
		if(a[i] == 1)
		count++;
		else
		count = 0;
		b[j] = a[i];
		j++;                                                        
		if(count == 5 && i != n-1)
		{
			count = 0;
			b[j] = 0;
			j++;
		}
	}
	printf("Frame after stuffing : ");
	for(i= 0 ; i < j ; i++)
	printf("%d " , b[i]);
}
