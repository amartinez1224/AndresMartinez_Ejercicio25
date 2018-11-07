sample.pdf: leer.py sample.dat
	python3 leer.py

sample.dat : sample.x 
	./sample.x 10000 1 1

sample.x : sample.c
	cc sample.c -o sample.x -lm