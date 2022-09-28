compile:
	RUSTFLAGS='-C target-cpu=native' cargo build --profile bench
	cp target/release/mandelbrot ./mandelbrot.rust-4.rust_run

measure:
	sudo modprobe msr
	sudo ../../RAPL/main "./mandelbrot.rust-4.rust_run 16000" Rust mandelbrot

run:
	./mandelbrot.rust-4.rust_run 16000

mem:
	/usr/bin/time -v  ./mandelbrot.rust-4.rust_run 16000

valgrind:
	valgrind --tool=massif --stacks=yes  ./mandelbrot.rust-4.rust_run 16000
