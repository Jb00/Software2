/********************************************************************************
** Form generated from reading UI file 'adduserwindow.ui'
**
** Created: Sun Mar 27 18:11:03 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDUSERWINDOW_H
#define UI_ADDUSERWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddUserWindow
{
public:
    QAction *actionExit;
    QWidget *centralWidget;
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
    QGridLayout *gridLayout_2;
    QPushButton *okBtn;
    QPushButton *cancelBtn;
    QSpacerItem *horizontalSpacer_2;
    QTextEdit *nameTxt;
    QTextEdit *careTxt;
    QTextEdit *idTxt;

    void setupUi(QMainWindow *AddUserWindow)
    {
        if (AddUserWindow->objectName().isEmpty())
            AddUserWindow->setObjectName(QString::fromUtf8("AddUserWindow"));
        AddUserWindow->resize(380, 268);
        actionExit = new QAction(AddUserWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        centralWidget = new QWidget(AddUserWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 20, 87, 151));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
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

        facTxt = new QTextEdit(centralWidget);
        facTxt->setObjectName(QString::fromUtf8("facTxt"));
        facTxt->setGeometry(QRect(100, 100, 271, 31));
        layoutWidget_2 = new QWidget(centralWidget);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(0, 210, 381, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget_2);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(98, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        okBtn = new QPushButton(layoutWidget_2);
        okBtn->setObjectName(QString::fromUtf8("okBtn"));

        gridLayout_2->addWidget(okBtn, 0, 0, 1, 1);

        cancelBtn = new QPushButton(layoutWidget_2);
        cancelBtn->setObjectName(QString::fromUtf8("cancelBtn"));

        gridLayout_2->addWidget(cancelBtn, 0, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout_2);

        horizontalSpacer_2 = new QSpacerItem(98, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        nameTxt = new QTextEdit(centralWidget);
        nameTxt->setObjectName(QString::fromUtf8("nameTxt"));
        nameTxt->setGeometry(QRect(100, 20, 271, 31));
        careTxt = new QTextEdit(centralWidget);
        careTxt->setObjectName(QString::fromUtf8("careTxt"));
        careTxt->setGeometry(QRect(100, 140, 271, 31));
        idTxt = new QTextEdit(centralWidget);
        idTxt->setObjectName(QString::fromUtf8("idTxt"));
        idTxt->setGeometry(QRect(100, 60, 271, 31));
        AddUserWindow->setCentralWidget(centralWidget);

        retranslateUi(AddUserWindow);

        QMetaObject::connectSlotsByName(AddUserWindow);
    } // setupUi

    void retranslateUi(QMainWindow *AddUserWindow)
    {
        AddUserWindow->setWindowTitle(QApplication::translate("AddUserWindow", "AddUserWindow", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("AddUserWindow", "Exit", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("AddUserWindow", "User Name", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("AddUserWindow", "Employee Id", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("AddUserWindow", "Facility", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("AddUserWindow", "Type of Care", 0, QApplication::UnicodeUTF8));
        okBtn->setText(QApplication::translate("AddUserWindow", "OK", 0, QApplication::UnicodeUTF8));
        cancelBtn->setText(QApplication::translate("AddUserWindow", "Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AddUserWindow: public Ui_AddUserWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDUSERWINDOW_H
