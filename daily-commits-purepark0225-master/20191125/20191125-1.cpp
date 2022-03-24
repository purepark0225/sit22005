#include <iostream>
// Procedure oriented 모든 것이 절차로 설명된다
struct Human
{
	int age;
	int handong;
	char* _name;
};

void create_human(struct Human* h // int age, char* name,...)
{
	h -> age = 20;                                                            
	h -> handong = 1;
	h -> name = new char[20];
}

struct Human clone (struct Human* h)
{
	struct Human t_h;
	h_h.age = h -> age;
	t_h.handong = h -> handong;
	t_h.nae = new char[20];
	// string copy
}

void destroy_human(struct Human* h)
{
	delete [] h -> name;
}

void wakeup(struct Human* h)
{

}

void handong_wakeup(struct Human* h)
{
	std::cout << "Why not change the world!" << std::endl;
}

void study(struct Human* h)
{

}

void talk(struct Human* h1, struct Human* h2)
{

}

void sleep(struct Human* h)
{

}

int main()
{
	struct Human h1, h2;

	create_human(&h1);	// 초기화
	create_human(&h2);

	struct Human h3 = clone(&h1);
	// wakeup -> study -> talk -> sleep
	if(h1.handong > 0)
		handong_wakeup(&h1);
	else
		wakeup(&h1);

	if(h2.handong > 0)
		handong_wakeup(&h2);
	else
		wakeup(&h2);

	//wakeup(&h1);
	//wakeup(&h2);

	struct Human h4 = clone(&h1);

	study(&h1);
	study(&h2);

	talk(&h1, &h2);

	sleep(&h1);
	sleep(&h2);

	struct Human h5 = clone(&h1);

	destroy_human(&h1);	// 삭제
	destroy_human(&h2);

	return 0;
}