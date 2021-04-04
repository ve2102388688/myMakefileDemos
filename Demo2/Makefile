SRC	:= ${wildcard *.cc}			# 所有的源文件

main : main.cc ${SRC}
	${CC} $^ -fPIC -o $@		# $^所有的依赖文件

clean :
	${RM} main

.PHONY : clean