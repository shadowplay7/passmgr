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
	/*connect(ui.showBtn, &QPushButton::clicked, this, &EncryptFile::init);*/
	connect(ui.insertBtn, &QPushButton::clicked, this, &EncryptFile::runUserInputDialog);
	connect(plik, SIGNAL(updateLabelValue(QString)), ui.label, SLOT(setText(QString)));
}

//void EncryptFile::init() {
//	bool ok;
//	QString text = QInputDialog::getText(this, tr("QInputDialog::getText()"),
//		tr("Podaj haslo do bazy:"), QLineEdit::Normal,
//		QDir::home().dirName(), &ok);
//
//	
//	mydb = QSqlDatabase::addDatabase("QSQLITE");
//	mydb.setDatabaseName("TotallyNotDBWithPasswords.db");
//	mydb.setPassword(text);
//	mydb.setConnectOptions("QSQLITE_USE_CIPHER=sqlcipher");
//	mydb.open();
//
//	table_model = new QSqlTableModel(this, mydb);
//	initializeModel(table_model);
//
//	ui.tableView->setModel(table_model);
//}

//void EncryptFile::initializeModel(QSqlTableModel *model)
//{
//	model->setTable("Account");
//	model->setEditStrategy(QSqlTableModel::OnFieldChange);
//	model->setHeaderData(0, Qt::Horizontal, QObject::tr("nr"));
//	model->setHeaderData(1, Qt::Horizontal, QObject::tr("strona"));
//	model->setHeaderData(2, Qt::Horizontal, QObject::tr("haslo"));
//}


void EncryptFile::runUserInputDialog() {
	
	dialog = new DialogInput();
	dialog->exec();
	getters();
	setters();
	plik->insertValues();
	delete dialog;
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
