#include <stdio.h>


void main() {
	int num;

	scanf("%d", &num);

	for (int i = 1; i <= num; i++)
	{
		int cnt = 0;

		if ((i % 1000) != 0 && (i % 100) != 0 && (i%10) != 0 && (i % 10) % 3 == 0) {
			//printf("ù��° �ڸ���");
			cnt++;
		}
		
		if ((i / 1000) != 1 && (i / 100) != 1 && (i / 10) != 0 && ((i / 10) % 10) % 3 == 0) {
			//printf("�ι�° �ڸ���");
			cnt++;
		}

		if ((i / 10) != 0 && ((i / 10) / 10) != 0 && ((i / 10) / 10) % 3 == 0) {
			//printf("����° �ڸ���");
			cnt++;
		}
		//printf("cnt ��: %d", cnt);

		if (cnt == 0)
			printf("%d ", i);
		else if (cnt == 1)
			printf("- ");
		else if (cnt == 2)
			printf("-- ");
		else if (cnt == 3)
			printf("--- ");
	}

}