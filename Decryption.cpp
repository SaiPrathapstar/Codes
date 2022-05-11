#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char pwd[20] , alpha[27] = "abcdefghijklmnopqrstuvwxyz";
	int num[20] , i , n , key;
	printf("Enter password : ");
	scanf("%s", pwd);
	n = strlen(pwd);
	for(i = 0 ; i < n ; i++)
	num[i] = toascii(tolower(pwd[i]) - 'a');
	printf("Enter the key : ");
	scanf("%d" , &key);
	for(i = 0 ; i < n  ; i++)
	num[i] = (num[i] + key) %26;
	for(i= 0 ; i < n ; i++)
	pwd[i] = alpha[num[i]];
	printf("The encrypted key is : %s " , pwd);
	printf("\nDECRYPTION\n");
	for(i = 0 ; i < n ; i++)
	{
		num[i] = (num[i] - key) % 26;
		if(num[i] < 0)
		num[i] += 26;
		pwd[i] = alpha[num[i]];
	}
	printf("The decrypted text is : %s\n" , pwd);
}
