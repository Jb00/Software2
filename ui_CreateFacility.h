/********************************************************************************
** Form generated from reading UI file 'CreateFacility.ui'
**
** Created: Sun Mar 27 18:11:03 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEFACILITY_H
#define UI_CREATEFACILITY_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreateFacility
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout_2;
    QPushButton *okBtn;
    QPushButton *cancelBtn;
    QSpacerItem *horizontalSpacer_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_6;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_7;
    QLabel *label_8;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QTextEdit *id;
    QTextEdit *name;
    QTextEdit *area;
    QTextEdit *ac;
    QTextEdit *cc;
    QTextEdit *ltc;
    QTextEdit *x;
    QTextEdit *y;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QTextEdit *id_2;
    QTextEdit *name_2;
    QTextEdit *area_2;
    QTextEdit *ac_2;
    QTextEdit *cc_2;
    QTextEdit *ltc_2;
    QTextEdit *x_2;
    QTextEdit *y_2;
    QWidget *layoutWidget_4;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QWidget *layoutWidget_5;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QGridLayout *gridLayout_3;
    QPushButton *okBtn_2;
    QPushButton *cancelBtn_2;
    QSpacerItem *horizontalSpacer_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *CreateFacility)
    {
        if (CreateFacility->objectName().isEmpty())
            CreateFacility->setObjectName(QString::fromUtf8("CreateFacility"));
        CreateFacility->resize(800, 600);
        centralwidget = new QWidget(CreateFacility);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        layoutWidget_2 = new QWidget(centralwidget);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 370, 411, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(98, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        gridLayout_2 = new QGridLayout();
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

        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(23, 27, 93, 321));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout->addWidget(label_6);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout->addWidget(label_5);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout->addWidget(label_7);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout->addWidget(label_8);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(120, 30, 258, 668));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        id = new QTextEdit(layoutWidget1);
        id->setObjectName(QString::fromUtf8("id"));

        verticalLayout_2->addWidget(id);

        name = new QTextEdit(layoutWidget1);
        name->setObjectName(QString::fromUtf8("name"));

        verticalLayout_2->addWidget(name);

        area = new QTextEdit(layoutWidget1);
        area->setObjectName(QString::fromUtf8("area"));

        verticalLayout_2->addWidget(area);

        ac = new QTextEdit(layoutWidget1);
        ac->setObjectName(QString::fromUtf8("ac"));

        verticalLayout_2->addWidget(ac);

        cc = new QTextEdit(layoutWidget1);
        cc->setObjectName(QString::fromUtf8("cc"));

        verticalLayout_2->addWidget(cc);

        ltc = new QTextEdit(layoutWidget1);
        ltc->setObjectName(QString::fromUtf8("ltc"));

        verticalLayout_2->addWidget(ltc);

        x = new QTextEdit(layoutWidget1);
        x->setObjectName(QString::fromUtf8("x"));

        verticalLayout_2->addWidget(x);

        y = new QTextEdit(layoutWidget1);
        y->setObjectName(QString::fromUtf8("y"));

        verticalLayout_2->addWidget(y);

        layoutWidget_3 = new QWidget(centralwidget);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(320, 203, 258, 668));
        verticalLayout_3 = new QVBoxLayout(layoutWidget_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        id_2 = new QTextEdit(layoutWidget_3);
        id_2->setObjectName(QString::fromUtf8("id_2"));

        verticalLayout_3->addWidget(id_2);

        name_2 = new QTextEdit(layoutWidget_3);
        name_2->setObjectName(QString::fromUtf8("name_2"));

        verticalLayout_3->addWidget(name_2);

        area_2 = new QTextEdit(layoutWidget_3);
        area_2->setObjectName(QString::fromUtf8("area_2"));

        verticalLayout_3->addWidget(area_2);

        ac_2 = new QTextEdit(layoutWidget_3);
        ac_2->setObjectName(QString::fromUtf8("ac_2"));

        verticalLayout_3->addWidget(ac_2);

        cc_2 = new QTextEdit(layoutWidget_3);
        cc_2->setObjectName(QString::fromUtf8("cc_2"));

        verticalLayout_3->addWidget(cc_2);

        ltc_2 = new QTextEdit(layoutWidget_3);
        ltc_2->setObjectName(QString::fromUtf8("ltc_2"));

        verticalLayout_3->addWidget(ltc_2);

        x_2 = new QTextEdit(layoutWidget_3);
        x_2->setObjectName(QString::fromUtf8("x_2"));

        verticalLayout_3->addWidget(x_2);

        y_2 = new QTextEdit(layoutWidget_3);
        y_2->setObjectName(QString::fromUtf8("y_2"));

        verticalLayout_3->addWidget(y_2);

        layoutWidget_4 = new QWidget(centralwidget);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(223, 200, 93, 321));
        verticalLayout_4 = new QVBoxLayout(layoutWidget_4);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget_4);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout_4->addWidget(label_9);

        label_10 = new QLabel(layoutWidget_4);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        verticalLayout_4->addWidget(label_10);

        label_11 = new QLabel(layoutWidget_4);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        verticalLayout_4->addWidget(label_11);

        label_12 = new QLabel(layoutWidget_4);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        verticalLayout_4->addWidget(label_12);

        label_13 = new QLabel(layoutWidget_4);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        verticalLayout_4->addWidget(label_13);

        label_14 = new QLabel(layoutWidget_4);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        verticalLayout_4->addWidget(label_14);

        label_15 = new QLabel(layoutWidget_4);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        verticalLayout_4->addWidget(label_15);

        label_16 = new QLabel(layoutWidget_4);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        verticalLayout_4->addWidget(label_16);

        layoutWidget_5 = new QWidget(centralwidget);
        layoutWidget_5->setObjectName(QString::fromUtf8("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(210, 543, 411, 31));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_5);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_3 = new QSpacerItem(98, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        okBtn_2 = new QPushButton(layoutWidget_5);
        okBtn_2->setObjectName(QString::fromUtf8("okBtn_2"));

        gridLayout_3->addWidget(okBtn_2, 0, 0, 1, 1);

        cancelBtn_2 = new QPushButton(layoutWidget_5);
        cancelBtn_2->setObjectName(QString::fromUtf8("cancelBtn_2"));

        gridLayout_3->addWidget(cancelBtn_2, 0, 1, 1, 1);


        horizontalLayout_2->addLayout(gridLayout_3);

        horizontalSpacer_4 = new QSpacerItem(98, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        CreateFacility->setCentralWidget(centralwidget);
        menubar = new QMenuBar(CreateFacility);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        CreateFacility->setMenuBar(menubar);
        statusbar = new QStatusBar(CreateFacility);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        CreateFacility->setStatusBar(statusbar);

        retranslateUi(CreateFacility);

        QMetaObject::connectSlotsByName(CreateFacility);
    } // setupUi

    void retranslateUi(QMainWindow *CreateFacility)
    {
        CreateFacility->setWindowTitle(QApplication::translate("CreateFacility", "MainWindow", 0, QApplication::UnicodeUTF8));
        okBtn->setText(QApplication::translate("CreateFacility", "OK", 0, QApplication::UnicodeUTF8));
        cancelBtn->setText(QApplication::translate("CreateFacility", "Cancel", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("CreateFacility", "FacilityId", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CreateFacility", "Facility Name", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CreateFacility", "Area", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("CreateFacility", "AC", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("CreateFacility", "CC", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("CreateFacility", "LTC", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("CreateFacility", "X", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("CreateFacility", "Y", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("CreateFacility", "FacilityId", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("CreateFacility", "Facility Name", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("CreateFacility", "Area", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("CreateFacility", "AC", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("CreateFacility", "CC", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("CreateFacility", "LTC", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("CreateFacility", "X", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("CreateFacility", "Y", 0, QApplication::UnicodeUTF8));
        okBtn_2->setText(QApplication::translate("CreateFacility", "OK", 0, QApplication::UnicodeUTF8));
        cancelBtn_2->setText(QApplication::translate("CreateFacility", "Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CreateFacility: public Ui_CreateFacility {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEFACILITY_H
