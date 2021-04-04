LIBPATH := ./lib

main : main.cc libmymath.so
	${CC} $< -fPIC -o $@ -L${LIBPATH} -lmymath -Wl,-rpath=${LIBPATH}

libmymath.so :
	$(MAKE) -C math install					# 进入文件夹，执行子Makefile的make install

clean :
	${RM} main

distclean : clean
	${MAKE} -C math clean					# 进入文件夹，执行子Makefile的make clean
	${RM} ${LIBPATH}/*						# 删除lib下的动态库

.PHONY : clean distclean