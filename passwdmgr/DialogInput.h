#pragma once

#include <QDialog>
#include "ui_DialogInput.h"

class DialogInput : public QDialog
{
	Q_OBJECT

public:
	DialogInput(QWidget *parent = Q_NULLPTR);
	~DialogInput();
	void save();
	void getInputValues();
	std::string getSite();
	std::string getLogin();
	std::string getPass();
	void setSite();
	void setLogin();
	void setPass();

public slots:
	void buttonClicked();

private:
	Ui::DialogInput ui;
	std::string site_text;
	std::string login_text;
	std::string pass_text;
};
