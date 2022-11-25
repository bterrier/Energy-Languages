PROGRAM_NAME=fasta.gpp-8

compile: $(PROGRAM_NAME).gpp_run

fasta.gpp-8.gpp_run: fasta.gpp-8.c++
	/usr/bin/g++ -c -pipe -O3 -fomit-frame-pointer -march=native -std=c++17 $(PROGRAM_NAME).c++ -o $(PROGRAM_NAME).c++.o
	/usr/bin/g++ $(PROGRAM_NAME).c++.o -o $(PROGRAM_NAME).gpp_run -lpthread 

fasta.gpp-5.gpp_run: fasta.gpp-5.c++
	/usr/bin/g++ -c -pipe -O3 -fomit-frame-pointer -march=native -mfpmath=sse -msse3 -std=c++11 $(PROGRAM_NAME).c++ -o $(PROGRAM_NAME).c++.o &&  /usr/bin/g++ $(PROGRAM_NAME).c++.o -o $(PROGRAM_NAME).gpp_run -lpthread 

measure:
	sudo modprobe msr
	sudo ../../RAPL/main "./$(PROGRAM_NAME).gpp_run 25000000" C++ fasta

run:
	./$(PROGRAM_NAME).gpp_run 25000000

mem:
	/usr/bin/time -v ./$(PROGRAM_NAME).gpp_run 25000000

valgrind:
	valgrind --tool=massif --stacks=yes ./$(PROGRAM_NAME).gpp_run 25000000

