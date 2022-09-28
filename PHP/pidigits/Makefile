compile:

xmeasure:
	sudo modprobe msr
	sudo ../../RAPL/main "php  pidigits.php-5.php 10000" PHP pidigits

run:
	php pidigits.php-5.php 10000

mem:
	/usr/bin/time -v php  pidigits.php-5.php 10000

valgrind:
	valgrind --tool=massif --stacks=yes php pidigits.php-5.php 10000
