cuenta.x: cuenta.cpp
	g++ -o cuenta.x cuenta.cpp -lm
	./cuenta.x Pi_2500000.txt cuenta.txt tiempo.txt
	cat cuenta.txt
	rm cuenta.x
