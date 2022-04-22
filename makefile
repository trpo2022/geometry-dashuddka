CFLAGS = -Wall -Wextra -Werror

all: geometry

geometry: bin/geometry

bin/geometry: obj/src/geometry/geometry.o obj/src/libgeo/libgeo.a
	gcc -c -I src $(CFLAGS) -o $@ $< -lm
	
obj/src/geometry/geometry.o: src/geometry/geometry.c
	gcc -c -I src $(CFLAGS) -o $@ $< -lm	
	
obj/src/libgeo/libgeo.a: obj/src/libgeo/print.o obj/src/libgeo/checkprint.o obj/src/libgeo/print.o obj/src/libgeo/checkprint.o
	ar rcs $@ $^

obj/src/libgeo/Check.o: src/libgeo/print.c
	gcc -c -I src $(CFLAGS) -o $@ $< -lm

obj/src/libgeo/circle_area.o: src/libgeo/checkprint.c
	gcc -c -I src $(CFLAGS) -o $@ $< -lm	



.PHONY: clean

clean:
	rm obj/src/libgeo/*.a obj/src/libgeo/*.o obj/src/geometry/*.o bin/geometry
