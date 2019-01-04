#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)
#define LENGTH_ARR 1000000

struct LinkedList {
	int *cur;
	int *head;
	int *tail;
}LinkedList;

struct Node {
	int *next;
	int data;
}Node;

void Create_Node(struct LinkedList* list, int data) {
	struct Node *newNode = malloc(sizeof(struct Node));
	newNode->data = data;
	newNode->next = NULL;
}

int main() {
	int T;
	int N;
	struct LinkedList *list1 = malloc(sizeof(struct LinkedList));


	scanf("%d", &T);

	for (int i = 0; i < T; i++)
	{
		scanf("%d", &N);

		for (int j = 0; j < N; j++)
		{
			scanf("%d", &arr[j]);
		}

		printf("--출력합니다--\n");
		for (int j = 0; j < N; j++)
		{
			printf("%d ", arr[j]);
		}

	}


	return 0;
}