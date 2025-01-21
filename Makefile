mon_programme: main.o fonctionTD1.o
	gcc -o mon_programme main.o fonctionTD1.o

main.o: main.c
	gcc -c main.c

fonctionTD1.o: fonctionTD1.c
	gcc -c fonctionTD1.c

run: mon_programme
	.\mon_programme.exe