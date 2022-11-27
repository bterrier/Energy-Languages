PROGRAM_NAME=knucleotide.go-7
compile:
	/usr/bin/go build -o $(PROGRAM_NAME).go_run $(PROGRAM_NAME).go

measure:
	sudo modprobe msr
	sudo ../../RAPL/main "./$(PROGRAM_NAME).go_run 0 < ../../knucleotide-input25000000.txt" Go k-nucleotide

run:
	./$(PROGRAM_NAME).go_run 0 < ../../knucleotide-input25000000.txt

mem:
	/usr/bin/time -v  ./$(PROGRAM_NAME).go_run 0 < ../../knucleotide-input25000000.txt

valgrind:
	valgrind --tool=massif --stacks=yes  ./$(PROGRAM_NAME).go_run 0 < ../../knucleotide-input25000000.txt
