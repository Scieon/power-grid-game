#include "Resource.h"
#ifndef URANIUM_H
#define URANIUM_H

class Uranium : public Resource {


public:

	virtual int getCost() const;
	virtual void setCost(int cost);

private:

	int cost;
};

#endif