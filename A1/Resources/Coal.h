#ifndef COAL_H
#define COAL_H
#include "Resource.h"


class Coal : public Resource {

public:
	Coal();
	Coal(int cost);
	int getCost() const;
	void setCost(int cost);

private:
	int cost;
};


#endif