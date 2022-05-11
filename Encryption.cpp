#include<stdio.h>
#include<string.h>
int main()
{
	int i , choice , l;
	char cipher[50] , plain[50];
	char key[50];
	while(1)
	{
		printf("\n1.Encryption \n2.Decryption \n3.EXIT\nEnter your choice : ");
		scanf("%d" , &choice);
		if(choice == 1)
		{
			printf("\nENCRYPTON\n");
			printf("Enter the plain text : ");
			scanf("%s" , plain);
			printf("Enter the Encryption key : ");
			scanf("%s" , key);
			l = strlen(key);
			for(i = 0 ; i < plain[i] != '\0' ; i++)
			cipher[i] = plain[i]^l;
			cipher[i] = '\0';
			printf("The encrypted text is  : %s \n" , cipher);
		}
		else if(choice == 2)
		{
			printf("\nDECRYPTION\n");
			for(i = 0 ; i < cipher[i] != '\0' ; i++)
			plain[i] = cipher[i]^l;
			printf("The decrypted text is : %s" , plain);
		}
		else
		break;
	}
	return 0;
}
