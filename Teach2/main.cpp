#include <QApplication>
#include <QHBoxLayout>
#include <QWidget>
#include <QPushButton>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	//创建一个widget窗口
	QWidget* window = new QWidget();
	window->setWindowTitle("zhang xiao fei");

	//创建一个横向布局，接下来在布局中塞东西
	QHBoxLayout* mainLayout = new QHBoxLayout();
	window->setLayout(mainLayout);

	//创建三个按钮，添加到布局中
	QPushButton* btn1 = new QPushButton("hello Qt1", nullptr);
	QPushButton* btn2 = new QPushButton("hello Qt2", nullptr);
	QPushButton* btn3 = new QPushButton("hello Qt3", nullptr);
	mainLayout->addWidget(btn1);
	mainLayout->addWidget(btn2);
	mainLayout->addWidget(btn3);

	//信号与信号之间的绑定
	QObject::connect(btn1, &QPushButton::clicked, btn2, &QPushButton::clicked);
	QObject::connect(btn2, &QPushButton::clicked, btn3, &QPushButton::clicked);
	QObject::connect(btn3, &QPushButton::clicked, &a, &QApplication::quit);

	window->show();

	return a.exec();
}
