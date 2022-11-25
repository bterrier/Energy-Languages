PROGRAM_NAME=revcomp.gcc-7
compile:
	/usr/bin/gcc -pipe -Wall -O3 -fomit-frame-pointer -march=native -funroll-loops -fopenmp $(PROGRAM_NAME).c -o $(PROGRAM_NAME).gcc_run 
measure:
	sudo modprobe msr
	sudo ../../RAPL/main "./$(PROGRAM_NAME).gcc_run 0 < ../../revcomp-input25000000.txt" C reverse-complement

run:
	./$(PROGRAM_NAME).gcc_run 0 < ../../revcomp-input25000000.txt

mem:
	/usr/bin/time -v ./$(PROGRAM_NAME).gcc_run 0 < ../../revcomp-input25000000.txt
