compile:
	cp knucleotide.typescript knucleotide.ts
	tsc --alwaysStrict -t ESNEXT  knucleotide.ts
	../node_modules/babel-cli/bin/babel.js --plugins transform-es2015-modules-commonjs knucleotide.js -o knucleotide.js

xmeasure:
	sudo modprobe msr
	sudo ../../RAPL/main "node --use_strict knucleotide.js 0 < ../../knucleotide-input25000000.txt" TypeScript k-nucleotide

run:
	node --use_strict knucleotide.js 0 < ../../knucleotide-input25000000.txt

clean:
	rm -rf *.js *.ts

mem:
	/usr/bin/time -v node --use_strict knucleotide.js 0 < ../../knucleotide-input25000000.txt

valgrind:
	valgrind --tool=massif --stacks=yes node --use_strict knucleotide.js 0 < ../../knucleotide-input25000000.txt
