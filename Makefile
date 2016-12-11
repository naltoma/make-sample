test: list.o main.o
	gcc list.o main.o -o test

list.o: list.c
	gcc -c list.c

main.o: main.c
	gcc -c main.c

clean:
	rm -f *~ *.o test

newsie:
	curl https://ie.u-ryukyu.ac.jp/news-ie/feed/ | grep title
