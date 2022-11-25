PROGRAM_NAME=fannkuchredux.rust-6
compile:
	RUSTFLAGS='-C target-cpu=native' cargo build --profile bench
	cp target/release/fannkuchredux ./$(PROGRAM_NAME).rust_run

measure:
	sudo modprobe msr
	sudo ../../RAPL/main "./$(PROGRAM_NAME).rust_run 12" Rust fannkuch-redux

run:
	./$(PROGRAM_NAME).rust_run 12

mem:
	/usr/bin/time -v ./$(PROGRAM_NAME).rust_run 12

valgrind:
	valgrind --tool=massif --stacks=yes ./$(PROGRAM_NAME).rust_run 12
