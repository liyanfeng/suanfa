#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

void getNext(int next[100],char* p)
{
	int j=0;
	int k=-1;
	next[0]=-1;
	while(j<strlen(p)-1)
	{
		if (k==-1||p[j]==p[k])
		{
			k++;
			j++;
			next[j]=k;
		}
		else
		{
			k=next[k];
		}
	}
}

int kmp(char* s,char* p)
{
	int i=0,j=0;
	int next[100]={0};
	getNext(next,p);
	for (;i<strlen(p);i++)
	{
		cout<<next[i]<<" ";
	}
	cout<<endl;
	i=0;
	while (i<strlen(s))
	{
		if (j==-1||s[i]==p[j])
		{
			i++;
			j++;
		}
		else
		{
			j=next[j];
		}
		if (j==strlen(p)-1)
		{
			return i-strlen(p);
		}
	}
	return -1;
}

int main(int argc,char** argv)
{
	cout<<kmp("liyanababafeng","ababa")<<endl;;
	return 0;
}