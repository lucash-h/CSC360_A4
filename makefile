# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall

# Target executable
TARGET = assignment4

# Source files
SRCS = assignment4.c functions.c

# Object files
OBJS = $(SRCS:.c=.o)

# Build target
$(TARGET): $(OBJS)
    $(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

# Pattern rule for object files
%.o: %.c functions.h
	$(CC) $(CFLAGS) -c $< -o $@

# Clean target
clean:
    rm -f $(TARGET) $(OBJS)