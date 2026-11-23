#include"student.h"
void add_record(SLL **ptr)
{
    SLL *new, *temp;
    int roll = 1;
    int found=0;
    // Allocate memory dynamically
    new=malloc(sizeof(SLL));
    // Find the smallest positive roll number that is not used
    do
    {
        found = 0;
        temp = *ptr;
	while (temp)
        {
            if (temp->rollno == roll)
            {
                found = 1;
                roll++;
                break;
            }
	    temp = temp->next;
        }
    } while (found);
 // Assign roll number
    new->rollno = roll;
    //Get student details
    printf("Enter student name and percentage\n");
    scanf(" %s %f", new->name,&new->percentage);
    new->next = 0;
    // Insert node into linked list
    if (*ptr == NULL)
    {
        *ptr= new;
    }
    else
    {
	temp = *ptr;
    	while (temp->next != NULL)
        {
            temp = temp->next;
        }
    	temp->next = new;
    }
    printf("Record added successfully!\n");
    printf("Assigned Roll Number: %d\n", new->rollno);
}
