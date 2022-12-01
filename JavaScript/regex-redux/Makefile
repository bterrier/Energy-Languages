PROGRAM_NAME=regexredux.node-3
compile:
	cp -L $(PROGRAM_NAME).node $(PROGRAM_NAME).js
measure:
	sudo modprobe msr
	sudo ../../RAPL/main "node $(PROGRAM_NAME).js 0 < ../../regexredux-input5000000.txt" JavaScript regex-redux

run:
	node $(PROGRAM_NAME).js 0 < ../../regexredux-input5000000.txt

mem:
	/usr/bin/time -v node $(PROGRAM_NAME).js 0 < ../../regexredux-input5000000.txt

valgrind:
	valgrind --tool=massif --stacks=yes node $(PROGRAM_NAME).js 0 < ../../regexredux-input5000000.txt
