PROGRAM_NAME=binarytrees.gcc-2
compile:
	/usr/bin/gcc -pipe -Wall -O3 -fomit-frame-pointer -march=native -fopenmp -D_FILE_OFFSET_BITS=64 -I/usr/include/apr-1.0 $(PROGRAM_NAME).c -o $(PROGRAM_NAME).gcc_run -lapr-1 -lgomp -lm
	
measure:
	sudo modprobe msr
	sudo ../../RAPL/main "./$(PROGRAM_NAME).gcc_run 21" C binary-trees

run:
	./$(PROGRAM_NAME).gcc_run 21

mem:
	/usr/bin/time -v ./$(PROGRAM_NAME).gcc_run 21
