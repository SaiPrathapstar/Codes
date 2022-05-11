#include<stdio.h>
int main()
{
	int m[40] , n , i ,j ,k, ch;
	int b[10][2] , f[10];
	printf("Enter the available free memory : ");
	scanf("%d" , &n);
	for( i = 0 ; i < n ; i++)
	m[i] = 0;
	do
	{
		printf("Enter the filename : ");
	    scanf("%d" , &f[i]);
		printf("Enter the starting block and file size of the file : ");
		scanf("%d %d" , &b[i][0] , &b[i][1] );
		for(j = b[i][0] ; j < (b[i][0] + b[i][1]) ; j++ )
		{
			if(m[j] == 0)
			m[j] = 1;
			else
			{
				printf("Cannot allocate memeory ...\n");
				k = j;
				for(j = b[i][0] ; j < k ; j++)
				m[j] = 0;
			}
		}
		i++;
		printf("IS there any file to be allocated(0/1)\nEnter your choice : ");
		scanf("%d" , &ch);
	}while( ch == 1 );
	printf("File allocation table \n");
	printf("File name and starting block of the memeory : ");
	for( j = 0 ; j < i ; j++ )
	printf("%d\t%d\t%d\n" , f[j] , b[j][0],  b[j][1]);
}