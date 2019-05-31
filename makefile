main.out: Persona.o main.o AirBender.o FireBender.o WaterBender.o EarthBender.o NonBender.o
	g++ Persona.o main.o AirBender.o FireBender.o WaterBender.o EarthBender.o NonBender.o -o main.out

main.o: main.cpp AirBender.h FireBender.h WaterBender.h EarthBender.h NonBender.h 
	g++ -c main.cpp

Persona.o: Persona.cpp main.cpp AirBender.h FireBender.h WaterBender.h EarthBender.h NonBender.h 
	g++ -c Persona.cpp

AirBender.o: AirBender.cpp FireBender.h WaterBender.h EarthBender.h NonBender.h
	g++ -c AirBender.cpp

FireBender.o: FireBender.cpp WaterBender.h EarthBender.h NonBender.h
	g++ -c FireBender.cpp

WaterBender.o: WaterBender.cpp EarthBender.h NonBender.h 
	g++ -c WaterBender.cpp

EarthBender.o: EarthBender.cpp NonBender.h
	g++ -c EarthBender.cpp

NonBender.o: NonBender.cpp NonBender.h
	g++ -c NonBender.cpp
