PROGRAM_NAME=regexredux.gcc-5
compile:
	/usr/bin/gcc -pipe -Wall -O3 -fomit-frame-pointer -march=native -fopenmp $(PROGRAM_NAME).c -o $(PROGRAM_NAME).gcc_run -lpcre2-8
measure:
	sudo modprobe msr
	sudo ../../RAPL/main "./$(PROGRAM_NAME).gcc_run 0 < ../../regexredux-input5000000.txt" C regex-redux

run:
	./$(PROGRAM_NAME).gcc_run 0 < ../../regexredux-input5000000.txt
mem:
	/usr/bin/time -v ./$(PROGRAM_NAME).gcc_run 0 < ../../regexredux-input5000000.txt
