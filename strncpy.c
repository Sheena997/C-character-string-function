#define _CRT_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

char *my_strncpy(char *dst, const char *src, size_t n)
{
	assert(dst && src);
	char *ret = dst;
	while (n-- && *src)
	{
	  *dst++ = *src++; 
	}
	return ret;
}
int main()
{
	char str1[20] = {0};
	char *str2= "abcde";
	my_strncpy(str1, str2, 4);
	printf("%s\n", str1);
	system("pause");
	return 0;
}