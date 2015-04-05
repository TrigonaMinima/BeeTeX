# include <iostream>

using namespace std;

class c_polygon
{
protected:
	int width, height;
public:
	void get()
	{
		cin >> width >> height;
	}
	virtual int area()
	{
		return 0;
	}
};

class rectangle: public c_polygon
{
public:
	int area()
	{
		return (width * height);
	}
};

class triangle: public c_polygon
{
public:
	int area()
	{
		return (width * height) / 2;
	}
};

int main()
{
	rectangle r;
	triangle t;
	c_polygon *p;

	int x, y;
	cout << "Enter length and breadth of rectangle: ";
	r.get();
	p = &r;
	cout << "Area of rectangle:" << p->area() << endl;

	cout << "\nEnter base and height of triangle: ";
	t.get();
	p = &t;
	cout << "Area of triangle: " << p->area() << endl;
	return 0;
}
