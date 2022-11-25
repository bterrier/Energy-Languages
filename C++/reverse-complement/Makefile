PROGRAM_NAME=revcomp.gpp-2

compile:
	/usr/bin/g++ -c -pipe -O3 -fomit-frame-pointer -march=native -DSIMD -std=c++11 $(PROGRAM_NAME).c++ -o $(PROGRAM_NAME).c++.o
	/usr/bin/g++ $(PROGRAM_NAME).c++.o -o $(PROGRAM_NAME).gpp_run 
measure:
	sudo modprobe msr
	sudo ../../RAPL/main "./$(PROGRAM_NAME).gpp_run 0 < ../../revcomp-input25000000.txt" C++ reverse-complement

run:
	./$(PROGRAM_NAME).gpp_run 0 < ../../revcomp-input25000000.txt

mem:
	/usr/bin/time -v ./$(PROGRAM_NAME).gpp_run 0 < ../../revcomp-input25000000.txt

valgrind:
	valgrind --tool=massif --stacks=yes ./$(PROGRAM_NAME).gpp_run 0 < ../../revcomp-input25000000.txt
