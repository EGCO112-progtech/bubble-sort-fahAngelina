compile: main.c 
	 gcc  main.c -o test

runSelection: selection
	  ./selection

run: bubble
	 ./bubble


clean: bubble
	 rm bubble
