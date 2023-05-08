Tum: derleme ac

derleme:
	g++ -I ./include/ -o ./lib/SatirList.o -c ./src/SatirList.cpp
	g++ -I ./include/ -o ./lib/Node.o -c ./src/Node.cpp
	g++ -I ./include/ -o ./lib/Yoneticilist.o -c ./src/Yoneticilist.cpp
	g++ -I ./include/ -o ./lib/ObjectNode.o -c ./src/ObjectNode.cpp
	g++ -I ./include/ -o ./lib/TasarimFonk.o -c ./src/TasarimFonk.cpp
	g++ -I ./include/ -o ./bin/Main ./lib/SatirList.o ./lib/Node.o ./lib/Yoneticilist.o ./lib/ObjectNode.o ./lib/TasarimFonk.o ./src/Main.cpp
ac:
	./bin/Main
	