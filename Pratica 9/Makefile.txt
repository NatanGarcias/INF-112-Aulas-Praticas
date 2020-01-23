compila: a b c d

a: 
	g++ a.cpp -o a
	
b: 
	g++ b.cpp -o b
	
c: 
	g++ c.cpp -o c
	
d: 
	g++ d.cpp -o d
	
a1 : a.exe
	 a
	 
b1 : b.exe
	 b

c1 : c.exe
	 c

d1 : d.exe
	 d
	
	