#include "EncryptFile.h"
#include "DialogInput.h"
#include "Baza.h"

EncryptFile::EncryptFile(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	plik = new Baza();
	connect(ui.createBtn, &QPushButton::clicked, plik, &Baza::closeConnection);
	connect(ui.bazaBtn, &QPushButton::clicked, plik, &Baza::createDatabase);
	connect(ui.insertBtn, &QPushButton::clicked, this, &EncryptFile::runUserInputDialog);
	connect(plik, SIGNAL(updateLabelValue(QString)), ui.label, SLOT(setText(QString)));
}

void EncryptFile::runUserInputDialog() {
	dialog = new DialogInput();
	dialog->exec();
	getters();
	setters();

	plik->insertValues();
}

EncryptFile::~EncryptFile() {
	delete plik;
}

void EncryptFile::getters() {
	site_text = dialog->getSite();
	login_text = dialog->getLogin();
	pass_text = dialog->getPass();
}

void EncryptFile::setters() {
	plik->setSite(site_text);
	plik->setLogin(login_text);
	plik->setPasswd(pass_text);
}