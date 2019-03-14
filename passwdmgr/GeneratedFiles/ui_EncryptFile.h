/********************************************************************************
** Form generated from reading UI file 'EncryptFile.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENCRYPTFILE_H
#define UI_ENCRYPTFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EncryptFileClass
{
public:
    QWidget *centralWidget;
    QPushButton *createBtn;
    QPushButton *insertBtn;
    QPushButton *bazaBtn;
    QLabel *label;
    QTableView *tableView;
    QPushButton *showBtn;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *EncryptFileClass)
    {
        if (EncryptFileClass->objectName().isEmpty())
            EncryptFileClass->setObjectName(QString::fromUtf8("EncryptFileClass"));
        EncryptFileClass->resize(497, 475);
        EncryptFileClass->setToolButtonStyle(Qt::ToolButtonTextOnly);
        centralWidget = new QWidget(EncryptFileClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        createBtn = new QPushButton(centralWidget);
        createBtn->setObjectName(QString::fromUtf8("createBtn"));
        createBtn->setGeometry(QRect(320, 30, 91, 61));
        insertBtn = new QPushButton(centralWidget);
        insertBtn->setObjectName(QString::fromUtf8("insertBtn"));
        insertBtn->setGeometry(QRect(110, 30, 101, 61));
        bazaBtn = new QPushButton(centralWidget);
        bazaBtn->setObjectName(QString::fromUtf8("bazaBtn"));
        bazaBtn->setGeometry(QRect(10, 30, 91, 61));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 400, 101, 21));
        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setEnabled(true);
        tableView->setGeometry(QRect(10, 120, 461, 271));
        showBtn = new QPushButton(centralWidget);
        showBtn->setObjectName(QString::fromUtf8("showBtn"));
        showBtn->setGeometry(QRect(220, 30, 91, 61));
        EncryptFileClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(EncryptFileClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 497, 21));
        EncryptFileClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(EncryptFileClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        EncryptFileClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(EncryptFileClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        EncryptFileClass->setStatusBar(statusBar);

        retranslateUi(EncryptFileClass);

        QMetaObject::connectSlotsByName(EncryptFileClass);
    } // setupUi

    void retranslateUi(QMainWindow *EncryptFileClass)
    {
        EncryptFileClass->setWindowTitle(QApplication::translate("EncryptFileClass", "passmgr", nullptr));
        createBtn->setText(QApplication::translate("EncryptFileClass", "disconnect", nullptr));
        insertBtn->setText(QApplication::translate("EncryptFileClass", "insertTestValues", nullptr));
        bazaBtn->setText(QApplication::translate("EncryptFileClass", "create/connect", nullptr));
        label->setText(QApplication::translate("EncryptFileClass", "Not connected!", nullptr));
        showBtn->setText(QApplication::translate("EncryptFileClass", "show", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EncryptFileClass: public Ui_EncryptFileClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENCRYPTFILE_H
