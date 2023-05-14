#include<stdio.h>

void fun(int a){
	printf("The functon pnter value is:%d ", a);
}

int main(int argc, char const *argv[])
{
	void (*ptr) (int) = &fun;

	(*ptr) (30);
	return 0;
}