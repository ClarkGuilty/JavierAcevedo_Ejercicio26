cuenta.x: cuenta.cpp
	g++ -o cuenta.x cuenta.cpp -lm
#	./cuenta.x
	./cuenta.x archivo.txt cuenta.txt tiempo.txt 
	rm cuenta.x
