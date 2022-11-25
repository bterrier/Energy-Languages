PROGRAM_NAME=./mandelbrot.rust-6
compile:
	RUSTFLAGS='-C target-cpu=native' cargo build --profile bench
	cp target/release/mandelbrot ./$(PROGRAM_NAME).rust_run

measure:
	sudo modprobe msr
	sudo ../../RAPL/main "./$(PROGRAM_NAME).rust_run 16000" Rust mandelbrot

run:
	./$(PROGRAM_NAME).rust_run 16000

mem:
	/usr/bin/time -v  ./$(PROGRAM_NAME).rust_run 16000

valgrind:
	valgrind --tool=massif --stacks=yes  ./$(PROGRAM_NAME).rust_run 16000
