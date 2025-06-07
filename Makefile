EXEC = Sistema_Cadastro_de_Funcionarios.exe
CXX = g++
CXXFLAGS = -Wall -O0 -pedantic
OBJS = main.o Funcionarios.o

$(EXEC): $(OBJS)
	$(CXX) -o $(EXEC) $(OBJS)

main.o: main.cpp Funcionarios.hpp
	$(CXX) $(CXXFLAGS) -c main.cpp

Funcionarios.o: Funcionarios.cpp Funcionarios.hpp
	$(CXX) $(CXXFLAGS) -c Funcionarios.cpp

clean:
	@if exist *.o del /Q *.o
	@if exist $(EXEC) del /Q $(EXEC)