all:
	make -C set1
	make -C set2
	make -C set3
	make -C set4
clean:
	make -C set1 clean
	make -C set2 clean
	make -C set3 clean
	make -C set4 clean
test:
	make -C set1 test
	make -C set2 test
	make -C set3 test
	make -C set4 test
