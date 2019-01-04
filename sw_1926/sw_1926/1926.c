#include <stdio.h>


void main() {
	int num;

	scanf("%d", &num);

	for (int i = 1; i <= num; i++)
	{
		int cnt = 0;

		if ((i % 1000) != 0 && (i % 100) != 0 && (i%10) != 0 && (i % 10) % 3 == 0) {
			//printf("첫번째 자리수");
			cnt++;
		}
		
		if ((i / 1000) != 1 && (i / 100) != 1 && (i / 10) != 0 && ((i / 10) % 10) % 3 == 0) {
			//printf("두번째 자리수");
			cnt++;
		}

		if ((i / 10) != 0 && ((i / 10) / 10) != 0 && ((i / 10) / 10) % 3 == 0) {
			//printf("세번째 자리수");
			cnt++;
		}
		//printf("cnt 값: %d", cnt);

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