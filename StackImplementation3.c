// Aldi Julyan Sugiyarto - 2301852455
#include <stdio.h>
#include <stdlib.h>

struct stack {
	int data, val;
	struct stack *next;
}*top, *temp;


//insertion
void push (int val)
{
		struct stack *temp;
		temp = (struct stack*) malloc (sizeof(struct stack*));
		temp -> data = val;
		if (top == NULL) {
			top = temp;
			top -> next = NULL;
		} else {
			temp -> next = top;
			top = temp;
		}
}


//deletion
void pop ()
{
	struct stack *temp;
	temp = top;
	if (top == NULL) {
		printf("\nSTACK UNDERFLOW\n");
	} else {
		top = top -> next;
		printf("\nThe deleted value : %d\n", temp -> data);
		free(temp);
		temp = NULL;
	}
}


//print list
void print_list()
{
//	int val;
//	struct stack *top = val;
temp = top;
	while(temp != NULL)
	{
		printf("%d",temp -> data);
		temp = temp -> next;
		printf(" - ");
	}
	printf("NULL\n");
}


// top
void first ()
{
	if (top == NULL)
	{
		printf("NULL\n\n");
	} else {
		printf("\nTop = %d\n\n",top -> data);
	}
}



int main()
{
// function implementation
int pp = 0;
while (pp != -1)
{
	printf("Masukkan input (1 = push, 0 = pop, 9 = check top, -1 = exit) : ");
	scanf("%d",&pp);
	if (pp == 1)
	{
		int val = 0;
		while (val != -1)
		{
			printf("Input Value to be inserted (-1 to stop): ");
			scanf("%d",&val);
			//printf("\nTop = %d\n",top);
			if (val != -1)
			{
				push(val);
				print_list();
			} else {
				printf("\nInsert stopped\n");
			}
		}
	print_list();
	}
	if (pp == 0)
	{
		pop();
		print_list();
	}
	if (pp == 9)
	{
		first();
	}
}


return 0;
}
