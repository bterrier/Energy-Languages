PROGRAM_NAME=mandelbrot.gcc-6
compile:
	/usr/bin/gcc -pipe -Wall -O3 -fomit-frame-pointer -march=native -mno-fma -fno-finite-math-only -mfpmath=sse -msse2 -fopenmp $(PROGRAM_NAME).c -o $(PROGRAM_NAME).gcc_run
measure:
	sudo modprobe msr
	sudo ../../RAPL/main "./$(PROGRAM_NAME).gcc_run 16000" C mandelbrot

run:
	./$(PROGRAM_NAME).gcc_run 16000

mem:
	/usr/bin/time -v ./$(PROGRAM_NAME).gcc_run 16000
