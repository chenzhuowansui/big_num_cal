test: big_data_int.o test.o
	g++ -o test big_data_int.o test.o

big_data_int.o: big_data_int.cpp big_data_int.h
	g++ -c big_data_int.cpp

test.o: test.cpp big_data_int.h
	g++ -c test.cpp

clean:
	rm -rf *.o test
