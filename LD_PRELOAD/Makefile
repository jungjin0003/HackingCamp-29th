all: main libhookfopen.so clean_object

main: main.o

libhookfopen.so: libhookfopen.o
	$(CC) -shared -o $@ $<

libhookfopen.o: libhookfopen.c
	$(CC) -fPIC -ldl -c -o $@ $<

clean_object:
	-rm *.o

clean: clean_object
	-rm main libhookfopen.so