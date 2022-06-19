#include<iostream>
using namespace std;

class Rectangle{
	private:
		int width, height;
	
	public:
		Rectangle(int temp_width, int temp_height){
			width=temp_width;
			height=temp_height;
		}
		
		int get_width() const{
			return width;
		}
		int get_height() const{
			return height;
		}
		void set_width(int temp_width){
			if(temp_width>0&&temp_width<=1000)
				width=temp_width;
		}
		void set_height(int temp_height){
			if(temp_height>0&&temp_height<=2000)
				height=temp_height;
		}
		int area() const{
			return width*height;
		}
		int perimeter() const{
			return 2*(width+height);
		}
		bool is_square() const{
			if(width==height)
				return true;
			else
				return false;
		}
};

int main(){
	Rectangle r1(100, 200);
	Rectangle r2(400, 200);
	cout << r1.perimeter() << ' ' << r1.area() << "\n";
	cout << r1.get_width() << ' ' << r1.get_height() << "\n";
	r1.set_width(300);
	cout << r1.get_width() << ' ';
	r1.set_width(200);
	cout << r1.get_width() << ' ' << r1.is_square() << "\n";
	cout << r2.perimeter() << ' ' << r2.area() << "\n";
	cout << r2.get_width() << ' ' << r2.get_height() << "\n";
}