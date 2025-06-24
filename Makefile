CROSS_COMPILE :=

CC := ${CROSS_COMPILE}gcc
LD := ${CROSS_COMPILE}ld

CCFLAGS := -lncurses
LDFLAGS :=

me: main.c
	${CC} ${CCFLAGS} main.c -o me

clean:
	rm -rf *.o *.a *.so me

.PHONY = clean
