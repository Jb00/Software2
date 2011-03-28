/********************************************************************************
** Form generated from reading UI file 'NewUser.ui'
**
** Created: Sun Mar 27 18:11:03 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWUSER_H
#define UI_NEWUSER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewUser
{
public:
    QTextEdit *careTxt;
    QTextEdit *idTxt;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QTextEdit *facTxt;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *okBtn;
    QGridLayout *gridLayout_2;
    QPushButton *cancelBtn;
    QSpacerItem *horizontalSpacer_2;
    QTextEdit *nameTxt;
    QTextEdit *passwordText;
    QLabel *labelPassword;

    void setupUi(QWidget *NewUser)
    {
        if (NewUser->objectName().isEmpty())
            NewUser->setObjectName(QString::fromUtf8("NewUser"));
        NewUser->resize(420, 284);
        careTxt = new QTextEdit(NewUser);
        careTxt->setObjectName(QString::fromUtf8("careTxt"));
        careTxt->setGeometry(QRect(110, 140, 271, 31));
        idTxt = new QTextEdit(NewUser);
        idTxt->setObjectName(QString::fromUtf8("idTxt"));
        idTxt->setGeometry(QRect(110, 60, 271, 31));
        layoutWidget = new QWidget(NewUser);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 20, 87, 151));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        facTxt = new QTextEdit(NewUser);
        facTxt->setObjectName(QString::fromUtf8("facTxt"));
        facTxt->setGeometry(QRect(110, 100, 271, 31));
        layoutWidget_2 = new QWidget(NewUser);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 230, 381, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(98, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        okBtn = new QPushButton(layoutWidget_2);
        okBtn->setObjectName(QString::fromUtf8("okBtn"));

        horizontalLayout->addWidget(okBtn);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        cancelBtn = new QPushButton(layoutWidget_2);
        cancelBtn->setObjectName(QString::fromUtf8("cancelBtn"));

        gridLayout_2->addWidget(cancelBtn, 0, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout_2);

        horizontalSpacer_2 = new QSpacerItem(98, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        nameTxt = new QTextEdit(NewUser);
        nameTxt->setObjectName(QString::fromUtf8("nameTxt"));
        nameTxt->setGeometry(QRect(110, 20, 271, 31));
        passwordText = new QTextEdit(NewUser);
        passwordText->setObjectName(QString::fromUtf8("passwordText"));
        passwordText->setGeometry(QRect(110, 180, 271, 31));
        labelPassword = new QLabel(NewUser);
        labelPassword->setObjectName(QString::fromUtf8("labelPassword"));
        labelPassword->setGeometry(QRect(20, 180, 85, 33));

        retranslateUi(NewUser);

        QMetaObject::connectSlotsByName(NewUser);
    } // setupUi

    void retranslateUi(QWidget *NewUser)
    {
        NewUser->setWindowTitle(QApplication::translate("NewUser", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("NewUser", "User Name", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("NewUser", "Employee Id", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("NewUser", "Facility", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("NewUser", "Type of Care", 0, QApplication::UnicodeUTF8));
        okBtn->setText(QApplication::translate("NewUser", "OK", 0, QApplication::UnicodeUTF8));
        cancelBtn->setText(QApplication::translate("NewUser", "Cancel", 0, QApplication::UnicodeUTF8));
        labelPassword->setText(QApplication::translate("NewUser", "Password", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class NewUser: public Ui_NewUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWUSER_H
