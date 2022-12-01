PROGRAM_NAME=spectralnorm.node-6
compile:
	cp -L $(PROGRAM_NAME).node $(PROGRAM_NAME).js
measure:
	sudo modprobe msr
	sudo ../../RAPL/main "node $(PROGRAM_NAME).js 5500" JavaScript spectral-norm

run:
	node $(PROGRAM_NAME).js 5500

mem:
	/usr/bin/time -v node $(PROGRAM_NAME).js 5500

valgrind:
	valgrind --tool=massif --stacks=yes node $(PROGRAM_NAME).js 5500
