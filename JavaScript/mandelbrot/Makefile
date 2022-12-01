PROGRAM_NAME=mandelbrot.node-3
compile:
	cp -L $(PROGRAM_NAME).node $(PROGRAM_NAME).js
measure:
	sudo modprobe msr
	sudo ../../RAPL/main "node $(PROGRAM_NAME).js 16000" JavaScript mandelbrot

run:
	node $(PROGRAM_NAME).js 16000

mem:
	/usr/bin/time -v node $(PROGRAM_NAME).js 16000

valgrind:
	valgrind --tool=massif --stacks=yes node $(PROGRAM_NAME).js 16000
