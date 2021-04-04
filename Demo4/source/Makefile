SRC := ${wildcard *.cc}

OBJ := ${patsubst %.cc, %.o, ${SRC}}

LIB_PATH := ../lib

# 伪目标
all : $(OBJ)

$(OBJ) : %.o : %.cc
	${CC} -c -fPIC $< -o $@

install : ${OBJ}
	${CC} -fPIC -shared ${OBJ} -o ${LIB_PATH}/libmymath.so

clean :
	${RM} ${OBJ}

.PHONY : all clean