
SRCDIR = ../SRC
INCLUDEDIR = ../Header
OBJDIR = ../Make
BINDIR = ../bin
CFLAGS = -c -g -Wall -I${INCLUDEDIR}



all:

	gcc ${CFLAGS}  ${SRCDIR}/main.c -o ${OBJDIR}/main.o
	gcc ${CFLAGS}  ${SRCDIR}/utility.c -o ${OBJDIR}/utility.o
	gcc ${CFLAGS}  ${SRCDIR}/formula.c -o ${OBJDIR}/formula.o
	gcc ${OBJDIR}/main.o ${OBJDIR}/utility.o ${OBJDIR}/formula.o -o ${BINDIR}/smsh.bin

clean:

	gcc ${OBJDIR}/main.o ${OBJDIR}/utility.o ${OBJDIR}/formula.o ${BINDIR}/smsh.bin





