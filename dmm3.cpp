#include<bits/stdc++.h>
#include<cmath>

using namespace std;

class Point{
	private :
		float x,y;
	public :
	Point() : x(0), y(0) {}
	void input(){
		cin>>x;
		cin>>y;
	}
	void display() const{
	    cout<<"Toa do diem da nhap"<<endl<<"X="<<x<<endl<<"Y="<<y;
	}
	double distance(Point t1){
		return sqrt(pow(x -t1.x,2)+pow(y-t1.y),2);
	}
};

class Triangle {
	private :
		Point t1,t2,t3;
	public :
	Triangle(Point t1,Point t2,Point t3) : t1(t1), t2(t2), t3(t3) {}
	void input() {
		cout<<"Toa do diem thu nhat: ";
		t1.input(); cout<<endl;
		cout<<"Toa do diem thu hai: ";
		t2.input(); cout<<end;
		cout<<"Toa do diem thu 3: ";
		t3.input();  cout<<endl;
	}
	void chuvi() {
		double c1 = t1.distance(t2);
		double c2 = t2.distance(t3);
		double c3 = c3.distance(t1);
		double C = c1 + c2 + c3;
		cout<<"Chu vi tam giac la :"<<C<<endl;
		}
	double dientich() {
		double c1 = t1.distance(t2);
		double c2 = t2.distance(t3);
		double c3 = c3.distance(t1);
		double S = (c1 + c2 + c3)/2;
		return sqrt(S*(S - c1)*(S - c2)*(S - c3));
	}
};

int main() {
	Point t1,t2,t3
	Triangle D1(t1,t2,t3);
	t1.input();
	t2.input();
	t3.input();
	D1.chuvi();
	cout <<"Dien tich tam giac"<<D1.dientich;
	
}
