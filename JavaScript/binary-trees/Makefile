PROGRAM_NAME=binarytrees.node-6
compile:
	cp -L $(PROGRAM_NAME).node $(PROGRAM_NAME).js
measure:
	sudo modprobe msr
	sudo ../../RAPL/main "node $(PROGRAM_NAME).js 21" JavaScript binary-trees

run:
	node $(PROGRAM_NAME).js 21

mem:
	/usr/bin/time -v node $(PROGRAM_NAME).js 21

valgrind:
	valgrind --tool=massif --stacks=yes node $(PROGRAM_NAME).js 21
