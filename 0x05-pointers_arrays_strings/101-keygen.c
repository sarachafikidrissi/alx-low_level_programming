#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <string.h>

int main(void)
{
	int length;
	scanf("%d", &length);
	if (length <= 0)
	{
		return (1);
	}

	
	int i = 0;
	char*password= malloc(length + 1);
	
	char *digits = "0123456789";
       	int digits_length = strlen(digits);
	
	
	char *lowers = "abcdefghijklmnopqrstuvwxyz";
	int lowers_length = strlen(lowers);

	char *uppers = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int uppers_length = strlen(uppers);

	char *symbols = "!@#$%^&*()";
	int symbols_length = strlen(symbols);

	srand(time(NULL) * getpid());

	for (i = 0; i < length; i++)
	{
		int char_type = rand() % 4;

		if (char_type == 0)
     		 password[i] = digits[rand() % digits_length];
    		else if (char_type == 1)
      	  	 password[i] = lowers[rand() % lowers_length];
    		else if (char_type == 2)
      		 password[i] = uppers[rand() % uppers_length];
    		else
     		 password[i] = symbols[rand() % symbols_length];
	}
	password[length] = '\0';
	printf("Password: %s\n", password);
	
	return 0;
}
