PROGRAM_NAME=./regexredux.rust-7
compile:
	RUSTFLAGS='-C target-cpu=native' cargo build --profile bench
	cp target/release/regexredux ./$(PROGRAM_NAME).rust_run

measure:
	sudo modprobe msr
	sudo ../../RAPL/main "./$(PROGRAM_NAME).rust_run 0 < ../../regexredux-input5000000.txt" Rust regex-redux

run:
	./$(PROGRAM_NAME).rust_run 0 < ../../regexredux-input5000000.txt

mem:
	/usr/bin/time -v ./$(PROGRAM_NAME).rust_run 0 < ../../regexredux-input5000000.txt

valgrind:
	valgrind --tool=massif --stacks=yes ./$(PROGRAM_NAME).rust_run 0 < ../../regexredux-input5000000.txt
