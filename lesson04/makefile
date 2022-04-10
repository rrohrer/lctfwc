CC = clang

CCFLAGS = \
	-Werror \
	-Wall \
	-Wextra \
	-std=c11

LDFLAGS = \

OUTPATH = ../build

all: $(OUTPATH)/main

$(OUTPATH):
	mkdir -p $@

$(OUTPATH)/main.o: main.c | $(OUTPATH)
	$(CC) $(CCFLAGS) -c -o $@ $<

$(OUTPATH)/main: $(OUTPATH)/main.o
	$(CC) $<  $(LDFLAGS) -o $@

clean:
	rm -rf $(OUTPATH)