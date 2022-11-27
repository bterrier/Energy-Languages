PROGRAM_NAME=mandelbrot.go-4
compile:
	/usr/bin/go build -o $(PROGRAM_NAME).go_run $(PROGRAM_NAME).go

measure:
	sudo modprobe msr
	sudo ../../RAPL/main "./$(PROGRAM_NAME).go_run 16000" Go mandelbrot

run:
	./$(PROGRAM_NAME).go_run 16000

mem:
	/usr/bin/time -v ./$(PROGRAM_NAME).go_run 16000

valgrind:
	valgrind --tool=massif --stacks=yes ./$(PROGRAM_NAME).go_run 16000
