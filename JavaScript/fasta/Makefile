PROGRAM_NAME=fasta.node-5

compile:
	cp -L $(PROGRAM_NAME).node $(PROGRAM_NAME).js
measure:
	sudo modprobe msr
	sudo ../../RAPL/main "node $(PROGRAM_NAME).js 25000000" JavaScript fasta

run:
	node $(PROGRAM_NAME).js 25000000

mem:
	/usr/bin/time -v node $(PROGRAM_NAME).js 25000000


valgrind:
	valgrind --tool=massif --stacks=yes node $(PROGRAM_NAME).js 25000000

