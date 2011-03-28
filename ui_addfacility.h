/********************************************************************************
** Form generated from reading UI file 'addfacility.ui'
**
** Created: Wed Mar 23 15:27:46 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDFACILITY_H
#define UI_ADDFACILITY_H

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

class Ui_AddFacility
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout_2;
    QPushButton *okBtn;
    QPushButton *cancelBtn;
    QSpacerItem *horizontalSpacer_2;
    QTextEdit *nameTxt;
    QTextEdit *waitingTxt;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QTextEdit *areaTxt;
    QTextEdit *bedsTxt;

    void setupUi(QMainWindow *AddFacility)
    {
        if (AddFacility->objectName().isEmpty())
            AddFacility->setObjectName(QString::fromUtf8("AddFacility"));
        AddFacility->resize(409, 300);
        centralWidget = new QWidget(AddFacility);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        layoutWidget_2 = new QWidget(centralWidget);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(0, 230, 411, 31));
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
        nameTxt->setGeometry(QRect(120, 40, 271, 31));
        waitingTxt = new QTextEdit(centralWidget);
        waitingTxt->setObjectName(QString::fromUtf8("waitingTxt"));
        waitingTxt->setGeometry(QRect(120, 160, 271, 31));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(12, 40, 101, 151));
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

        areaTxt = new QTextEdit(centralWidget);
        areaTxt->setObjectName(QString::fromUtf8("areaTxt"));
        areaTxt->setGeometry(QRect(120, 80, 271, 31));
        bedsTxt = new QTextEdit(centralWidget);
        bedsTxt->setObjectName(QString::fromUtf8("bedsTxt"));
        bedsTxt->setGeometry(QRect(120, 120, 271, 31));
        AddFacility->setCentralWidget(centralWidget);

        retranslateUi(AddFacility);

        QMetaObject::connectSlotsByName(AddFacility);
    } // setupUi

    void retranslateUi(QMainWindow *AddFacility)
    {
        AddFacility->setWindowTitle(QApplication::translate("AddFacility", "AddFacility", 0, QApplication::UnicodeUTF8));
        okBtn->setText(QApplication::translate("AddFacility", "OK", 0, QApplication::UnicodeUTF8));
        cancelBtn->setText(QApplication::translate("AddFacility", "Cancel", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("AddFacility", "Facility Name", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("AddFacility", "Area", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("AddFacility", "Total Beds", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("AddFacility", "Has Waiting", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AddFacility: public Ui_AddFacility {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDFACILITY_H
