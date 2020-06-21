pointer: main_pointer.c
	gcc -o pointer main_pointer.c

.PHONY: run
run: pointer
	./pointer

hello: main.c
	gcc -o hello main.c

.PHONY: test
test: hello
	./hello

clean:
	rm hello
	rm pointer 
