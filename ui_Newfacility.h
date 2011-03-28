/********************************************************************************
** Form generated from reading UI file 'Newfacility.ui'
**
** Created: Sun Mar 27 18:11:03 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWFACILITY_H
#define UI_NEWFACILITY_H

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
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewFacility
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QTextEdit *id;
    QTextEdit *name;
    QTextEdit *area;
    QTextEdit *ac;
    QTextEdit *cc;
    QTextEdit *ltc;
    QTextEdit *x;
    QTextEdit *y;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_6;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_7;
    QLabel *label_8;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout_2;
    QPushButton *okBtn;
    QPushButton *cancelBtn;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *NewFacility)
    {
        if (NewFacility->objectName().isEmpty())
            NewFacility->setObjectName(QString::fromUtf8("NewFacility"));
        NewFacility->resize(484, 459);
        layoutWidget = new QWidget(NewFacility);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(130, 30, 258, 321));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        id = new QTextEdit(layoutWidget);
        id->setObjectName(QString::fromUtf8("id"));

        verticalLayout_2->addWidget(id);

        name = new QTextEdit(layoutWidget);
        name->setObjectName(QString::fromUtf8("name"));

        verticalLayout_2->addWidget(name);

        area = new QTextEdit(layoutWidget);
        area->setObjectName(QString::fromUtf8("area"));

        verticalLayout_2->addWidget(area);

        ac = new QTextEdit(layoutWidget);
        ac->setObjectName(QString::fromUtf8("ac"));

        verticalLayout_2->addWidget(ac);

        cc = new QTextEdit(layoutWidget);
        cc->setObjectName(QString::fromUtf8("cc"));

        verticalLayout_2->addWidget(cc);

        ltc = new QTextEdit(layoutWidget);
        ltc->setObjectName(QString::fromUtf8("ltc"));

        verticalLayout_2->addWidget(ltc);

        x = new QTextEdit(layoutWidget);
        x->setObjectName(QString::fromUtf8("x"));

        verticalLayout_2->addWidget(x);

        y = new QTextEdit(layoutWidget);
        y->setObjectName(QString::fromUtf8("y"));

        verticalLayout_2->addWidget(y);

        layoutWidget_2 = new QWidget(NewFacility);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(33, 30, 93, 321));
        verticalLayout = new QVBoxLayout(layoutWidget_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout->addWidget(label_6);

        label = new QLabel(layoutWidget_2);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(layoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(layoutWidget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(layoutWidget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout->addWidget(label_5);

        label_7 = new QLabel(layoutWidget_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout->addWidget(label_7);

        label_8 = new QLabel(layoutWidget_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout->addWidget(label_8);

        layoutWidget_3 = new QWidget(NewFacility);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(20, 370, 411, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget_3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(98, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        okBtn = new QPushButton(layoutWidget_3);
        okBtn->setObjectName(QString::fromUtf8("okBtn"));

        gridLayout_2->addWidget(okBtn, 0, 0, 1, 1);

        cancelBtn = new QPushButton(layoutWidget_3);
        cancelBtn->setObjectName(QString::fromUtf8("cancelBtn"));

        gridLayout_2->addWidget(cancelBtn, 0, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout_2);

        horizontalSpacer_2 = new QSpacerItem(98, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        retranslateUi(NewFacility);

        QMetaObject::connectSlotsByName(NewFacility);
    } // setupUi

    void retranslateUi(QWidget *NewFacility)
    {
        NewFacility->setWindowTitle(QApplication::translate("NewFacility", "Form", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("NewFacility", "FacilityId", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("NewFacility", "Facility Name", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("NewFacility", "Area", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("NewFacility", "AC", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("NewFacility", "CC", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("NewFacility", "LTC", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("NewFacility", "X", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("NewFacility", "Y", 0, QApplication::UnicodeUTF8));
        okBtn->setText(QApplication::translate("NewFacility", "OK", 0, QApplication::UnicodeUTF8));
        cancelBtn->setText(QApplication::translate("NewFacility", "Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class NewFacility: public Ui_NewFacility {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWFACILITY_H
