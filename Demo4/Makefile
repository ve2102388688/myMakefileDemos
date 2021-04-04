LIBPATH := ./lib
SRCPATH := ./source

main : main.cc libmymath.so
	${CC} $< -fPIC -o $@ -L${LIBPATH} -lmymath -Wl,-rpath=${LIBPATH}

libmymath.so :
	$(MAKE) -C ${SRCPATH} install					# 进入文件夹，执行子Makefile的make install

clean :
	${RM} main

distclean : clean
	${MAKE} -C ${SRCPATH} clean						# 进入文件夹，执行子Makefile的make clean
	${RM} ${LIBPATH}/*								# 删除lib下的动态库

.PHONY : clean distclean