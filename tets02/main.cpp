#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

#pragma  pack(8)

struct node{
	short a;
	char* b;
	char c;
	char f;
};
int main()
{

	printf("%d",sizeof(struct node));
	return 0;
}