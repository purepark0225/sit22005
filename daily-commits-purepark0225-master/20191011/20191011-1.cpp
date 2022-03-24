#include <iostream>

struct Pair {
	std::string name;
	double val;
}

std::vector<Pair>pairs;
double& value(const std::string& s)
{
	for (int i = 0; i < pairs.size(); i++)
		if(s == pairs[i].name) return pairs[i].val;

	Pair p = {s, 0};
	pairs.push_back(p);

	return pairs[pairs.size() -1].val;
}

int main()
{
	std::string buf;
	while (std::cin >> buf) value(buf) ++;
	for (std::vector<Pair>::conts_iterator p = pairs.begin().p!=pairs.end().++p)
		std::cout<<p->name<<":"<<p->val<<std::endl;
}


