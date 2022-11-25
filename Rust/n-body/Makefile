PROGRAM_NAME=./nbody.rust-9
compile:
	rustc -C opt-level=3 -C target-cpu=ivybridge -C codegen-units=1 nbody.rs -o $(PROGRAM_NAME).rust_run

measure:
	sudo modprobe msr
	sudo ../../RAPL/main "./$(PROGRAM_NAME).rust_run 50000000" Rust n-body

run:
	./$(PROGRAM_NAME).rust_run 50000000

mem:
	/usr/bin/time -v ./$(PROGRAM_NAME).rust_run 50000000

valgrind:
	valgrind --tool=massif --stacks=yes ./$(PROGRAM_NAME).rust_run 50000000
