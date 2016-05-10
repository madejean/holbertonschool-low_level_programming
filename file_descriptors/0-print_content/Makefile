CC = gcc
CFLAGS = -Wall -Werror -Wextra -pedantic
FILES = 0-print_content.c print_char.c
OBJECTS = $(patsubst %.c,%.o,$(FILES))
EXEC = 0-print_content

all: $(EXEC)

$(EXEC): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(EXEC)

0-print_content.o: 0-print_content.c
	$(CC) $(CFLAGS) -c 0-print_content.c

print_char.o: print_char.c
	$(CC) $(CFLAGS) -c print_char.c

clean:
	rm -f $(OBJECTS) $(EXEC)
