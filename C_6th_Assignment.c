#include <stdio.h>

int main(void)
{
	int i, ch;

	printf("1���� 9���� ���� �Է��Ͻÿ�:  ");
	ch = getchar() - '0';
	
	for(i = 0; i < ch ; i++) 
	{
		printf("%d ", ch);
	}
	
	return 0;
}