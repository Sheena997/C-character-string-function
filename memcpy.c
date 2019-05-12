#define _CRT_SERCURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

void *my_memcpy(void *dst, const void *src, size_t count)
{
	assert(dst && src);
	char *ch_dst = (char *)dst;
	const char *ch_src = (const char *)src;
	size_t i = 0;
	for (i = 0; i < count; ++i)
	{
		ch_dst[i] = ch_src[i];
	}
	return dst;
}
int main()
{
	char str1[10];
	char *str2 = "abcde\n";
	my_memcpy(str1, str2, 6);
	printf("%s", str1);
	system("pause");
	return 0;
}