student:stu_main.o stu_show.o stu_add.o stu_delete.o stu_mod.o stu_save.o stu_sort.o stu_rev.c stu_delete_all.o 
	cc stu_main.o stu_show.o stu_add.o stu_delete.o stu_mod.o stu_save.o stu_sort.o stu_rev.c stu_delete_all.o  -o student
stu_main.o:stu_main.c
	cc -c stu_main.c
stu_show.o:stu_show.c
	cc -c stu_show.c
stu_add.o:stu_add.c
	cc -c stu_add.c
stu_delete.o:stu_delete.c
	cc -c stu_delete.c
stu_mod.o:stu_mod.c
	cc -c stu_mod.c
stu_save.o:stu_save.c
	cc -c stu_save.c
stu_sort.o:stu_sort.c
	cc -c stu_sort.c
stu_rev.o:stu_rev.c
	cc -c stu_rev.c
stu_delete_all.o:stu_delete_all.c
	cc -c stu_delete_all.c
clear:
	@echo "cleaning up..."
	@rm -rv *.o

