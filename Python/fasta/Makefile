PROGRAM_NAME=fasta.python3-5
compile:
	cp $(PROGRAM_NAME).python3 $(PROGRAM_NAME).py
measure:
	sudo modprobe msr
	sudo ../../RAPL/main "python3 -OO $(PROGRAM_NAME).py 25000000" Python fasta

run:
	python3 -OO $(PROGRAM_NAME).py 25000000

make mem:
	/usr/bin/time -v  python3 -OO $(PROGRAM_NAME).py 25000000
