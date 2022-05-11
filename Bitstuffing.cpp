#include<stdio.h>
int main()
{
	int a[20] , b[30] , i , j , k , count , n;
	printf("Enter the length of the string : ");
	scanf("%d" , &n);
	printf("Enter the input frame(0's and 1's only) : ");
	for(i = 0 ; i < n ; i++)
	scanf("%d" , & a[i]);
	printf("Stuffing....");
	count = 1;
	j = 0;
	i= 0;
	while(i < n)
	{
		if(a[i] == 1)
		{
			b[j] = a[i];
			for(k = i+1 ; k < n && count < 5 && a[k] == 1 ; k++)
			{
				j++;
				b[j] = a[k];
				count++;
				if(count == 5)
				{
					j++;
					b[j] = 0;
				}
				i = k;
			}
		}
		else
		{
			b[j] = a[i];
		}
		i++;
		j++;
	}
	printf("Frame after stuffing  : ");
	for( i = 0 ; i < j ; i++)
	printf("%d ", b[i] );
}
