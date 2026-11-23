#include"student.h"
int main()
{
	char op;
	 int c=0;
	SLL *headptr=0;
	while(1)
	{
		printf("****STUDENT RECORD MENU******\n");
		printf("A/a.Add a new record\nD/d.Delete a record\nS/s.show the list\nM/m.Modify the a record\nV/v.save records\nE/e.Exit\nT/t.sort the list\nL/l.Delete all records\nR/r.Reverse the list\n");
		printf("Enter your choice\n");
		scanf(" %c",&op);
		if(op>='a' && op<='z')
			op=op^32;
		switch(op)
		{
			case 'A':add_record(&headptr);
				 break;
			case 'S':display(headptr);
				 break;
			case 'D':delete_record(&headptr);
				 break;
			case 'M':modify_record(headptr);
				 break;
			case 'V':save_records(headptr);
				 break;
			case 'T':sort_records(headptr);
				 break;
			case'L':delete_all_records(&headptr);
				break;
			case 'R':reverse_links(&headptr);
				 break;
			case 'E':exit(0);
		}
	}
}
