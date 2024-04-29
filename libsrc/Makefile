LIB_PATH = ../lib/
LIB_NAME = libmylib.a
OBJECTS = debug.o
ARCHIVE = ar rcs

mylib : $(OBJECTS)
	$(ARCHIVE) $(LIB_PATH)$(LIB_NAME) $(OBJECTS)

clean : 
	rm -f *.o
