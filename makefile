object=1475.o
cpp=1475.cpp
practice: $(object)
	g++ -o practice $(object)
$(object):$(cpp)
	g++ -c -o $(object) $(cpp)
clean:
	rm $(object) practice