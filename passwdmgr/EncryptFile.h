#pragma once
#define SQLITE_HAS_CODEC
#include <QtWidgets/QMainWindow>
#include "ui_EncryptFile.h"
#include <QInputDialog>
#include <QDir>
#include "sqlite3.h"
#include <string>
#include "Baza.h"
#include "DialogInput.h"
#include <QPointer>

class EncryptFile : public QMainWindow
{
	Q_OBJECT

public:
	EncryptFile(QWidget *parent = Q_NULLPTR);
	~EncryptFile();
	void getters();
	void setters();

private:
	Ui::EncryptFileClass ui;
	std::string site_text;
	std::string login_text;
	std::string pass_text;
	Baza *plik;
	DialogInput *dialog;
	std::unique_ptr<DialogInput> dialptr = nullptr;
	

private slots:
	void runUserInputDialog();
};
