#include"student.h"
void delete_all_records(SLL **ptr)
{
    SLL *del;
    if(*ptr == NULL)
    {
        printf("No records available\n");
        return;
    }
    del = *ptr;  // Initially del points to the first node
    while(del != NULL)
    {
        *ptr = del->next;  // Move head to next node
        free(del);         // Free current node
        del = *ptr;        // Move del to next node
    }
    *ptr = NULL;
    printf("All records deleted successfully\n");
}
