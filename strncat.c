#define _CRT_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

char *my_strncat(char *dst, const char *src, size_t n)
{
	assert(dst && src);
	char *ret = dst;
	while (*dst)
	{
		dst++;
	}
	while (n-- && *src)
	{
		*dst++ = *src++;
	}
	*dst = '\0';
	return ret;
}
int main()
{
	char str1[20] = "abcd";
	char str2[10] = "efh";
	my_strncat(str1, str2, 2);
	printf("%s\n", str1);
	system("pause");
	return 0;
}