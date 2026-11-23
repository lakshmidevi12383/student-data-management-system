#include"student.h"
void delete_record(SLL **ptr)
{
	char ch,dname[20];
	int num;
	SLL *del=*ptr,*prev=0;
	printf("R/r:enter rollno to delete\nN/n:enter name to delete\n");
	scanf(" %c",&ch);
	if(ch>='A' && ch<='Z')
		ch=ch^32;
	switch(ch)
	{
		case 'r':printf("enter the rollno\n");
			 scanf("%d",&num);
			 while(del)
			 {
				 if(del->rollno==num)
				 {
					 if(*ptr==del)
					 {
						 *ptr=del->next;
					 }
					 else
					 {
						 prev->next=del->next;
					 }
					 free(del);
					 printf("record deleted successfully\n");
					 return;
				 }
				 prev=del;
				 del=del->next;
			 }
			 printf("Rollno not found\n");
			 break;
		case 'n':printf("enter the name to delete\n");
			 scanf(" %s",dname);
			 while(del)
			 {
				 if(strcmp(dname,del->name)==0)
				 {
					 if(*ptr==del)
					 {
						 *ptr=del->next;
					 }
					 else
					 {
						 prev->next=del->next;
					 }
					 free(del);
					 printf("Record deleted successfully\n");
					 return;
				 }
				 prev=del;
				 del=del->next;
			 }
			 printf("Name not found\n");
			 break;
	}
}
