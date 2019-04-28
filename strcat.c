#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
char *my_strcat(char *dst, char *src)
{
	assert(dst && src);
	char *ret = dst;
	while (*dst)
	{
		dst++;
	}
	while (*dst++ = *src++)
     	;
	return ret;
}
int main()
{
	char a[15] = "hello ";
	char b[10] = "world";
	printf("%s\n", my_strcat(a, b));
	system("pause");
	return 0;
}