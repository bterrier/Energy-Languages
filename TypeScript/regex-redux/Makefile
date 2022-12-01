PROGRAM_NAME=regexredux.typescript-4
compile:
	cp $(PROGRAM_NAME).typescript $(PROGRAM_NAME).ts
	tsc --alwaysStrict -t ESNEXT --lib es7 $(PROGRAM_NAME).ts

measure:
	sudo modprobe msr
	sudo ../../RAPL/main "node --use_strict $(PROGRAM_NAME).js 0 < ../../regexredux-input5000000.txt" TypeScript regex-redux

run:
	node --use_strict $(PROGRAM_NAME).js 0 < ../../regexredux-input5000000.txt

clean:
	rm -rf *.js *.ts

mem:
	/usr/bin/time -v node --use_strict $(PROGRAM_NAME).js 0 < ../../regexredux-input5000000.txt

valgrind:
	valgrind --tool=massif --stacks=yes node --use_strict $(PROGRAM_NAME).js 0 < ../../regexredux-input5000000.txt
