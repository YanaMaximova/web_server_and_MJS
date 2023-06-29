BUILD ?= debug
#BUILD = release

CXX = g++ -std=gnu++17
CXXFLAGS = -c

ifeq ($(BUILD), debug)
CXXFLAGS += -Wall -O0
endif

ifeq ($(BUILD), release)
CXXFLAGS += -O3
endif

all: clean prog

prog: main.o executer.o identifier.o interpreter.o lexeme.o parser.o scanner.o
	$(CXX) main.o executer.o identifier.o interpreter.o lexeme.o parser.o scanner.o -o prog

main.o:
	$(CXX) $(CXXFLAGS) main.cpp

executer.o:
	$(CXX) $(CXXFLAGS) executer/executer.cpp

identifier.o:
	$(CXX) $(CXXFLAGS) identifier/identifier.cpp

interpreter.o:
	$(CXX) $(CXXFLAGS) interpreter/interpreter.cpp

lexeme.o:
	$(CXX) $(CXXFLAGS) lexeme/lexeme.cpp

parser.o:
	$(CXX) $(CXXFLAGS) parser/parser.cpp

scanner.o:
	$(CXX) $(CXXFLAGS) scanner/scanner.cpp

clean:
	rm -f main.o executer.o identifier.o interpreter.o lexeme.o parser.o scanner.o