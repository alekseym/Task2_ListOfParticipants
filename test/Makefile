testrecog:testrecog.o recogniser.o tabel.o
	g++ -o testrecog testrecog.o recogniser.o tabel.o


testrecog.o:testrecog.cpp
	g++ -c testrecog.cpp -I.. --std=c++11


recogniser.o:../recogniser.cpp
	g++ -c ../recogniser.cpp -I.. --std=c++11

tabel.o:../tabel.cpp
	g++ -c ../tabel.cpp -I.. --std=c++11


clean:
	rm *.o ../*.o ./testrecog
