# A Test For Push On A New Branch
axis.o : axiscli.c axiscli.h
	gcc -c axiscli.c axiscli.h -o axis.o

axis.elf : axis.o
	ld axis.o -o axis.elf