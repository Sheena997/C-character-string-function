#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
size_t my_strlen(const char *str1)
{
	size_t count = 0;
	while (*str1)
	{
		count++;
		str1++;
	}
	return count;
}
int main()
{
	const char *str = "abcdef";
	printf("%d\n", my_strlen(str));
	system("pause");
	return 0;
}