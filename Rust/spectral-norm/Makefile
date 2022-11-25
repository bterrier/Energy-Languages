PROGRAM_NAME=spectralnorm.rust-5
compile:
	RUSTFLAGS='-C target-cpu=native' cargo build --profile bench
	cp target/release/spectralnorm ./$(PROGRAM_NAME).rust_run

measure:
	sudo modprobe msr
	sudo ../../RAPL/main "./$(PROGRAM_NAME).rust_run 5500" Rust spectral-norm

run:
	./$(PROGRAM_NAME).rust_run 5500

mem:
	/usr/bin/time -v ./$(PROGRAM_NAME).rust_run 5500

valgrind:
	valgrind --tool=massif --stacks=yes ./$(PROGRAM_NAME).rust_run 5500
