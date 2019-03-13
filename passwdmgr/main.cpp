#include "EncryptFile.h"
#include "Baza.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	EncryptFile w;
	w.show();
	return a.exec();
}
