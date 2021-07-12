#include "Billing.h"

void writefile()
{
	FILE *fp;
	fp = fopen("ans.dat", "ab");
	fwrite(&customer, sizeof(customer), 1, fp);
	fclose(fp);
	return;
}