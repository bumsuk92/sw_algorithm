#include <stdio.h>

int main() {

	int T;
	
	scanf("%d", &T);

	for (int tc = 0; tc < T; tc++)
	{
		int Num;
		int K;
		char arrChar[7];
		int arrNum[6];

		scanf("%s %d", arrChar, &K);

		for (int i = 0; i < 6; i++)
		{
			if (arrChar[i] == '\0')
			{
				break;
			}
			else
			{
				arrNum[i] = (int)arrChar[i] - 48;
			}
		}

		int index = 0;
		int big = arrNum[0];
		int small = arrNum[0];
		int bigI = 0;
		int smallI = 0;

		while (K != 0)
		{
			for (int i = index; i < 6; i++)
			{
				if (arrNum[i] > big)
				{
					big = arrNum[i];
					bigI = i;
					printf("big: %d\n", big);
				}
			}

			for (int i = index; i < 6; i++)
			{
				if (arrNum[i] < small)
				{
					small = arrNum[i];
					smallI = i;
					printf("small: %d\n", small);
				}
			}

			if (smallI < bigI)
			{
				int temp = arrNum[smallI];
				arrNum[smallI] = arrNum[bigI];
				arrNum[bigI] = temp;
				K--;
			}
			else
			{
				index++;
			}
		}

		printf("---Final---\n");
		for (int i = 0; i < 6; i++)
		{
			printf("[%d]", arrNum[i]);

		}

	}


	return 0;
}