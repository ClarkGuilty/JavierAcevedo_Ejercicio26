#Compila el cpp. Parte 
g++ -o cuenta.x cuenta.cpp -lm
touch tiempos.txt
touch partes
for N in 1 2 3 4 5 6 7 8 9 10 15 20 25 30 35 40 45 50 60 70 80 90 100
do
	rm x*
	split -n $N Pi_2500000.txt
	for file in x*
	do
		./cuenta.x $file cuenta.txt tiempo.txt
		cat tiempo.txt >> temp.txt
	done
	eval paste -sd+ temp.txt > temp2.txt
	cat temp2.txt | bc >> tiempos.txt
	echo $N >> partes
done
paste -d' ' tiempos.txt partes > time.txt
rm x* cuenta.x temp.txt partes temp2.txt tiempo.txt tiempos.txt cuenta.txt
python plots.py
rm time.txt
make
