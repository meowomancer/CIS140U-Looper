all: looper.c
	gcc looper.c -o looper
clean: 
	rm -f looper

install:
	gcc looper.c -o /tmp/looper
	cp /tmp/looper /usr/local/bin/looper
	rm /tmp/looper
