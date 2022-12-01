PROGRAM_NAME=fannkuchredux.node-5
compile:
	cp -L $(PROGRAM_NAME).node $(PROGRAM_NAME).js
measure:
	sudo modprobe msr
	sudo ../../RAPL/main "node $(PROGRAM_NAME).js 12" JavaScript fannkuch-redux

run:
	node $(PROGRAM_NAME).js 12

mem:
	/usr/bin/time -v node $(PROGRAM_NAME).js 12

valgrind:
	valgrind --tool=massif --stacks=yes node $(PROGRAM_NAME).js 12
