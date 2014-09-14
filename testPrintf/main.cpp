#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
void get_next(char* p, int plen, int* next){
    int q=0, k=0;
    next[0] = 0;
    for(q=1; q < plen; q++){
        while(k>0 && p[q] != p[k]){
            k = next[k];
        }
        if(p[q]==p[k])
            k++;
        next[q]=k;
    }
}

int getpos=-1; 

/*
	KMP算法
*/
void kmp_match(char* t, char* p){
    int plen = strlen(p);
    int *next = (int*)malloc(sizeof(int)*plen);
    int q = 0, i=0, tlen = strlen(t);
 
    get_next(p, plen, next);
 
    for(i=0; i < tlen; i++){
        while( q>0 && p[q]!=t[i] ){
            q = next[q];
        }
        if(p[q]==t[i])
            ++q;
        if(q==plen){
            //printf("Match pos = %d\n", i-plen+1);
			getpos=(i-plen+1);
			return;
            q = next[q];
        }
    }
    free(next);
}
 /*
	截取一段字符串	
 */
 char* substring(char* ch,int pos,int length)
{
    char* pch=ch;
    char* subch=(char*)malloc(sizeof(char)*(length+1));
    int i;
    pch=pch+pos;
    for(i=0;i<length;i++)
    {
        subch[i]=*(pch++);
    }
    subch[length]='\0';
    return subch;
}


int main(){
 
    int i=0,j=0;
	int tmp=0;
    char* p = "acbac";
    char* t = "acaccbabb";
	char* tmpStr =NULL;
    int plen = strlen(p);
	//i:表示截取字符串的次数
	for (i=plen;i>0;i--)
	{
		tmp=plen-i+1;
		//j表示截取和KMP匹配的次数
		for (j=0;j<tmp;j++)
		{
			tmpStr=substring(p,j,i);
			getpos=-1;
			kmp_match(t,tmpStr);
		
			if (getpos!=-1)
			{
				//输出结果，并退出程序
				printf("result:%d\n",i);
				i=0;
				break;
			}
			free(tmpStr);
		}
	}
    return 0;
}