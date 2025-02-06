Programme: main.o Horloge.o alerte.o event.o
	gcc -o Programme main.o Horloge.o

main.o: main.c
	gcc -c main.c

Horloge.o: Horloge.c
	gcc -c Horloge.c

alerte.o: alerte.c
	gcc -c alerte.c

event.o: event.c
	gcc -c event.c

run: Programme
	.\Programme.exe