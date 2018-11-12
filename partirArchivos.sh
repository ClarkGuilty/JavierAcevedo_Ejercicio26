#Compila el cpp. Parte 
c++ -o cuenta.x cuenta.cpp -lm
touch tiempos.txt
touch partes
for N in 500000 250000 125000 71428 50000 33333 25000	
do
	rm x*
	split -b $N Pi_2500000.txt
	for file in x*
	do
		./cuenta.x $file cuenta.txt tiempo.txt
		cat tiempo.txt >> temp.txt
	done
	eval paste -sd+ temp.txt > temp2.txt
	cat temp2.txt | bc >> tiempos.txt

done
for N in 5 10 20 35 50 75 100
do
	echo $N >> partes
done

paste -d' ' tiempos.txt partes > time.txt
rm x* cuenta.x temp.txt partes temp2.txt tiempo.txt tiempos.txt cuenta.txt
#make
