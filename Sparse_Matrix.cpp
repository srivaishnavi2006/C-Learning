//Sparse Matrix Representation using linked lists 
#include<stdio.h>
#include<stdlib.h>
struct node{
	int row,col,data;
	struct node *next;
};
typedef struct node Node;
// Head as global variabe
Node *head = NULL;
void insert_at_tail(int r,int c,int val){
	// Create a new node
	Node *newNode = (Node *)malloc(sizeof(Node));
	newNode->row = r;
	newNode->col = c;
	newNode->data = val;
	newNode->next = NULL;
	if(head == NULL){
		head = newNode;
	}
	else{
		Node *temp = head;
		while(temp->next != NULL){
			temp = temp->next;
		}
		temp->next = newNode;
	}
}
void display(){
	printf("Non-Zero elements of the given space matrix are: \n");
	printf("Row\tColumn\tValue\n");
	Node *temp = head;
	while(temp != NULL){
		printf("%d\t%d\t%d\n",temp->row,temp->col,temp->data);
		temp = temp->next;
	}
}
int main ()
{
	int r,c;               // No of rows and colimns
	printf("Enter number of rows and columns: ");
	scanf("%d %d",&r,&c);  //Reading
	int mat[r][c];         // Declaring a matrix of r rows and c columns 
	printf("Enter matrix elements:\n");
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			scanf("%d",&mat[i][j]); // Reading elements in matrix
		}
	}
	// Running a loop on it
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			if(mat[i][j] != 0){
				insert_at_tail(i,j,mat[i][j]);
			}
		}
	}
	display();
}
