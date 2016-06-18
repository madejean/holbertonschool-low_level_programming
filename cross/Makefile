CC = gcc
CFLAGS = -Wall -Werror -Wextra -pedantic
SRC = main.c print_char.c string_to_int.c
OBJ = $(SRC:.c=.o)
EXEC = cross

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(EXEC)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(EXEC)

re:
	rm -f $(OBJ) $(EXEC)
