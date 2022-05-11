#include<stdio.h>
#include<string.h>
int main()
{
	char a[20] , b[50] , ch;
	int i = 0 , j = 0 , pos , n;
	printf("Enter the string : ");
	scanf("%s" , a);
	n = strlen(a);
	printf("Enter positon : ");
	scanf("%d" , &pos);
	while ( pos > n)
	{
		printf("This is not a valid position try again .... \n");
		printf("Enter the position agian : ");
		scanf("%d", &pos);
	}
	b[j] = 'd';
	b[j+1] = 'i';
	b[j+2] = 'e';
	b[j+3] = 's';
	b[j+4] = 't';
	b[j+5] = 'x';
	j = j+6;
	while( i < n)
	{
		b[j] = a[i];
		j++;
		i++;
		if(i == pos-1)
		{
			b[j+1] = 'd';
			b[j+2] = 'i';
			b[j=3] = 'e';
			b[j+4] = 'd';
			b[j+5] = 'i';
			b[j+6] = 'e';
			j = j+6;
		}
	}
	if(a[i] == 'd' && a[i+1] == 'i' && a[i+2] == 'e')
	{
		b[j+1] = 'd';
		b[j+2] = 'i';
		b[j+3] = 'e';
		j = j+3;
	}
	b[j+1] = 'd';
	b[j+2] = 'i';
	b[j+3] = 'e';
	b[j+4] = 's';
	b[j+5] = 't';
	b[j+6] = 'x';
	b[j+7] = '\0';
	j = j+6;
	printf("The frame after stuffing is : %s" , b );
}
