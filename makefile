CC = gcc
CFLAGS = -Wall
TARGET = vice
SOURCES = $(wildcard *.c)

all: $(TARGET)

$(TARGET): $(SOURCES)
	$(CC) $(CFLAGS) $(SOURCES) -o $(TARGET)

clean:
	rm -f $(TARGET)
