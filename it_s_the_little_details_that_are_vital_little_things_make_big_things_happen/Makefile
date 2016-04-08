CC = gcc
CFLAGS  = -c -Wall -pedantic -Werror -Wextra
SRC = holbertonschool.h
ODIR = src
FILES = 0-absolute.c 1-cap_string.c 2-square_root.c 4-positive_or_not.c 0-contact_strings.c 1-nconcat_strings.c 2-string_copy.c 4-reverse_string.c 0-first_digit.c 1-power.c 2-str_len.c 4-strings_compare.c 0-lowercase.c 1-swap_int.c 3-is_prime_number.c 5-reverse_array.c 0-print_number.c 1-uppercase.c 3-print_string.c 5-string_to_integer.c 0-uppercase_string.c 2-print_array.c 3-string_ncopy.c
SOURCES = $(foreach file, $(FILES), $(ODIR)/$(file))
OBJECTS = $(patsubst %.c, %.o, $(SOURCES))
EXECUTABLE = libholbertonschool.a

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	ar -rcs $(EXECUTABLE) $(OBJECTS) -o $@
src/%.o: src/%.c
	$(CC) $(CFLAGS) $< -o $@
clean:
	rm -f $(OBJECTS) $(EXECUTABLE)
re: clean all
