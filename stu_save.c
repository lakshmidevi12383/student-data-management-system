
#include "student.h"
// Save student records
void save_records(SLL *ptr)
{
    FILE *fp;
    SLL *temp;
    fp = fopen("student.dat", "w");
    if(fp == NULL)
    {
        printf("File is not found\n");
        return;
    }
    temp = ptr;
    while(temp != NULL)
    {
        fprintf(fp, "%d %s %f\n", temp->rollno,temp->name, temp->percentage);
        temp = temp->next;
    }
    fclose(fp);
    printf("Student records saved successfully\n");
}
// Load student records
/*void load_records(SLL **ptr)
{
    FILE *fp;
    SLL *new, *temp;
    int roll;
    char name[50];
    float percentage;
    fp = fopen("student.dat", "r");
    if(fp == NULL)
    {
        printf("No previous records found\n");
        return;
    }
    while(fscanf(fp, "%d %s %f",&roll, name, &percentage) == 3)
    {
        new = malloc(sizeof(SLL));
        if(new == NULL)
        {
            printf("Memory allocation failed\n");
            break;
        }
        new->rollno = roll;
        strcpy(new->name, name);
        new->percentage = percentage;
        new->next = NULL;
        if(*ptr == NULL)
        {
            *ptr = new;
        }
        else
        {
            temp = *ptr;
            while(temp->next != NULL)
                temp = temp->next;
            temp->next = new;
        }
    }
    fclose(fp);
    printf("Student records loaded successfully\n");
}*/

