PROGRAM_NAME=fasta.gcc-9
compile:
	/usr/bin/gcc -pipe -Wall -O3 -fomit-frame-pointer -march=native -std=c99 -mfpmath=sse -msse3 -fopenmp $(PROGRAM_NAME).c -o $(PROGRAM_NAME).gcc_run
	
measure:
	sudo modprobe msr
	sudo ../../RAPL/main "./$(PROGRAM_NAME).gcc_run 25000000" C fasta

run:
	./$(PROGRAM_NAME).gcc_run 25000000

mem:
	/usr/bin/time -v ./$(PROGRAM_NAME).gcc_run 25000000
