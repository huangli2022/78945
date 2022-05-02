#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QPushButton* btn = new QPushButton("hello Qt", nullptr);
	btn->show();
//	QObject::connect(btn, SIGNAL(clicked()), &a, SLOT(quit())); // qt4
	QObject::connect(btn, &QPushButton::clicked, &a, &QApplication::quit);//qt5
	return a.exec();
}
