PROGRAM_NAME=binarytrees.go-2
compile:
	/usr/bin/go build -o $(PROGRAM_NAME).go_run $(PROGRAM_NAME).go

measure:
	sudo modprobe msr
	sudo ../../RAPL/main "./$(PROGRAM_NAME).go_run 21" Go binary-trees

run:
	./$(PROGRAM_NAME).go_run 21

mem:
	/usr/bin/time -v ./$(PROGRAM_NAME).go_run 21

valgrind:
	valgrind --tool=massif --stacks=yes ./$(PROGRAM_NAME).go_run 21
