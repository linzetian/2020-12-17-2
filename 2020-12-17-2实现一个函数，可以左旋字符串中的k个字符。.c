//题目内容:
//实现一个函数，可以左旋字符串中的k个字符。例如:
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB
//法一：(3步实现)
#include<stdio.h>
#include<assert.h>
#include<string.h>

void left_roate(char* prt, int k)//也可以用char str[]
{
	int len = strlen(prt);//strlen访问的是地址的内容，直到遇到0（\0）
	assert(prt!=NULL);//或者为assert（prt）
	assert(k<=len);//括号内为真，则不报错
	int i = 0;
	for (i = 0; i < k; i++)
	{
		int j = 0;
		//1取出第一个元素
		char tmp = *prt;
		//2后面的数前移动
		for (j = 0; j < len - 1; j++)
		{
			*(prt+j) = *(prt+j + 1);
		}
		//3把前面取出的元素放到最后
		*(prt + len - 1) = tmp;
	}
}
int main()
{
	int k = 0;
	printf("Enter the k: ");
	scanf("%d",&k);
	char arr[] = "abcdef";
	left_roate(arr,k);
	printf("%s",arr);
}