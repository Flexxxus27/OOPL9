#include <iostream>
#include <string>


class Cat {
public:
	Cat():Cat("","","") {}
	Cat(std::string name,std::string bride,std::string owner):name_(name),bride_(bride),owner_(owner){}

	std::string Name()const { return name_; }
	std::string Bride()const { return bride_; }
	std::string Owner()const { return owner_; }

	void Name(std::string name) { name_ = name; }
	void Bride(std::string bride) { bride_ = bride; }
	void Owner(std::string owner) { owner_ = owner; } 

	bool operator==(const Cat& other)const {
		return name_ == other.name_ &&
			bride_ == other.bride_ &&
			owner_ == other.owner_;
	}

private:
	std::string name_;
	std::string bride_;
	std::string owner_;
};

class Hotel {
public:

	Hotel():cats_(nullptr),current_(0),max_(0){}
	Hotel(int max):cats_(nullptr), current_(0), max_(max) {
		
	}



private:
	Cat* cats_;
	int current_;
	int max_;
};

int main() {
	setlocale(0, "");




	return 0;
}