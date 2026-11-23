#include "student.h"
void reverse_links(SLL **ptr)
{
    int c, i;
    SLL **a;
    SLL *t;
    if (*ptr == NULL)
    {
        printf("No records found\n");
        return;
    }
    c = countNode(*ptr);  // Count the nodes
    if (c > 1)
    {
        a = malloc(sizeof(SLL *) * c); // Allocate array of pointers
        t = *ptr;  // Starting address
        for (i = 0; i < c; i++)
        {
            a[i] = t;       // Store node address
            t = t->next;    // Visit next node
        }
        // Reverse the links
        for (i = c - 1; i > 0; i--)
        {
            a[i]->next = a[i - 1];
        }
        a[0]->next = NULL;  // Update last node
        *ptr = a[c - 1];    // Update head pointer
        free(a);
    }
    printf("List reversed successfully\n");
}
int countNode(SLL *ptr)
{
	int count=0;
	while(ptr)
	{
		count++;
		ptr=ptr->next;
	}
	return count;
}

