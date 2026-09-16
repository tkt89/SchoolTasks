#include <stdio.h>

int main()
{
	int height;
	int bankBalance;
	int phoneNumber;
	
	printf("Enter your height(m): \t");
	scanf("%d", &height);
	
	printf("Enter your Bank Balance: \t");
	scanf("%d", &bankBalance);
	
	printf("Enter your phone number: \t");
	scanf("%d", &phoneNumber);
	
	printf("Your height is %d metres \n ", height);
	printf("Your balance is Ksh.%d \n", bankBalance);
	printf("Your phone number is %d \n", phoneNumber);
	
	return 0;
}