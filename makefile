main.out: Persona.o main.o AirBender.o FireBender.o WaterBender.o EarthBender.o NonBender.o Bender.o PoderEspecial.o Ofensivos.o
	g++ Persona.o main.o AirBender.o FireBender.o WaterBender.o EarthBender.o NonBender.o Bender.o PoderEspecial.o Ofensivos.o -o main.out

main.o: main.cpp AirBender.h FireBender.h WaterBender.h EarthBender.h NonBender.h Ofensivos.h
	g++ -c main.cpp

Persona.o: Persona.cpp main.cpp Bender.h PoderEspecial.h AirBender.h FireBender.h WaterBender.h EarthBender.h NonBender.h Ofensivos.h
	g++ -c Persona.cpp

Bender.o: Bender.cpp PoderEspecial.h AirBender.h FireBender.h WaterBender.h EarthBender.h NonBender.h Ofensivos.h
	g++ -c Bender.cpp

PoderEspecial.o: PoderEspecial.h AirBender.h FireBender.h WaterBender.h EarthBender.h NonBender.h Ofensivos.h
	g++ -c PoderEspecial.cpp

AirBender.o: AirBender.cpp FireBender.h WaterBender.h EarthBender.h NonBender.h Ofensivos.h
	g++ -c AirBender.cpp

FireBender.o: FireBender.cpp WaterBender.h EarthBender.h NonBender.h Ofensivos.h
	g++ -c FireBender.cpp

WaterBender.o: WaterBender.cpp EarthBender.h NonBender.h Ofensivos.h
	g++ -c WaterBender.cpp

EarthBender.o: EarthBender.cpp NonBender.h Ofensivos.h
	g++ -c EarthBender.cpp

NonBender.o: NonBender.cpp NonBender.h Ofensivos.h
	g++ -c NonBender.cpp

Ofensivos.o: Ofensivos.cpp Ofensivos.h
	g++ -c Ofensivos.cpp