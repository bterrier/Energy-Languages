PROGRAM_NAME=fasta.go-2
compile:
	/usr/bin/go build -o $(PROGRAM_NAME).go_run $(PROGRAM_NAME).go

measure:
	sudo modprobe msr
	sudo ../../RAPL/main "./$(PROGRAM_NAME).go_run 25000000" Go fasta

run:
	./$(PROGRAM_NAME).go_run 25000000

mem:
	/usr/bin/time -v ./$(PROGRAM_NAME).go_run 25000000

valgrind:
	valgrind --tool=massif --stacks=yes ./$(PROGRAM_NAME).go_run 25000000
