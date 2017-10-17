#include <stdio.h>

int main(void)
{
	int i, ch;

	printf("1부터 9까지 수를 입력하시오:  ");
	ch = getchar() - '0';
	
	for(i = 0; i < ch ; i++) 
	{
		printf("%d ", ch);
	}
	
	return 0;
}