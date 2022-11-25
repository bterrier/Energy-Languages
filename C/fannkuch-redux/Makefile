PROGRAM_NAME=fannkuchredux.gcc-6
compile:
	/usr/bin/gcc -pipe -Wall -O3 -fomit-frame-pointer -march=native -std=c99 -fopenmp $(PROGRAM_NAME).c -o $(PROGRAM_NAME).gcc_run 
	
measure:
	sudo modprobe msr
	sudo ../../RAPL/main "./$(PROGRAM_NAME).gcc_run 12" C fannkuch-redux

run:
	./$(PROGRAM_NAME).gcc_run 12

mem:
	 /usr/bin/time -v ./$(PROGRAM_NAME).gcc_run 12
