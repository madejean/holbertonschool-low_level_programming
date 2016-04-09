CC= gcc
CFLAGS= -Wall -Werror -Wextra -pedantic
FILES= op_functions.c get_op_func.c main.c
OBJECTS= $(patsubst %.c, %.o, $(CFILES))
EXC= 2-calculator

2-calculator: $(EXC)

$(EXC): $(FILES)
	$(CC) $(CFLAGS) $(FILES) -o $(EXC)

main.o: main.c
	$(CC) $(CFLAGS) -c main.c

get_op_func.o: get_op_func.c
	$(CC) $(CFLAGS) -c get_op_func.c

op_functions.o: op_functions.c
	$(CC) $(CFLAGS) -c op_functions.c

clean:
	rm -f $(FILES) $(EXC)
