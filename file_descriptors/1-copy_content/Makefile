CC = gcc
CFLAGS = -Wall -Werror -Wextra -pedantic
FILES = 1-copy_content.c print_char.c
OBJECTS = $(patsubst %.c,%.o,$(FILES))
EXEC = 1-copy_content

all: $(EXEC)

$(EXEC): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(EXEC)

1-copy_content.o: 1-copy_content.c
	$(CC) $(CFLAGS) -c 1-copy_content.c

print_char.o: print_char.c
	$(CC) $(CFLAGS) -c print_char.c

clean:
	rm -f $(OBJECTS) $(EXEC)
