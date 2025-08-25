#include <stdio.h>

int main(void)
{
	short sVar = 32000;
	int   iVar = -2140000000;

	unsigned short int   usVar = 65000;
	unsigned int         uiVar = 4280000000;

	printf("저장값: %d %d\n", sVar, iVar);
	printf("저장값: %u %u\n", usVar, uiVar);

	long long dist1 = 2720000000000;
	__int64 dist2 = 450000000000;

	printf("지구와 천왕성 간의 거리(km): %lld\n", dist1);
	printf("태양과 해왕성 간의 거리(km): %lld\n", dist2);

	return 0;
}