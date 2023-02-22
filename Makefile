APP_NAME= Hello_Module
BIN= app
OUT= build
GCC= gcc
FLAGS= -std=c11 -Wall -Wextra -O2 -W -s -pedantic
LINKS= -I src/headers
INCLUDES= 

_OBJ = point.o main.o 
OBJ = $(patsubst %,$(OUT)/%,$(_OBJ))

$(OUT)/%.o: src/%.c
	$(GCC) -c -o $@ $< $(FLAGS) $(LINKS)

all:
	make $(OBJ) && make combine && make run

main: $(OBJ)
	$(GCC) -o ${BIN}/${APP_NAME} $^ $(FLAGS) $(LINKS)

combine:
	$(GCC) ${OUT}/point.o ${OUT}/main.o -o ${BIN}/${APP_NAME} $(FLAGS) $(LINKS)

run:
	./${BIN}/${APP_NAME}
