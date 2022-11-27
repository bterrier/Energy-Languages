PROGRAM_NAME=fannkuchredux.go-3
compile:
	/usr/bin/go build -o $(PROGRAM_NAME).go_run $(PROGRAM_NAME).go

measure:
	sudo modprobe msr
	sudo ../../RAPL/main "./$(PROGRAM_NAME).go_run 12" Go fannkuch-redux

run:
	./$(PROGRAM_NAME).go_run 12

mem:
	/usr/bin/time -v ./$(PROGRAM_NAME).go_run 12

valgrind:
	valgrind --tool=massif --stacks=yes ./$(PROGRAM_NAME).go_run 12
