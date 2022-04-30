#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QPushButton* btn = new QPushButton("hello Qt");
	btn->show();
	return a.exec();
}
