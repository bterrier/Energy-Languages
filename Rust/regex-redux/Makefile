compile:
	RUSTFLAGS='-C target-cpu=native' cargo build --profile bench
	cp target/release/regexredux ./regexredux.rust_run

measure:
	sudo modprobe msr
	sudo ../../RAPL/main "./regexredux.rust_run 0 < ../../regexredux-input5000000.txt" Rust regex-redux

run:
	./regexredux.rust_run 0 < ../../regexredux-input5000000.txt

mem:
	/usr/bin/time -v ./regexredux.rust_run 0 < ../../regexredux-input5000000.txt

valgrind:
	valgrind --tool=massif --stacks=yes ./regexredux.rust_run 0 < ../../regexredux-input5000000.txt
