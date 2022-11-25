PROGRAM_NAME=binarytrees.rust-5
compile:
	RUSTFLAGS='-C target-cpu=native' cargo build --profile bench
	cp target/release/binarytrees ./$(PROGRAM_NAME).rust_run

measure:
	sudo modprobe msr
	sudo ../../RAPL/main "./$(PROGRAM_NAME).rust_run 21" Rust binary-trees

run:
	./$(PROGRAM_NAME).rust_run 21

mem:
	/usr/bin/time -v ./$(PROGRAM_NAME).rust_run 21

valgrind:
	valgrind --tool=massif --stacks=yes ./$(PROGRAM_NAME).rust_run 21 
