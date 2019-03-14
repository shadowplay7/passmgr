#pragma once
#define SQLITE_HAS_CODEC
#include <stdio.h>
#include <string>
#include <QtSql/QSqlDatabase>
#include "sqlitelib/sqlite3.h"
#include <QtWidgets/QMainWindow>
#include <QInputDialog>
#include <QDir>
#include <QMessageBox>
#include <filesystem>

class Baza : public QMainWindow 
{
	Q_OBJECT
private:

	
	
	char *errMsg = 0;
	int rc;
	std::string login, passwd, site;
	QString qpass;
	int idNum;
	std::string prepsql(const std::string &s);
	
public:
	Baza() {};
	~Baza();
	bool setLogin(const std::string &d);
	bool setPasswd(const std::string &d);
	bool setSite(const std::string &d);

	std::string getUserPassword();
	std::string convertQStringToString(QString &d);
	void showTable();
	void createConnection();
	void setUpPassword();
	int checkPass();
	void createTable();
	sqlite3 *database = nullptr;
	std::string userPass;

	void getLabelValue(const QString &labeltext) {
		emit updateLabelValue(labeltext);
	};

	
public slots:
	void createDatabase();
	void closeConnection();
	void insertValues();

signals:
	void updateLabelValue(QString);
};