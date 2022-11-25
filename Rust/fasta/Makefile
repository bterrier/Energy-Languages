PROGRAM_NAME=fasta.rust-7
compile:
	RUSTFLAGS='-C target-cpu=native' cargo build --profile bench
	cp target/release/fasta ./$(PROGRAM_NAME).rust_run

measure:
	sudo modprobe msr
	sudo ../../RAPL/main "./$(PROGRAM_NAME).rust_run 25000000" Rust fasta

run:
	./$(PROGRAM_NAME).rust_run 25000000

mem:
	/usr/bin/time -v ./$(PROGRAM_NAME).rust_run 25000000

valgrind:
	valgrind --tool=massif --stacks=yes ./$(PROGRAM_NAME).rust_run 25000000
