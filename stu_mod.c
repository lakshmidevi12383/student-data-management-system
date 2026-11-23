#include "student.h"
void modify_record(SLL *ptr)
{
    char ch, name[50];
    int roll, count = 0;
    float percentage;
    SLL *temp, *found = NULL;
    if(ptr == NULL)
    {
        printf("No student records available\n");
        return;
    }
    printf("Enter which record to search for modification\n");
    printf("R/r : Search by roll number\n");
    printf("N/n : Search by name\n");
    printf("P/p : Search by percentage\n");
    scanf(" %c", &ch);
    if(ch >= 'a' && ch <= 'z')
        ch = ch - 32;
    switch(ch)
    {
        case 'R':printf("Enter the rollno\n");
            scanf("%d", &roll);
            temp = ptr;
            while(temp != NULL)
            {
                if(temp->rollno == roll)
                {
                    found = temp;
                    break;
                }

                temp = temp->next;
            }
            break;
      case 'N': printf("Enter the name\n");
            scanf(" %s", name);
   	    temp = ptr;
            while(temp != NULL)
            {
                if(strcmp(temp->name, name) == 0)
                {
                    count++;
                    found = temp;
                }
                temp = temp->next;
            }
            if(count > 1)
            {
                temp = ptr;
                printf("Matching records:\n");
                while(temp != NULL)
                {
                    if(strcmp(temp->name, name) == 0)
                    {
                        printf("%d %s %.2f\n",  temp->rollno,temp->name, temp->percentage);
                    }
                    temp = temp->next;
                }
                printf("Enter roll number to modify\n");
                scanf("%d", &roll);
                found = NULL;
                temp = ptr;
                while(temp != NULL)
                {
                    if(temp->rollno == roll && strcmp(temp->name, name) == 0)
                    {
                        found = temp;
                        break;
                    }
                    temp = temp->next;
                }
            }
            break;
        case 'P':printf("Enter the percentage\n");
            scanf("%f", &percentage);
            temp = ptr;
            count = 0;
            found = NULL;
            while(temp != NULL)
            {
                if(temp->percentage == percentage)
                {
                    count++;
                    found = temp;
                }
                temp = temp->next;
            }
            if(count > 1)
            {
                temp = ptr;
                printf("Matching records:\n");
                while(temp != NULL)
                {
                    if(temp->percentage == percentage)
                    {
                        printf("%d %s %.2f\n",temp->rollno,temp->name,temp->percentage);
                    }
                    temp = temp->next;
                }
                printf("Enter roll number to modify\n");
                scanf("%d", &roll);
                found = NULL;
                temp = ptr;
                while(temp != NULL)
                {
                    if(temp->rollno == roll && temp->percentage == percentage)
                    {
                        found = temp;
                        break;
                    }
                    temp = temp->next;
                }
            }
            break;
        default:
            printf("Invalid choice\n");
            return;
    }
    if(found == NULL)
    {
        printf("Requested record not available\n");
        return;
    }
    printf("Current student details:\n");
    printf("Roll number: %d\n", found->rollno);
    printf("Name: %s\n", found->name);
    printf("Percentage: %.2f\n", found->percentage);
    printf("Enter updated name and percentage\n");
    scanf("%49s %f", found->name, &found->percentage);
    printf("Record modified successfully\n");
    printf("Roll number: %d\n", found->rollno);
    printf("Name: %s\n", found->name);
    printf("Percentage: %.2f\n", found->percentage);
}


