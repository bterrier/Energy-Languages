PROGRAM_NAME=regexredux.gpp-6

compile:
	/usr/bin/g++ -c -pipe -O3 -fomit-frame-pointer -march=native -std=c++17 $(PROGRAM_NAME).c++ -o $(PROGRAM_NAME).c++.o
	/usr/bin/g++ $(PROGRAM_NAME).c++.o -o $(PROGRAM_NAME).gpp_run -lpcre2-8 -lpthread 
measure:
	sudo modprobe msr
	sudo ../../RAPL/main "./$(PROGRAM_NAME).gpp_run 0 < ../../regexredux-input5000000.txt" C++ regex-redux

run:
	./$(PROGRAM_NAME).gpp_run 0 < ../../regexredux-input5000000.txt

mem:
	/usr/bin/time -v ./$(PROGRAM_NAME).gpp_run 0 < ../../regexredux-input5000000.txt

valgrind:
	valgrind --tool=massif --stacks=yes ./$(PROGRAM_NAME).gpp_run 0 < ../../regexredux-input5000000.txt
