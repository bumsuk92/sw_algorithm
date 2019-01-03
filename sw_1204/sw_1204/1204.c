#include <stdio.h>
#define testTime 1000

int main() {
	int T;
	int T_num;

	scanf("%d", &T);

	for (int i = 0; i < T; i++)
	{
		scanf("%d", &T_num);

		int input_num = 0;
		int arr1[testTime] = { 0, };
		int arr2[testTime] = { 0, };
		int max = 0;
		int max_score = 0;

		for (int j = 0; j < testTime; j++)
		{
			scanf("%d", &input_num);
			arr1[j] = input_num;
		}

		for (int j = 0; j < testTime; j++)
		{
			int cnt = 0;
			for (int k = 0; k < testTime; k++)
			{
				if (arr1[j] == arr1[k]) {
					cnt++;
				}
			}

			arr2[j] = cnt;
		}

		max = arr2[0];
		for (int j = 0; j < testTime; j++)
		{
			if (max > arr2[j]) {
				max = max;
			}
			else {
				max = arr2[j];
			}
		}

		for (int j = 0; j < testTime; j++)
		{
			if (arr2[j] == max)
			{
				if (arr1[j] > max_score)
				{
					max_score = arr1[j];
				}
			}
		}
		printf("#%d %d\n", T_num, max_score);

	}

	return 0;
}