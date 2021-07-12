#include "Billing.h"
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

void search()
{
    int tl, sl, ts;

    char ch;
    char nam[100];
    int n, i, m = 1;
    FILE *fp;
    fp = fopen("ans.dat", "rb");
    do
    {
        printf("\nenter your choice:");
    } while (ch != '1' && ch != '2');
    switch (ch)
    {
    case '1':
        fseek(fp, 0, SEEK_END);
        tl = ftell(fp);
        sl = sizeof(customer);
        ts = tl / sl;
        do
        {
            printf("\nchoose customer number:");
            scanf("%d", &n);
            if (n <= 0 || n > ts)
                printf("\nenter correct\n");
            else
            {
                fseek(fp, (n - 1) * sl, SEEK_SET);
                fread(&customer, sl, 1, fp);
                output();
            }
            printf("\n\nagain?(y/n)");
            ch = getche();
        } while (ch == 'y');
        fclose(fp);
        break;
    case '2':
        fseek(fp, 0, SEEK_END);
        tl = ftell(fp);
        sl = sizeof(customer);
        ts = tl / sl;
        fseek(fp, (ts - 1) * sl, SEEK_SET);
        fread(&customer, sizeof(customer), 1, fp);
        n = customer.number;

        do
        {
            printf("\nenter the name:");
            scanf("%s", nam);
            fseek(fp, 0, SEEK_SET);
            for (i = 1; i <= n; i++)
            {
                fread(&customer, sizeof(customer), 1, fp);
                if (strcmp(customer.name, nam) == 0)
                {
                    output();
                    m = 0;
                    break;
                }
            }
            if (m != 0)
                printf("\n\ndoesn't exist\n");
            printf("\nanother?(y/n)");
        } while (ch == 'y');
        fclose(fp);
    }
    return;
}