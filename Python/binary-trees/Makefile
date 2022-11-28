PROGRAM_NAME=binarytrees.python3-5
compile:
	cp $(PROGRAM_NAME).python3 $(PROGRAM_NAME).py
measure:
	sudo modprobe msr
	sudo ../../RAPL/main "python3 -OO $(PROGRAM_NAME).py 21" Python binary-trees

run:
	python3 -OO $(PROGRAM_NAME).py 21

mem:
	/usr/bin/time -v python3 -OO $(PROGRAM_NAME).py 21
