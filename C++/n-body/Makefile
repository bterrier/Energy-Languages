PROGRAM_NAME=nbody.gpp-0
compile:
	/usr/bin/g++ -c -pipe -O3 -fomit-frame-pointer -march=native --std=c++17 $(PROGRAM_NAME).c++ -o $(PROGRAM_NAME).c++.o
	/usr/bin/g++ $(PROGRAM_NAME).c++.o -o $(PROGRAM_NAME).gpp_run

measure:
	sudo modprobe msr
	sudo ../../RAPL/main "./$(PROGRAM_NAME).gpp_run 50000000" C++ n-body

run:
	./$(PROGRAM_NAME).gpp_run 50000000

mem:
	/usr/bin/time -v ./$(PROGRAM_NAME).gpp_run 50000000

valgrind:
	valgrind --tool=massif --stacks=yes ./$(PROGRAM_NAME).gpp_run 50000000


