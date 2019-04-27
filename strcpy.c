#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
char *my_strcpy(char *dst, const char *src)
{
	assert(dst && src);
	char *ret = dst;
	while (*dst++ = *src++);
	return ret;
}
int main()
{
	char str1[20] = { 0 };
	char *str2 = "world";
	my_strcpy(str1, str2);
	printf("%s\n", str1);
	system("pause");
	return 0;
}