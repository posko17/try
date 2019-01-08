object=1074.o
cpp=1074.cpp
practice: $(object)
	g++ -o practice $(object)
$(object):$(cpp)
	g++ -c -o $(object) $(cpp)
clean:
	rm $(object) practice