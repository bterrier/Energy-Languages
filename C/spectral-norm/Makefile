PROGRAM_NAME=spectralnorm.gcc-6
compile:
	/usr/bin/gcc -pipe -Wall -O3 -fomit-frame-pointer -march=native -fopenmp -mfpmath=sse -msse2 $(PROGRAM_NAME).c -o $(PROGRAM_NAME).gcc_run -lm
measure:
	sudo modprobe msr
	sudo ../../RAPL/main "./$(PROGRAM_NAME).gcc_run 5500" C spectral-norm

run:
	./$(PROGRAM_NAME).gcc_run 5500

mem:
	/usr/bin/time -v ./$(PROGRAM_NAME).gcc_run 5500

