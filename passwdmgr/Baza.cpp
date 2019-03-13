#include "Baza.h"

void Baza::createConnection() {
	if (!(std::filesystem::exists("TotallyNotDBWithPasswords.db")))
	{
		if ((sqlite3_open("TotallyNotDBWithPasswords.db", &database)) == SQLITE_OK){
		setUpPassword();
		createTable();
		}
	}
	else {
		if ((sqlite3_open("TotallyNotDBWithPasswords.db", &database)) == SQLITE_OK) {
			checkPass();
		}
	}
}

void Baza::setUpPassword() {
	userPass = getUserPassword();
	if ((sqlite3_key(database, userPass.c_str(), strlen(userPass.c_str()))) == SQLITE_OK)
	getLabelValue("Connected!x");
}

int Baza::checkPass() {
	userPass = getUserPassword();
	rc = sqlite3_key(database, userPass.c_str(), strlen(userPass.c_str()));
	rc = sqlite3_exec(database, "SELECT count(*) FROM sqlite_master;", NULL, 0, &errMsg);
	if (rc == 26)
	{
		QMessageBox msgBox;
		msgBox.setText("Wrong password!");
		msgBox.exec();
		return 1;
	}
	else {
		getLabelValue("Connected!");
		return 0;
	}
}

void Baza::closeConnection() {
	if ((sqlite3_close(database))==SQLITE_OK)
	getLabelValue("Not connected!");
}

void Baza::createDatabase() {
	createConnection();
}

std::string Baza::getUserPassword() {
	bool ok;

	QString text = QInputDialog::getText(this, tr("QInputDialog::getText()"),
		tr("Podaj haslo do bazy:"), QLineEdit::Normal,
		QDir::home().dirName(), &ok);

	std::string c_str2 = convertQStringToString(text);
	return c_str2;
}

std::string Baza::convertQStringToString(QString &d) {
	std::string current_locale_text = d.toLocal8Bit().constData();
	return current_locale_text;
}

std::string Baza::prepsql(const std::string &s) {
	return std::string("'") + s + std::string("'");
}

void Baza::createTable() {
	sqlite3_stmt *statement;
	rc = sqlite3_exec(database, "CREATE TABLE Account (ID INTEGER PRIMARY KEY AUTOINCREMENT, Site TEXT, Login TEXT, Password TEXT);", NULL, 0, &errMsg);
}

void Baza::insertValues() {

	std::string sqlstatement =
		"INSERT INTO Account(Site, Login, Password) VALUES ("
		+ prepsql(site) + ","
		+ prepsql(login) + ","
		+ prepsql(passwd) + ");";

	rc = sqlite3_exec(database, sqlstatement.c_str(), NULL, 0, &errMsg);
}

bool Baza::setLogin(const std::string &d) {
	login = d;
	return true;
}
bool Baza::setPasswd(const std::string &d) {
	passwd = d;
	return true;
}
bool Baza::setSite(const std::string &d) {
	site = d;
	return true;
}

Baza::~Baza() {
	sqlite3_close(database);
}
