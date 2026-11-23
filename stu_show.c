#include"student.h"
void display(SLL *ptr)
{
	if(ptr==0)
	{
		printf("No records found\n");
		return;
	}
	while(ptr)
	{
		printf("%d %s %f\n",ptr->rollno,ptr->name,ptr->percentage);
		ptr=ptr->next;
	}
}

