#include <stdio.h>
#ifndef __BILLING_H__
#define __BILLING_H__

struct date
{
    int month;
    int day;
    int year;
};

struct account
{
    int number;
    char name[100];
    int acct_no;
    float mobile_no;
    char street[100];
    char city[100];
    char acct_type;
    float oldbalance;
    float newbalance;
    float payment;
    struct date lastpayment;
} customer;

void input();

void writefile();

void search();

void output();

#endif
