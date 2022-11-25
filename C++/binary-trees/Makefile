PROGRAM_NAME=binarytrees.gpp-7
compile:
	/usr/bin/g++ -c -pipe -O3 -fomit-frame-pointer -march=native  -std=gnu++17 -I/usr/include/apr-1.0 $(PROGRAM_NAME).c++ -o $(PROGRAM_NAME).c++.o
	/usr/bin/g++ $(PROGRAM_NAME).c++.o -o $(PROGRAM_NAME).gpp_run -fopenmp -ltbb 

measure:
	sudo modprobe msr
	sudo ../../RAPL/main "./$(PROGRAM_NAME).gpp_run 21" C++ binary-trees

run:
	./$(PROGRAM_NAME).gpp_run 21

mem:
	/usr/bin/time -v ./$(PROGRAM_NAME).gpp_run 21

valgrind:
	valgrind --tool=massif --stacks=yes ./$(PROGRAM_NAME).gpp_run 21
