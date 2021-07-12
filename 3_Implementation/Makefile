# Target name : dependencies
#<TAB> command 
SRC = main.c \
src/add.c\
src/writefile.c\
src/search.c\
src/output.c 

OBJ= main.o \
add.o\
writefile.o\
search.o\
output.o 

INC = inc
CFLAGS = -I$(INC)

all.out : $(OBJ)
	gcc $^ -I$(INC) -o $@

%.o : src/%.c 
	gcc $^ -I$(INC) -c


run: target
	./all.out

clean:
	rm all.out  *.o src/*.o


