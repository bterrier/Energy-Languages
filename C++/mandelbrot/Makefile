PROGRAM_NAME=mandelbrot.gpp-4
compile:
	/usr/bin/g++ -c -pipe -O3 -fomit-frame-pointer -march=native -std=c++17 -mno-fma  $(PROGRAM_NAME).c++ -o $(PROGRAM_NAME).c++.o
	/usr/bin/g++ $(PROGRAM_NAME).c++.o -o $(PROGRAM_NAME).gpp_run -pthread 
measure:
	sudo modprobe msr
	sudo ../../RAPL/main "./$(PROGRAM_NAME).gpp_run 16000" C++ mandelbrot

run:
	./$(PROGRAM_NAME).gpp_run 16000

mem:
	/usr/bin/time -v ./$(PROGRAM_NAME).gpp_run 16000

valgrind:
	valgrind --tool=massif --stacks=yes ./$(PROGRAM_NAME).gpp_run 16000
