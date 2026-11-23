#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct student
{
	int rollno;
	char name[50];
	float percentage;
	struct student *next;
}SLL;
void add_record(SLL **);
void display(SLL *);
void delete_record(SLL **);
void modify_record(SLL *);
void save_records(SLL *);
void sort_records(SLL *);
int countNode(SLL *);
void delete_all_records(SLL **);
void reverse_links(SLL **);
