#include <stdio.h>

int main() {
	int T;

	scanf("%d", &T);
	for (int tc = 0; tc < T; tc++)
	{
		int arr[2];
		int Cheaper = 0;
		int P, Q, R, S, W;		//(1이상 10000이하)
		scanf("%d %d %d %d %d", &P, &Q, &R, &S, &W);

		arr[0] = W * P;

		if (W <= R)
		{
			arr[1] = Q;
		}
		else
		{
			arr[1] = Q + (W - R)*S;
		}

		if (arr[0] > arr[1])
			Cheaper = arr[1];
		else
			Cheaper = arr[0];

		printf("#%d %d\n", tc+1, Cheaper);

	}

	return 0;
}