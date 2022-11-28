PROGRAM_NAME=spectralnorm.python3-8
compile:
	cp $(PROGRAM_NAME).python3 $(PROGRAM_NAME).py
measure:
	sudo modprobe msr
	sudo ../../RAPL/main "python3 -OO $(PROGRAM_NAME).py 5500" Python spectral-norm

run:
	python3 -OO $(PROGRAM_NAME).py 5500

mem:
	/usr/bin/time -v python3 -OO $(PROGRAM_NAME).py 5500
