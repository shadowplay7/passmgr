/********************************************************************************
** Form generated from reading UI file 'DialogInput.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGINPUT_H
#define UI_DIALOGINPUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogInput
{
public:
    QWidget *layoutWidget_2;
    QVBoxLayout *_2;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QSpacerItem *spacer;
    QWidget *layoutWidget;
    QVBoxLayout *vboxLayout;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QSpacerItem *spacerItem;
    QPushButton *generateButton;

    void setupUi(QDialog *DialogInput)
    {
        if (DialogInput->objectName().isEmpty())
            DialogInput->setObjectName(QString::fromUtf8("DialogInput"));
        DialogInput->resize(404, 200);
        layoutWidget_2 = new QWidget(DialogInput);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 10, 281, 171));
        _2 = new QVBoxLayout(layoutWidget_2);
        _2->setSpacing(6);
        _2->setContentsMargins(11, 11, 11, 11);
        _2->setObjectName(QString::fromUtf8("_2"));
        _2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget_2);
        label->setObjectName(QString::fromUtf8("label"));

        _2->addWidget(label);

        lineEdit = new QLineEdit(layoutWidget_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        _2->addWidget(lineEdit);

        label_2 = new QLabel(layoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        _2->addWidget(label_2);

        lineEdit_2 = new QLineEdit(layoutWidget_2);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        _2->addWidget(lineEdit_2);

        label_3 = new QLabel(layoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        _2->addWidget(label_3);

        lineEdit_3 = new QLineEdit(layoutWidget_2);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        _2->addWidget(lineEdit_3);

        spacer = new QSpacerItem(72, 38, QSizePolicy::Minimum, QSizePolicy::Expanding);

        _2->addItem(spacer);

        layoutWidget = new QWidget(DialogInput);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(300, 10, 91, 171));
        vboxLayout = new QVBoxLayout(layoutWidget);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        okButton = new QPushButton(layoutWidget);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        vboxLayout->addWidget(okButton);

        cancelButton = new QPushButton(layoutWidget);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        vboxLayout->addWidget(cancelButton);

        spacerItem = new QSpacerItem(72, 38, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);

        generateButton = new QPushButton(layoutWidget);
        generateButton->setObjectName(QString::fromUtf8("generateButton"));

        vboxLayout->addWidget(generateButton);


        retranslateUi(DialogInput);

        QMetaObject::connectSlotsByName(DialogInput);
    } // setupUi

    void retranslateUi(QDialog *DialogInput)
    {
        DialogInput->setWindowTitle(QApplication::translate("DialogInput", "DialogInput", nullptr));
        label->setText(QApplication::translate("DialogInput", "site name/link", nullptr));
        label_2->setText(QApplication::translate("DialogInput", "login", nullptr));
        label_3->setText(QApplication::translate("DialogInput", "password", nullptr));
        okButton->setText(QApplication::translate("DialogInput", "OK", nullptr));
        cancelButton->setText(QApplication::translate("DialogInput", "Cancel", nullptr));
        generateButton->setText(QApplication::translate("DialogInput", "generatePass", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogInput: public Ui_DialogInput {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGINPUT_H
