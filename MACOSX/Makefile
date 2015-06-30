IDIR =../include
CC=g++
CFLAGS=-I$(IDIR) -c -fPIC


	

miio: ../src/*.cpp
	$(CC) $(CFLAGS) ../src/*.cpp
	$(CC) -dynamiclib -o libmiio.so -fPIC *.o -headerpad_max_install_names
	