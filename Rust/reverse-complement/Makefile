compile:
	RUSTFLAGS='-C target-cpu=native' cargo build --profile bench
	cp target/release/revcomp ./revcomp.rust-2.rust_run

measure:
	sudo modprobe msr
	sudo ../../RAPL/main "./revcomp.rust-2.rust_run 0 < ../../revcomp-input25000000.txt" Rust reverse-complement

run:
	./revcomp.rust-2.rust_run 0 < ../../revcomp-input25000000.txt

mem:
	/usr/bin/time -v ./revcomp.rust-2.rust_run 0 < ../../revcomp-input25000000.txt

valgrind:
	valgrind --tool=massif --stacks=yes ./revcomp.rust-2.rust_run 0 < ../../revcomp-input25000000.txt
