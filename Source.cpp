#include "Simple_window.h"
#include "Graph.h"
int main()
{
	using namespace Graph_lib; // Графические средства
	Point t1{ 0 , 0 }; // Задаем левый верхний угол окна
	Simple_window win{ t1 , 1920 , 1080, "My window" }; // Простое окно

	Rectangle_BS fullscreen{ Point{0 ,0} , 1920 , 1080 }; // Левый верхний угол, ширина , высота
	win.attach(fullscreen);
	fullscreen.set_fill_color(Color::green);

	Rectangle_BS r1{ Point{960 ,540} , 100 , 100 }; // Левый верхний угол, ширина , высота
	win.attach(r1);
	Rectangle_BS r2{ Point{1060 ,540} , 100 , 100 }; // Левый верхний угол, ширина , высота
	win.attach(r2);
	Rectangle_BS r3{ Point{1160 ,540} , 100 , 100 }; // Левый верхний угол, ширина , высота
	win.attach(r3);
	Rectangle_BS r4{ Point{960 ,640} , 100 , 100 }; // Левый верхний угол, ширина , высота
	win.attach(r4);
	Rectangle_BS r5{ Point{1060 ,640} , 100 , 100 }; // Левый верхний угол, ширина , высота
	win.attach(r5);
	Rectangle_BS r6{ Point{1160 ,640} , 100 , 100 }; // Левый верхний угол, ширина , высота
	win.attach(r6);
	Rectangle_BS r7{ Point{960 ,740} , 100 , 100 }; // Левый верхний угол, ширина , высота
	win.attach(r7);
	Rectangle_BS r8{ Point{1060 ,740} , 100 , 100 }; // Левый верхний угол, ширина , высота
	win.attach(r8);
	Rectangle_BS r9{ Point{1160 ,740} , 100 , 100 }; // Левый верхний угол, ширина , высота
	win.attach(r9);

	r1.set_fill_color(Color::dark_red);
	r2.set_fill_color(Color::white);
	r3.set_fill_color(Color::dark_red);

	r4.set_fill_color(Color::white);
	r5.set_fill_color(Color::dark_red);
	r6.set_fill_color(Color::white);

	r7.set_fill_color(Color::dark_red);
	r8.set_fill_color(Color::white);
	r9.set_fill_color(Color::dark_red);
	win.wait_for_button();
};