#include "Billing.h"
#include <stdio.h>

#include <conio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	int i, n;
	char ch;

	printf("   CUSTOMER BILLING SYSTEM:\n\n");
	printf("===============================\n");
	printf("\n1:    to add account on list\n");
	printf("2:    to search customer account\n");
	printf("3:    exit\n");
	printf("\n================================\n");
	do
	{
		printf("\nselect what do you want to do?");
		ch = getche();
	} while (ch <= '0' || ch > '3');
	switch (ch)
	{
	case '1':
		printf("\nhow many customer accounts?");
		scanf("%d", &n);
		for (i = 0; i < n; i++)
		{
			input();
			if (customer.payment > 0)
				customer.acct_type = (customer.payment < 0.1 * customer.oldbalance) ? 'O' : 'D';
			else
				customer.acct_type = (customer.oldbalance > 0) ? 'D' : 'C';
			customer.newbalance = customer.oldbalance - customer.payment;
			writefile();
		}
		main();
	case '2':
		printf("search by what?\n");
		printf("\n1 --- search by customer number\n");
		printf("2 --- search by customer name\n");
		search();
		ch = getche();
		main();
	case '3':

		printf("\n A PROJECT BY ANSHIKA");

		exit(1);
	}
}