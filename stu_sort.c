//Sorting 

#include "student.h"
void sort_records(SLL *ptr)
{
    SLL *temp, *next;
    int count = 0, i, j;
    int roll;
    float percentage;
    char name[50], ch;
    if(ptr == NULL)
    {
        printf("List is empty\n");
        return;
    }
    // Count the nodes
    temp = ptr;
    while(temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    printf("N/n : Sort with name\n");
    printf("P/p : Sort with percentage\n");
    printf("Enter your choice\n");
    scanf(" %c", &ch);
    if(ch >= 'a' && ch <= 'z')
        ch = ch - 32;

    if(ch != 'N' && ch != 'P')
    {
        printf("Invalid choice\n");
        return;
    }
    // Sorting based on count
    for(i = 0; i < count - 1; i++)
    {
        temp = ptr;
        for(j = 0; j < count - i - 1; j++)
        {
            next = temp->next;
            if((ch == 'N' && strcmp(temp->name, next->name) > 0) ||
               (ch == 'P' && temp->percentage < next->percentage))
            {
                // Swap roll number
                roll = temp->rollno;
                temp->rollno = next->rollno;
                next->rollno = roll;

                // Swap name
                strcpy(name, temp->name);
                strcpy(temp->name, next->name);
                strcpy(next->name, name);

                // Swap percentage
                percentage = temp->percentage;
                temp->percentage = next->percentage;
                next->percentage = percentage;
            }
            temp = temp->next;
	}
    }
    printf("Records sorted successfully\n");
}

