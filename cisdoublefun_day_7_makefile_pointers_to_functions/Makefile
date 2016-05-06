CC = gcc
CFLAGS = -Wall -Wextra -Werror -pedantic -c
SRC = holbertonschool.h
ODIR = src
FILES = absolute.c positive_or_not.c print_string.c str_len.c cap_string.c power.c reverse_string.c swap_int.c first_digit.c print_array.c square_root.c uppercase.c print_char.c strings_compare.c uppercase_string.c lowercase.c print_number.c string_to_integer.c
SOURCES = $(foreach file, $(FILES), $(ODIR)/$(file))
OBJECTS = $(patsubst %.c, %.o, $(SOURCES))
EXECUTABLE = libholbertonschool.a

all : $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE) : $(OBJECTS)
	ar -rc $(EXECUTABLE) $(OBJECTS) -o $@

$(OBJECTS): $(SOURCES)
	$(CC) $(CFLAGS) $< -o $@

clean: rm -f $(OBJECTS) $(EXECUTABLE)

re: clean $(OBJECTS)
