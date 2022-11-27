PROGRAM_NAME=regexredux.go-5
compile:
	/usr/bin/go build -o $(PROGRAM_NAME).go_run $(PROGRAM_NAME).go

measure:
	sudo modprobe msr
	sudo ../../RAPL/main "./$(PROGRAM_NAME).go_run 0 < ../../regexredux-input5000000.txt" Go regex-redux

run:
	./$(PROGRAM_NAME).go_run 0 < ../../regexredux-input5000000.txt

mem:
	/usr/bin/time -v ./$(PROGRAM_NAME).go_run 0 < ../../regexredux-input5000000.txt

valgrind:
	valgrind --tool=massif --stacks=yes ./$(PROGRAM_NAME).go_run 0 < ../../regexredux-input5000000.txt
