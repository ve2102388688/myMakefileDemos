# 获取所有的目录名字
SUBDIRS := $(shell find . -maxdepth 1 -type d)
SUBDIRS := $(basename $(patsubst ./%, %, ${SUBDIRS}))

all :
	for dir in $(SUBDIRS); do	\
		$(MAKE) -C $$dir;		\
	done

clean :
	for dir in $(SUBDIRS); do				\
		${MAKE} -C $$dir clean distclean;	\
	done

.PHONY : all clean