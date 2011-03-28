/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Sun Mar 27 18:11:03 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFormLayout>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QScrollArea>
#include <QtGui/QScrollBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QFrame *frame;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_6;
    QWidget *layoutWidget_4;
    QGridLayout *gridLayout_3;
    QLabel *label_7;
    QPushButton *btn_occ_2;
    QLabel *label_8;
    QPushButton *btn_avai_2;
    QLabel *label_9;
    QPushButton *btn_total_2;
    QWidget *layoutWidget_5;
    QFormLayout *formLayout_2;
    QLabel *label_10;
    QLineEdit *textAdd_2;
    QLabel *label_11;
    QLineEdit *textAssign_2;
    QLabel *label;
    QWidget *layoutWidget_7;
    QGridLayout *gridLayout_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QWidget *layoutWidget_8;
    QVBoxLayout *verticalLayout_7;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QScrollBar *verticalScrollBar_2;
    QWidget *layoutWidget_9;
    QVBoxLayout *verticalLayout_4;
    QLabel *lb_Name_2;
    QLabel *lb_Addr_2;
    QLabel *lb_Phone_2;
    QPushButton *push_histo;
    QPushButton *push_addFacility;
    QPushButton *push_addUser;
    QPushButton *push_Graph;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(685, 475);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(280, 30, 351, 131));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        layoutWidget_3 = new QWidget(frame);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(10, 10, 138, 111));
        verticalLayout_2 = new QVBoxLayout(layoutWidget_3);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        radioButton_4 = new QRadioButton(layoutWidget_3);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));
        radioButton_4->setChecked(true);

        verticalLayout_2->addWidget(radioButton_4);

        radioButton_5 = new QRadioButton(layoutWidget_3);
        radioButton_5->setObjectName(QString::fromUtf8("radioButton_5"));

        verticalLayout_2->addWidget(radioButton_5);

        radioButton_6 = new QRadioButton(layoutWidget_3);
        radioButton_6->setObjectName(QString::fromUtf8("radioButton_6"));

        verticalLayout_2->addWidget(radioButton_6);

        layoutWidget_4 = new QWidget(frame);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(160, 20, 192, 95));
        gridLayout_3 = new QGridLayout(layoutWidget_4);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget_4);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_3->addWidget(label_7, 0, 0, 1, 1);

        btn_occ_2 = new QPushButton(layoutWidget_4);
        btn_occ_2->setObjectName(QString::fromUtf8("btn_occ_2"));

        gridLayout_3->addWidget(btn_occ_2, 0, 1, 1, 1);

        label_8 = new QLabel(layoutWidget_4);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_3->addWidget(label_8, 1, 0, 1, 1);

        btn_avai_2 = new QPushButton(layoutWidget_4);
        btn_avai_2->setObjectName(QString::fromUtf8("btn_avai_2"));

        gridLayout_3->addWidget(btn_avai_2, 1, 1, 1, 1);

        label_9 = new QLabel(layoutWidget_4);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_3->addWidget(label_9, 2, 0, 1, 1);

        btn_total_2 = new QPushButton(layoutWidget_4);
        btn_total_2->setObjectName(QString::fromUtf8("btn_total_2"));

        gridLayout_3->addWidget(btn_total_2, 2, 1, 1, 1);

        layoutWidget_5 = new QWidget(centralWidget);
        layoutWidget_5->setObjectName(QString::fromUtf8("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(450, 231, 205, 62));
        formLayout_2 = new QFormLayout(layoutWidget_5);
        formLayout_2->setSpacing(6);
        formLayout_2->setContentsMargins(11, 11, 11, 11);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(layoutWidget_5);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_10);

        textAdd_2 = new QLineEdit(layoutWidget_5);
        textAdd_2->setObjectName(QString::fromUtf8("textAdd_2"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, textAdd_2);

        label_11 = new QLabel(layoutWidget_5);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_11);

        textAssign_2 = new QLineEdit(layoutWidget_5);
        textAssign_2->setObjectName(QString::fromUtf8("textAssign_2"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, textAssign_2);

        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(420, 10, 81, 21));
        layoutWidget_7 = new QWidget(centralWidget);
        layoutWidget_7->setObjectName(QString::fromUtf8("layoutWidget_7"));
        layoutWidget_7->setGeometry(QRect(290, 200, 164, 128));
        gridLayout_4 = new QGridLayout(layoutWidget_7);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        pushButton_3 = new QPushButton(layoutWidget_7);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout_4->addWidget(pushButton_3, 0, 0, 1, 1);

        pushButton_4 = new QPushButton(layoutWidget_7);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        gridLayout_4->addWidget(pushButton_4, 1, 0, 1, 1);

        pushButton_7 = new QPushButton(layoutWidget_7);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

        gridLayout_4->addWidget(pushButton_7, 2, 0, 1, 1);

        pushButton_8 = new QPushButton(layoutWidget_7);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));

        gridLayout_4->addWidget(pushButton_8, 3, 0, 1, 1);

        layoutWidget_8 = new QWidget(centralWidget);
        layoutWidget_8->setObjectName(QString::fromUtf8("layoutWidget_8"));
        layoutWidget_8->setGeometry(QRect(0, 0, 2, 2));
        verticalLayout_7 = new QVBoxLayout(layoutWidget_8);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(0, 0, 271, 361));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 269, 359));
        verticalScrollBar_2 = new QScrollBar(scrollAreaWidgetContents_2);
        verticalScrollBar_2->setObjectName(QString::fromUtf8("verticalScrollBar_2"));
        verticalScrollBar_2->setGeometry(QRect(250, 0, 21, 361));
        verticalScrollBar_2->setOrientation(Qt::Vertical);
        layoutWidget_9 = new QWidget(scrollAreaWidgetContents_2);
        layoutWidget_9->setObjectName(QString::fromUtf8("layoutWidget_9"));
        layoutWidget_9->setGeometry(QRect(10, 10, 104, 100));
        verticalLayout_4 = new QVBoxLayout(layoutWidget_9);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        lb_Name_2 = new QLabel(layoutWidget_9);
        lb_Name_2->setObjectName(QString::fromUtf8("lb_Name_2"));
        QFont font;
        font.setFamily(QString::fromUtf8("AlArabiya"));
        font.setPointSize(22);
        lb_Name_2->setFont(font);

        verticalLayout_4->addWidget(lb_Name_2);

        lb_Addr_2 = new QLabel(layoutWidget_9);
        lb_Addr_2->setObjectName(QString::fromUtf8("lb_Addr_2"));

        verticalLayout_4->addWidget(lb_Addr_2);

        lb_Phone_2 = new QLabel(layoutWidget_9);
        lb_Phone_2->setObjectName(QString::fromUtf8("lb_Phone_2"));

        verticalLayout_4->addWidget(lb_Phone_2);

        scrollArea->setWidget(scrollAreaWidgetContents_2);
        push_histo = new QPushButton(centralWidget);
        push_histo->setObjectName(QString::fromUtf8("push_histo"));
        push_histo->setGeometry(QRect(290, 340, 162, 27));
        push_addFacility = new QPushButton(centralWidget);
        push_addFacility->setObjectName(QString::fromUtf8("push_addFacility"));
        push_addFacility->setGeometry(QRect(290, 370, 162, 27));
        push_addUser = new QPushButton(centralWidget);
        push_addUser->setObjectName(QString::fromUtf8("push_addUser"));
        push_addUser->setGeometry(QRect(470, 370, 162, 27));
        push_Graph = new QPushButton(centralWidget);
        push_Graph->setObjectName(QString::fromUtf8("push_Graph"));
        push_Graph->setGeometry(QRect(470, 340, 162, 27));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 685, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        radioButton_4->setText(QApplication::translate("MainWindow", "Acute Care", 0, QApplication::UnicodeUTF8));
        radioButton_5->setText(QApplication::translate("MainWindow", "Complex  Care", 0, QApplication::UnicodeUTF8));
        radioButton_6->setText(QApplication::translate("MainWindow", "Long Term Care", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "Occupancy", 0, QApplication::UnicodeUTF8));
        btn_occ_2->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindow", "Available Beds", 0, QApplication::UnicodeUTF8));
        btn_avai_2->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MainWindow", "Total Beds", 0, QApplication::UnicodeUTF8));
        btn_total_2->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("MainWindow", "How many", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("MainWindow", "How many", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Occupancy", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("MainWindow", "Add to Waiting List", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("MainWindow", "Add/Remove Bed(s)", 0, QApplication::UnicodeUTF8));
        pushButton_7->setText(QApplication::translate("MainWindow", "Assign patient to bed", 0, QApplication::UnicodeUTF8));
        pushButton_8->setText(QApplication::translate("MainWindow", "PushButton", 0, QApplication::UnicodeUTF8));
        lb_Name_2->setText(QApplication::translate("MainWindow", "Facility", 0, QApplication::UnicodeUTF8));
        lb_Addr_2->setText(QApplication::translate("MainWindow", "Address", 0, QApplication::UnicodeUTF8));
        lb_Phone_2->setText(QApplication::translate("MainWindow", "Phone number", 0, QApplication::UnicodeUTF8));
        push_histo->setText(QApplication::translate("MainWindow", "Histogram", 0, QApplication::UnicodeUTF8));
        push_addFacility->setText(QApplication::translate("MainWindow", "AddFacility", 0, QApplication::UnicodeUTF8));
        push_addUser->setText(QApplication::translate("MainWindow", "AddUser", 0, QApplication::UnicodeUTF8));
        push_Graph->setText(QApplication::translate("MainWindow", "Graph", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
