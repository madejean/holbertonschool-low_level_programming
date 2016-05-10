CC = gcc
CFLAGS = -Wall -Werror -Wextra -pedantic
FILES = 2-print_permissions.c print_char.c
OBJECTS = $(patsubst %.c,%.o,$(FILES))
EXEC = 2-print_permissions

all: $(EXEC)

$(EXEC): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(EXEC)

2-print_permissions.o: 2-print_permissions.c
	$(CC) $(CFLAGS) -c 2-print_permissions.c

print_char.o: print_char.c
	$(CC) $(CFLAGS) -c print_char.c

clean:
	rm -f $(OBJECTS) $(EXEC)
