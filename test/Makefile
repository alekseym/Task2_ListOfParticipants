testrecog:testrecog.o recogniser.o
	g++ -o testrecog testrecog.o recogniser.o


testrecog.o:testrecog.cpp
	g++ -c testrecog.cpp -I..


recogniser.o:../recogniser.cpp
	g++ -c ../recogniser.cpp -I..

clean:
	rm *.o ../*.o ./testrecog
