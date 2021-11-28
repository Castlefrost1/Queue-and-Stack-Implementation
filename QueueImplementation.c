// Aldi Julyan Sugiyarto - 2301852455

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

// The maximum index value for array (change the number as desired)
#define MAX 8


int intArray[MAX];
int front = 0;
int rear = -1;
int itemCount = 0;

int peek() {
   return intArray[front];
}

bool isEmpty() {
   return itemCount == 0;
}

bool isFull() {
   return itemCount == MAX;
}

int size() {
   return itemCount;
}  

void insert(int data) {

   if(!isFull()) {
	
      if(rear == MAX-1) {
         rear = -1;            
      }       

      intArray[++rear] = data;
      itemCount++;
   }
}

int removeData() {
   int data = intArray[front++];
	
   if(front == MAX) {
      front = 0;
   }
	
   itemCount--;
   return data;  
}

int main() {
	int arr = 0;
	int pp = 0;
	while (pp != -1){
		printf("Masukkan input (1 = queue, 0 = dequeue, -1 = displayqueue, exit) : ");
		scanf("%d",&pp);
		if (pp == 1){
			int val = 0;
			while (val != -1){
				printf("Input Value to be inserted (-1 to stop): ");
				scanf("%d",&val);
				if (val != -1){
					insert(val);	
   					if(isFull()) {
    				printf("Queue is full!\n");   
   					}
				} else {
				printf("\nInsert stopped\n");
				}
			}
		}
		if (pp == 0){
			// remove one item 
			if (intArray[front] == 0){
				printf("QUEUE UNDERFLOW!\n\n");
			}else{
				int num = removeData();
				printf("Element removed: %d\n",num);
			}
   		}
//   		if (pp == 9){
//   			printf("Element at front: %d\n",peek());
//  			printf("----------------------\n");
//			printf("Queue:  ");
//			while(!isEmpty()) {
//    			int n = removeData(); 
//				intArray[arr] = n;
//				arr++;        
//   			}   
//			int loop;
//			for (loop = 0; loop < MAX; loop++){
//				printf("%d ", intArray[loop]);
//			}
//		int arr = 0;
//		printf("\n");
//		}
	}
	printf("Queue:  ");
   	while(!isEmpty()) {
    	int n = removeData(); 
		printf("%d ",n);         
   	}   
}
