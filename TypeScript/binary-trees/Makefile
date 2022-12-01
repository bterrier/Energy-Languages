PROGRAM_NAME=binarytrees.typescript-7
compile:
	cp $(PROGRAM_NAME).typescript $(PROGRAM_NAME).ts
	tsc --alwaysStrict -t ESNEXT  $(PROGRAM_NAME).ts

measure:
	sudo modprobe msr
	sudo ../../RAPL/main "node --use_strict $(PROGRAM_NAME).js 21" TypeScript binary-trees

run:
	node --use_strict $(PROGRAM_NAME).js 21

clean:
	rm -rf *.js *.ts

mem:
	/usr/bin/time -v node --use_strict $(PROGRAM_NAME).js 21

valgrind:
	valgrind --tool=massif --stacks=yes node --use_strict $(PROGRAM_NAME).js 21

