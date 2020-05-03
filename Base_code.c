#include <stdio.h>

int main()
{
	char pass, word, check;
	int trials = 0;

	printf("Create your password: ");
	scanf("%c", &pass);
	printf("Re-enter your password: ");
	scanf(" %c", &word);

	if(pass == word)
	{

	puts("Account sucessfully created\n");
	puts("Redirecting.....");
	getchar();

	 printf("\n\tLogin to your account:\n");
	for(trials =0;trials < 3; trials++)
    {
        printf("Input password :");
        scanf(" %c", &check);

        if(check == pass || check == word)
        {
            puts("\n  Welcome user");
            break;
	    }
	    else
            puts("Incorrect password, try again....");
    }

	}
	else
	puts("\nBoth passwords don't match");

	return 0;
}

