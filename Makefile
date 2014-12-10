CC=gcc
TEST=example
INC=-I include/
TARGET=catkey
OBJ=obj/*.o

all: @bin @include
	$(CC) -c src/$(TARGET).c $(INC)
	mv *.o obj/

@obj:
	mv *.o obj/

@bin:
	mkdir -p bin include obj

@include:
	cp src/*.h include/

example: all
	$(CC) -o $(TEST).out example/$(TEST).c $(INC) $(OBJ)
	mv $(TEST).out bin/$(TEST)

clean:
	rm -fr bin
	rm -fr include
	rm -fr obj
