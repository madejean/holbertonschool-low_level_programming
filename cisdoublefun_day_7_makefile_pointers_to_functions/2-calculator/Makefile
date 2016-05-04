CC= gcc
CFLAGS= -Wall -Werror -Wextra -pedantic 
FILES= op_functions.c get_op_func.c main.c
OBJECTS= $(SOURCES: .c=.o)
EXC= 2-calculator

all: $(EXC)

$(EXC): $(FILES)
	$(CC) $(CFLAGS) $(FILES) -o $(EXC)

clean:
	rm -f $(FILES) $(EXC)
