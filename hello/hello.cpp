#include <QApplication>
#include <QPushButton>
#include <QLabel>

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	
	QLabel *label = new QLabel("Hello QT!");
	QPushButton *button = new QPushButton("Quit");

	QObject::connect(button, SIGNAL(clicked()), &app, SLOT(quit()));

	button->show();
	label->show();

	return app.exec();
}

