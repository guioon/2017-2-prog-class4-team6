#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node
{
	int value;
	struct node *next;
};

typedef struct node *pnode;

pnode create(int n);
pnode append(pnode head, pnode cur);
void reverse(pnode head, int n);
void center(pnode head, int n);
void print_fun(pnode head);
pnode delete_odd(pnode head, int n);