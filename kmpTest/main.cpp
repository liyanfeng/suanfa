#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

void getNext(int next[100],char* p)
{
	int j=0,i=0;
	int k=-1;
	next[0]=-1;
	while(j<strlen(p)-1)
	{
		if(k==-1||p[j]==p[k])    //匹配的情况下,p[j]==p[k]
        {
            j++;
            k++;
            next[j]=k;
			cout<<"if true"<<j<<" : "<<k<<"  ";
        }
        else                   //p[j]!=p[k]
        {    
			k=next[k];
			cout<<"iffalse"<<j<<" : "<<k<<"  ";
		}
		for (i=0;i<strlen(p);i++)
		{
			cout<<next[i]<<" ";
		}
		cout<<endl;
	}
}

int kmp(char* s,char* p)
{
	int result=-1;
	int next[100]={0};//={0};
	int i=0,j=0;
	getNext(next,p);
	for (i=0;i<strlen(p);i++)
	{
		cout<<p[i]<<" : "<<i<<" : "<<next[i]<<endl;
	}
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
		if (j==strlen(p))
		{
			return i-strlen(p);
		}
		if (i+strlen(p)>strlen(s))
		{
			return -1;
		}
	}
	return -1;
}

int main(int argc,char** argv)
{
	cout<<kmp("liababafaaaaeng","abcababc")<<endl;
	return 0;
}