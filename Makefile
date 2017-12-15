CXX = clang
CXXFLAGS = -std=c11 -Wall -Wextra -Wpedantic  -Wno-pragma-once-outside-header
EXEC = mips-emulator
OBJECTS = main.o reading.o util.o test.o
DEPENDS = ${OBJECTS:.o=.d}

${EXEC}: ${OBJECTS}
	${CXX} ${CXXFLAGS} ${OBJECTS} -o ${EXEC}

-include ${DEPENDS}

.PHONY: clean

clean:
	rm ${OBJECTS} ${EXEC} ${DEPENDS}
