#include <stdio.h>
#include <malloc.h>

typedef struct node{ 
	int data; 
	struct node *lchild,*rchild; 
}*treetp,tree; 

treetp create (treetp t,int c); 

void print1(treetp); 

void print2(treetp);void print3(treetp);
int number=0;

void main() 
{
  treetp t=0,r; 
  r=create (t,0); 
  printf("ǰ������ ��");
  print1  (r); 
  printf("\n�������� ��");
  print2 (r);
  printf("\n�������� ��");
  print3 (r);
} 

treetp  create(treetp t,int c) 
{ 
	treetp p,di; 
	do{ 
		scanf("%d",&c); 
	if (t==0) 
	{ 
		t=(treetp)malloc(sizeof(tree)); 
		t->lchild=t->rchild=0; 
		t->data=c; 
	} 
	else 
	{   p=t; 
		while(p!=0) 
		{ 
			di=p; 
			if(c<(p->data)) 
				p=p->lchild; 
			else 
				p=p->rchild; 
		} 
		if(c<(di->data)) 
		{ 
			treetp NEWdi=(treetp) malloc(sizeof(tree)); 
			NEWdi->lchild=NEWdi->rchild=0; 
			NEWdi->data=c; 
			di->lchild=NEWdi; 
		} 
		else 
		{ 
treetp NEWdi=(treetp) malloc(sizeof(tree)); 
NEWdi->lchild=NEWdi->rchild=0; 
NEWdi->data=c; 
di->rchild=NEWdi; 
} 
 } 
++number;
}while(c!=0); 
printf("Ҷ�ӵ�������%d",number);
return t;
}   


/*
	����������ṹ
*/
typedef struct node{ 
	int data; 
	struct node *lchild,*rchild; 
}*treetp,tree; 
/*
	��ʱ���� ���������ֵ����Сֵ�� 
*/
int min=0,max=0;
void visit(treetp  t) 
{ 
	if (t!=0) 
	{     
		if (t->data>max)
		{
			max=t->data;
		} 
		if(t->data<min)
		{
			min=t->data;
		}
		visit(t->lchild); 
		visit(t->rchild); 
	} 
} 
/*
	���õݹ��������
	��������ֵ
*/
int maxDistance(treetp  t)
{
	visit(t);
	return max-min;
}

