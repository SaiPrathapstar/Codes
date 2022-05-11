#include<stdio.h>
int main()
{
	int ms , os , size , n , s[20] , frag = 0;
	printf("Enter the size of total memory : ");
	scanf("%d" , &ms);
	printf("Enter the size for OS : ");
	scanf("%d" , &os);
	printf("Enter the no.of frames : ");
	scanf("%d" , &n);
	ms = ms - os;
	size = ms / n;
	for( int i = 0 ; i < n ; i++)
	{
	printf("Enter the size of the page %d : " , i+1);
	scanf("%d" , &s[i]);
	}
	printf("Allocating pages in the memory....\n");
	for( int i = 0 ; i < n ; i++)
	{
		if(s[i] <= size)
		{
			printf("Allocated space for the page %d\n" , i+1);
			frag = frag + size - s[i];
		}
		else
		printf("Cannot allocate memory for the page %d\n",  i+1);
	}
	printf("Total fragmentation is %d \n" , frag);
}