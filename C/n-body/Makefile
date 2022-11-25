PROGRAM_NAME=nbody.gcc-9
compile:
	/usr/bin/gcc -pipe -Wall -O3 -fomit-frame-pointer -march=native -mfpmath=sse -msse3 $(PROGRAM_NAME).c -o $(PROGRAM_NAME).gcc_run -lm
measure:
	sudo modprobe msr
	sudo ../../RAPL/main "./$(PROGRAM_NAME).gcc_run 50000000" C n-body

run:
	./$(PROGRAM_NAME).gcc_run 50000000

mem:
	/usr/bin/time -v ./$(PROGRAM_NAME).gcc_run 50000000
