in a;
void foo(int b){}
void bar(int* c){*c = 20;}

a = 10;
foo(a);			
bar(&a);
a = 30

'''
foo(a);			-> foo(a);
				   foo(10);
				   int b;
				   b = 10;

bar(&a);		-> bar(&a)
				   bar(0x1000)
				   int *c
				   c = 0x1000
				   *c = 20 (c값인 0x1000위치의 값인 a에 20을 할당.)
a = 30


a	0x1000	4byte	10 -> 20 -> 30		10(int)
b  	0x1000	4byte	10					10(int)
c 	0x1100	4byte	0x1000				0x1000(int)

const char* p1;
char* const p2;
const char* const p3;

우선 타입을 지우면

const  * p1;
    * const p2;
const  * const p3;

char c;		char값을 가지는 공간(char)
char *pc;	char값을 가지는 공간의 주소를 값으로 가지는 공간(char*)
char **ppc;	char값을 가지는 공간(char)의 주소를 값으로 가지는 공간(char*)의 주소를 값으로 가지는 공간(char**)
char ***pppc;

char ** pparray;
pparray = new char*[3]

for(int i = 0; i < 3; i++)
	pparray[i] = new char[3];
pparray[0][0] = "a"


char*	char char char
char*	char char char
char*	char char char


'''

