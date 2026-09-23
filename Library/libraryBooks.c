/*
Author: Tevin Too
Reg Number: BCS-05-0077/2026
Description: Library book charge
Date: 23rd September 2026
Version 1
*/

#include <stdio.h>

int main()
{
	int bookId,dueDate,returnDate, daysOverdue;
	float fine,fineRate;
	
	printf("Enter Book ID: \t");
	scanf("%d",&bookId);

	printf("Enter Due Date: \t");
	scanf("%d",&dueDate);
	
	printf("Enter Return Date: \t");
	scanf("%d",&returnDate);
		
	daysOverdue = returnDate - dueDate;
	
	if(daysOverdue <= 0)
	{
		fineRate = 0;
		daysOverdue = 0;
	}
	else if(daysOverdue <= 7){
		fineRate = 20;
	}
	else if(daysOverdue >= 8){
		fineRate = 50;
	}
	else if(daysOverdue >= 15)
	{
		fineRate = 100;
	}
    
	fine = daysOverdue * fineRate;
		
	printf("BookID: %d \n", bookId);
	printf("Due Date: %d \n", dueDate);
	printf("Return Date: %d \n \n", returnDate);
	
	printf("You were %d days overdue \n", daysOverdue);	
	printf("Your fine rate was %.2f \n", fineRate);
	printf("Your charge is: %.2f \n", fine);
	
	return 0;
}