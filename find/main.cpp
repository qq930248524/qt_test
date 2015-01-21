#include <QApplication>
#include "find.h"

int main(int argc, char * argv[])
{
	QApplication app(argc, argv);
	Find *dialog = new Find;
	dialog->show();
	return app.exec();
}
