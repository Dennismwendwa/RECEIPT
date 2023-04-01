#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct items
{
	char name[50];
	float price;
	int numOfItems;
	float subTotal;
	float discount;
};


struct user
{
	char name[50];
	int jobId;
};


int main(void)
{

	int n = 4;
	struct user user;
	struct user servr = {"Millicent Tony", 339};

	struct items item[4];

	float grandTotal = 0;
	float VAT;
	float VATrate = 0.16;
	float beforeVAT;
	int i;
	float totalDiscount = 0;
	float totalBeforediscount;

	if (item == NULL)
		printf("\nmemory not allocated\n");

	printf("\nEnter your name:\t");
	fgets(user.name, 50, stdin);
	printf("\nEnter your Job Id no.\t");
	scanf("%d", &user.jobId);

	/*printf("Enter the number of Items to buy \t");
	scanf("%d", &n);

	item = malloc(sizeof(struct item) * n);*/

	for (i = 0; i < n; i++)
	{
		printf("Enter item %d name. \t", i + 1);
		scanf("%s", item[i].name);
		printf("How many pieces of item %d you need. \t", i + 1);
		scanf("%d", &item[i].numOfItems);
		printf("Enter price of item %d \t", i + 1);
		scanf("%f", &item[i].price);
		
		if (i == 1 || i == 3)
		{
			item[i].discount = ((item[i].price * 0.04) * item[i].numOfItems);

		}
		else if (i != 1)
		{
			item[i].discount = 0;
		}

		totalDiscount += item[i].discount;

		item[i].subTotal = (item[i].numOfItems) * (item[i].price);
		grandTotal += item[i].subTotal;

		totalBeforediscount =  grandTotal;
		grandTotal -= totalDiscount;


		printf("\n");
	}
	VAT = VATrate * grandTotal;

	beforeVAT = grandTotal;
	grandTotal += VAT;


	printf("\t\t___________WELCOME TO SHOPPERS.___________\n");
	printf("\t\t\tTELEPHONE NO. 078796530982\n");
	printf("\t\t\t VAT: D9809876534TYF\n");

	printf("\n\n");
	printf("\t\t\t START OF RECEIPT.\n");
	printf("\t\t Date: %s \tTime: %s\n", __DATE__, __TIME__);
	printf("\t\t Store PY450\n");
	printf("\t\t___________________________________________________\n");

	for (i = 0; i < n; i++)
	{
		printf("\t\tItem:\t%s\n", item[i].name);
		printf("\t\tNumber of items: \t\t\t%d\t\n", item[i].numOfItems);
		printf("\t\tPrice per item:\t\t\t\t%d * %.2f\t\n", item[i].numOfItems, item[i].price);

		if (item[i].discount > 0)
		{
			printf("\t\tDiscount:\t\t\t\t%.2f\n", item[i].discount);
		}
		printf("\t\t%s:\t\t\t\t\t%.2f\n", item[i].name, item[i].subTotal);
		printf("\t\t__________________________________________________\n");
		/*printf("\t\tSub Total: \t\t\t\t%.2f\n", beforeVAT);*/
		/*printf("\t\tVAT: \t\t\t\t\t%.2f\n", VAT);*/

		/*printf("\n");*/
	}

	printf("\t\tTOTAL ITEMS:\t%d\n", n);
	printf("\t\tTOTAL BEFORE DISCOUNT:\t\t\t%.2f\n", totalBeforediscount);
	printf("\t\tTotal Discount awarded:\t\t\t%.2f\n", totalDiscount);
	printf("\t\t__________________________________________________\n");

	printf("\t\tSub Total: \t\t\t\t%.2f\n", beforeVAT);
	printf("\t\tVAT: 16%%\t\t\t\t%.2f\n", VAT);
	printf("\t\tGrand Total: \t\t\t\t%.2f\n", grandTotal);
	printf("\t\t__________________________________________________\n");

	printf("\t\tCODE\tRATE\t\tVATABLE AMT\tVAT AMT\n");
	printf("\t\t__________________________________________________\n");
	printf("\t\tA\t16.00%%\t\t%.2f\t%.2f\n", beforeVAT, VAT);
	printf("\t\tB\t0.00%%\t\t0.00\t\t0.00\t\n");
	printf("\t\t__________________________________________________\n\n");
	
	printf("\t\tYOU WERE SERVED BY: %s\n", servr.name);
	printf("\t\t**************************************************\n\n");
	
	/*printf("\t\t   **************** WELCOME ******************\n");*/
	printf("\t\t**************END OF FISCAL RECEIPT***************\n");

		printf("\n");

	return (0);
}
