# Compiler
CC = gcc
# Compiler flags
CFLAGS = -g -Wall
# Source file(s)
SOURCE = src/pcc
# Output file
TARGET = bin/pcc
# Include files
INCLUDES =

all: $(TARGET)

$(TARGET): $(SOURCE).c
	$(CC) $(CFLAGS) -o $(TARGET) $(SOURCE).c $(INCLUDES)

clean:
	$(RM) $(TARGET)

