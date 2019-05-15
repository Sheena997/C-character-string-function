#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int my_strncmp(const char *str1, const char *str2, size_t n)
{
	assert(str1 && str2);
	while (n--)
	{
		if (*(unsigned char*)str1 < *(unsigned char*)str2)
		{
			return -1;
		}
		else if (*(unsigned char*)str1 > *(unsigned char*)str2)
		{
			return 1;
		}
		else if (*(unsigned char*)str1 == *(unsigned char*)str2)
		{
			++str1;
			++str2;
		}
	}
	return 0;
}
int main()
{
	char str1[] = "aaavc";
	char str2[] = "aaacd";
	int ret = 0;
	ret = my_strncmp(str1, str2, 3);
	if (ret == 1)
	{
		printf("str1>str2\n");
	}
	else if (ret == -1)
	{
		printf("str1<str2\n");
	}
	else if (ret == 0)
	{
		printf("str1=str2\n");
	}
	system("pause");
	return 0;
}