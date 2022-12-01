PROGRAM_NAME=nbody.typescript-6
compile:
	cp $(PROGRAM_NAME).typescript $(PROGRAM_NAME).ts
	tsc --alwaysStrict -t ESNEXT  $(PROGRAM_NAME).ts

measure:
	sudo modprobe msr
	sudo ../../RAPL/main "node --use_strict $(PROGRAM_NAME).js 50000000" TypeScript n-body

run:
	node --use_strict $(PROGRAM_NAME).js 50000000

clean:
	rm -rf *.js *.ts

mem:
	/usr/bin/time -v node --use_strict $(PROGRAM_NAME).js 50000000

valgrind:
	valgrind --tool=massif --stacks=yes node --use_strict $(PROGRAM_NAME).js 50000000
