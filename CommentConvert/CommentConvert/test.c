#define _CRT_SECURE_NO_WARNINGS 1
#include "CommentConvert.h"
void test()
{
	FILE * pfRead = NULL;
	FILE * pfWrite = NULL;
	pfRead = fopen("input.c", "r");
	if (pfRead == NULL)
	{
		perror("Error open for read");
		exit(EXIT_FAILURE);
	}
	pfWrite = fopen("output.c", "w");
	if (pfWrite == NULL)
	{
		perror("Error open for write");
		exit(EXIT_FAILURE);
	}
	//×¢ÊÍ×ª»»
	CommentConvert(pfRead, pfWrite);
	fclose(pfRead);
	pfRead = NULL;
	fclose(pfWrite);
	pfWrite = NULL;
}
int main()
{
	test();
	return 0;
}