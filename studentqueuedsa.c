#include<stdio.h>

struct student{
	int roll;
	char name[100];
	float cg;
};

struct queue{
	int front,rear;
	struct student s[10];
};

struct queue q = {0,-1};

int isempty(struct queue q){
	if(q.rear<q.front)
		return 1;
	else 
		return 0;
}
int isfull(struct queue q){
	if(q.rear == 3)
		return 1;
	else
		return 0;
}
void in(struct queue q,struct student s){
	if(isfull(q)){
		printf("Queue is fulled");
	}
	else{
		q.rear++;
		q.s[q.rear] = s ;
	}
	
}

int main(){
	struct student s;
	printf("Enter the student details ..:\n");
	do{
		scanf("%d\n%s%f",&s.roll,&s.name,&s.cg);
		in(q,s);
	}while(!isfull(q));
	

}


