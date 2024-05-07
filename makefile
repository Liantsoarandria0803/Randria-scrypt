exec=crypt
cc=gcc
all:$(exec)
obj: main.c crypt.c decrypt.c
	$(cc) -c $^
crypt: main.o crypt.o decrypt.o
	$(cc) -o $@ $^
clean:
	 rm -f *.o
mrproper: clean
	rm -f crypt
