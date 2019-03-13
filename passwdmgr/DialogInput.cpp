#include "DialogInput.h"
#include "EncryptFile.h"
#include "Baza.h"

DialogInput::DialogInput(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	connect(ui.cancelButton, &QPushButton::clicked, this, &DialogInput::close);
	connect(ui.okButton, &QPushButton::clicked, this, &DialogInput::buttonClicked);

}

void DialogInput::buttonClicked() {
	setSite();
	setLogin();
	setPass();
}

void DialogInput::setSite() {
	const QString siteQString = ui.lineEdit->text();
	site_text = siteQString.toLocal8Bit().constData();
}
void DialogInput::setLogin() {
	const QString loginQString = ui.lineEdit_2->text();
	login_text = loginQString.toLocal8Bit().constData();
}
void DialogInput::setPass() {
	const QString passQSrting = ui.lineEdit_3->text();
	pass_text = passQSrting.toLocal8Bit().constData();
}

std::string DialogInput::getSite() {
	return site_text;
}
std::string DialogInput::getLogin() {
	return login_text;
}
std::string DialogInput::getPass() {
	return pass_text;
}

DialogInput::~DialogInput()
{
}

void DialogInput::getInputValues() {
	
}

void DialogInput::save() {
	getInputValues();
}