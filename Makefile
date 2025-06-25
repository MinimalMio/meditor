CROSS_COMPILE :=
CC := ${CROSS_COMPILE}gcc
LD := ${CROSS_COMPILE}ld

CCFLAGS := -g -lncurses

BUILD_DIR := build
INSTALL_DIR := /usr/local/bin
TARGET := ${BUILD_DIR}/me

SRC_LIST := src/main.c

${TARGET}: ${SRC_LIST} | ${BUILD_DIR}
	${CC} ${CCFLAGS} ${SRC_LIST} -o ${TARGET}

${BUILD_DIR}:
	@mkdir -p $@

clean:
	@rm -rf ${BUILD_DIR}

.PHONY: clean
