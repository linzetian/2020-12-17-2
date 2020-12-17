//实现左旋
//如abcdef
//三步法（函数）
//1、abcdef
//2、ba fedc逆序左边，逆序右边
//3、cdef ab整体逆序

#include<stdio.h>
#include<string.h>
#include<assert.h>
void resverse(char* left, char* right)
{
	assert(left);
	assert(right);
	while (left < right)
	{
		char tem = *left;
		*left = *right;
		*right = tem;
		left++;
		right--;
	}
}
void left_move(char* prt, int k)
{
	int len = strlen(prt);
	assert(prt);
	assert(k <= len);
	resverse(prt,prt+k-1);//逆序左边
	resverse(prt+k, prt + len - 1);//逆序右边
	resverse(prt, prt + len - 1);//逆序整体
}
int main()
{
	int k = 0;
	printf("Enter the k :");
    scanf("%d",&k);
	char arr[] = "abcdef";
	left_move(arr, k);
	//reverse(arr,k);
	//reverse(arr,k);
	//reverse(arr,k);
	printf("%s",arr);
	return 0;
}