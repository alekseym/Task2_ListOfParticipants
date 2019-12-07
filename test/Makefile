testrecog:testrecog.o recogniser.o
	g++ -o testrecog testrecog.o recogniser.o


testrecog.o:testrecog.cpp
	g++ -c testrecog.cpp -I.. --std=c++11


recogniser.o:../recogniser.cpp
	g++ -c ../recogniser.cpp -I.. --std=c++11

clean:
	rm *.o ../*.o ./testrecog
