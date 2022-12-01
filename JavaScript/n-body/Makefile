PROGRAM_NAME=nbody.node-6
compile:
	cp -L $(PROGRAM_NAME).node $(PROGRAM_NAME).js
measure:
	sudo modprobe msr
	sudo ../../RAPL/main "node nbody.js 50000000" JavaScript n-body

run:
	node $(PROGRAM_NAME).js 50000000

mem:
	/usr/bin/time -v  node $(PROGRAM_NAME).js 50000000

valgrind:
	valgrind --tool=massif --stacks=yes  node $(PROGRAM_NAME).js 50000000
