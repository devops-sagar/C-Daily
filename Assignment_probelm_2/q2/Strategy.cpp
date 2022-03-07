#include <iostream>

using namespace std;

class Strategy
{
public:
    virtual void add(float) = 0;
    virtual float checkout() = 0;
};


class NormalBill : public Strategy
{
  public:
    NormalBill(float tax) {
        totalPrice = 0;
        this->tax = tax;
    }
    NormalBill() {
        totalPrice = 0;
        tax = 0.8;
    }
    void add(float price)
    {
        totalPrice += price;
    }
    float checkout() {
	
        return totalPrice * (1 + tax);
    }
  protected:
    float totalPrice;
    float tax;
};

class HappyHourBill : public Strategy
{
  public:
    HappyHourBill(float tax) {
        totalPrice = 0;
        this->tax = tax;
    }
    HappyHourBill() {
        totalPrice = 0;
        tax = 0.8;
    }
    void add(float price)
    {
        totalPrice += price;
    }
    float checkout() {
        return totalPrice * 0.8 * (1 + tax);
    }
  protected:
    float totalPrice;
    float tax;
};

class HolidayBill : public Strategy
{
  public:
    HolidayBill(float tax) {
        totalPrice = 0;
        this->tax = tax;
    }
    HolidayBill() {
        totalPrice = 0;
        tax = 0.8;
    }
    void add(float price)
    {
        totalPrice += price;
    }
    float checkout() {
        return totalPrice * 1.2 * (1 + tax);
    }
  protected:
    float totalPrice;
    float tax;
};
class Context
{
public:

    ~Context()
    {
        delete strategy;
    }

    void contextInterface(int type, float price)
    {
	if (type == 1)
	{
		strategy = new NormalBill();
		strategy->add(price);
	        cout << "The total price for the normal bill is: " << strategy->checkout() <<endl;
	}
	else if(type==2)
	{
		strategy = new HappyHourBill();
		strategy->add(price);
	        cout << "The total price for the Happy Hour bill is: " << strategy->checkout()<<endl;
	}
	else if(type==3)
	{
		strategy = new HolidayBill();
		strategy->add(price);
	        cout << "The total price for the Holiday bill is: " << strategy->checkout()<<endl;
	}	
    }

private:
    Strategy *strategy;
};


int main()
{
	int choice;
	float price;
	char ch;
	while(1)
	{
		cout<<"Enter the bill amount ";
		cin>>price;
		cout<<"1 for Normal Bill\n2 for Happy Hour Bill \n3 for Holiday Bill";
		cout<<"Enter bill type :";
		cin>>choice;
		Context test;
		test.contextInterface(choice, price);
		cout<<"Do you want to Continue\n Press Y for yes and N to exit.";
		cin>>ch;
		if(ch=='N' || ch=='n')
			break;
	}
}

