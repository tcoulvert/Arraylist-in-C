multi: main.c increment.c
	gcc -o multi main.c increment.c

.PHONY: test
test: multi
	./multi

clean:
	rm multi
