/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *a_open;
    QWidget *centralwidget;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_4;
    QVBoxLayout *verticalLayout_5;
    QLabel *label;
    QFrame *line;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_6;
    QLabel *label_2;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_7;
    QLabel *label_3;
    QLabel *label_5;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_14;
    QLabel *label_10;
    QLabel *label_12;
    QLabel *label_8;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_9;
    QLabel *label_11;
    QLabel *label_13;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QFrame *line_3;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_15;
    QLabel *label_22;
    QSlider *horizontalSlider;
    QLabel *label_23;
    QLabel *label_24;
    QVBoxLayout *verticalLayout_14;
    QLabel *label_27;
    QSpacerItem *verticalSpacer;
    QLabel *label_26;
    QLabel *label_25;
    QVBoxLayout *verticalLayout_13;
    QLabel *label_30;
    QSlider *horizontalSlider_2;
    QLabel *label_29;
    QLabel *label_28;
    QVBoxLayout *verticalLayout_16;
    QLabel *label_33;
    QSlider *horizontalSlider_3;
    QLabel *label_32;
    QLabel *label_31;
    QVBoxLayout *verticalLayout;
    QLabel *label_36;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_34;
    QLabel *label_35;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(870, 600);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMaximumSize(QSize(16777215, 16777215));
        a_open = new QAction(MainWindow);
        a_open->setObjectName(QString::fromUtf8("a_open"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy1);
        centralwidget->setMaximumSize(QSize(16777215, 16777215));
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(6, 6, 791, 521));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_4 = new QWidget();
        scrollAreaWidgetContents_4->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_4"));
        scrollAreaWidgetContents_4->setGeometry(QRect(0, 0, 810, 519));
        verticalLayout_5 = new QVBoxLayout(scrollAreaWidgetContents_4);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label = new QLabel(scrollAreaWidgetContents_4);
        label->setObjectName(QString::fromUtf8("label"));
        label->setBaseSize(QSize(0, 40));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        label->setFont(font);
        label->setInputMethodHints(Qt::ImhHiddenText);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label);

        line = new QFrame(scrollAreaWidgetContents_4);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_5->addWidget(line);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_6 = new QLabel(scrollAreaWidgetContents_4);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        label_6->setFont(font1);
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_6);

        label_2 = new QLabel(scrollAreaWidgetContents_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setMinimumSize(QSize(0, 0));
        label_2->setScaledContents(false);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_2);

        label_4 = new QLabel(scrollAreaWidgetContents_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);
        label_4->setScaledContents(false);
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_4);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_7 = new QLabel(scrollAreaWidgetContents_4);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font1);
        label_7->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_7);

        label_3 = new QLabel(scrollAreaWidgetContents_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        label_3->setScaledContents(false);
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_3);

        label_5 = new QLabel(scrollAreaWidgetContents_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);
        label_5->setScaledContents(false);
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_5);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        label_14 = new QLabel(scrollAreaWidgetContents_4);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setFont(font1);
        label_14->setAlignment(Qt::AlignCenter);

        verticalLayout_9->addWidget(label_14);

        label_10 = new QLabel(scrollAreaWidgetContents_4);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setAlignment(Qt::AlignCenter);

        verticalLayout_9->addWidget(label_10);

        label_12 = new QLabel(scrollAreaWidgetContents_4);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setAlignment(Qt::AlignCenter);

        verticalLayout_9->addWidget(label_12);


        horizontalLayout_2->addLayout(verticalLayout_9);


        verticalLayout_5->addLayout(horizontalLayout_2);

        label_8 = new QLabel(scrollAreaWidgetContents_4);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font);
        label_8->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_8);

        line_2 = new QFrame(scrollAreaWidgetContents_4);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_5->addWidget(line_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        label_9 = new QLabel(scrollAreaWidgetContents_4);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font1);
        label_9->setAlignment(Qt::AlignCenter);

        verticalLayout_11->addWidget(label_9);

        label_11 = new QLabel(scrollAreaWidgetContents_4);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setAlignment(Qt::AlignCenter);

        verticalLayout_11->addWidget(label_11);

        label_13 = new QLabel(scrollAreaWidgetContents_4);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setAlignment(Qt::AlignCenter);

        verticalLayout_11->addWidget(label_13);


        horizontalLayout_3->addLayout(verticalLayout_11);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        label_15 = new QLabel(scrollAreaWidgetContents_4);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setFont(font1);
        label_15->setAlignment(Qt::AlignCenter);

        verticalLayout_10->addWidget(label_15);

        label_16 = new QLabel(scrollAreaWidgetContents_4);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setAlignment(Qt::AlignCenter);

        verticalLayout_10->addWidget(label_16);

        label_17 = new QLabel(scrollAreaWidgetContents_4);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setAlignment(Qt::AlignCenter);

        verticalLayout_10->addWidget(label_17);


        horizontalLayout_3->addLayout(verticalLayout_10);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        label_18 = new QLabel(scrollAreaWidgetContents_4);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setFont(font1);
        label_18->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(label_18);

        label_19 = new QLabel(scrollAreaWidgetContents_4);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(label_19);

        label_20 = new QLabel(scrollAreaWidgetContents_4);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(label_20);


        horizontalLayout_3->addLayout(verticalLayout_7);


        verticalLayout_5->addLayout(horizontalLayout_3);

        label_21 = new QLabel(scrollAreaWidgetContents_4);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setFont(font);
        label_21->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_21);

        line_3 = new QFrame(scrollAreaWidgetContents_4);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_5->addWidget(line_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        label_22 = new QLabel(scrollAreaWidgetContents_4);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setFont(font1);
        label_22->setAlignment(Qt::AlignCenter);

        verticalLayout_15->addWidget(label_22);

        horizontalSlider = new QSlider(scrollAreaWidgetContents_4);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setMaximumSize(QSize(200, 16777215));
        horizontalSlider->setMinimum(-127);
        horizontalSlider->setMaximum(127);
        horizontalSlider->setOrientation(Qt::Horizontal);

        verticalLayout_15->addWidget(horizontalSlider);

        label_23 = new QLabel(scrollAreaWidgetContents_4);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setAlignment(Qt::AlignCenter);

        verticalLayout_15->addWidget(label_23);

        label_24 = new QLabel(scrollAreaWidgetContents_4);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setAlignment(Qt::AlignCenter);

        verticalLayout_15->addWidget(label_24);


        horizontalLayout_4->addLayout(verticalLayout_15);

        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        label_27 = new QLabel(scrollAreaWidgetContents_4);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setFont(font1);
        label_27->setAlignment(Qt::AlignCenter);

        verticalLayout_14->addWidget(label_27);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_14->addItem(verticalSpacer);

        label_26 = new QLabel(scrollAreaWidgetContents_4);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        verticalLayout_14->addWidget(label_26);

        label_25 = new QLabel(scrollAreaWidgetContents_4);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        verticalLayout_14->addWidget(label_25);


        horizontalLayout_4->addLayout(verticalLayout_14);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        label_30 = new QLabel(scrollAreaWidgetContents_4);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setFont(font1);
        label_30->setAlignment(Qt::AlignCenter);

        verticalLayout_13->addWidget(label_30);

        horizontalSlider_2 = new QSlider(scrollAreaWidgetContents_4);
        horizontalSlider_2->setObjectName(QString::fromUtf8("horizontalSlider_2"));
        horizontalSlider_2->setMaximumSize(QSize(200, 16777215));
        horizontalSlider_2->setBaseSize(QSize(200, 0));
        horizontalSlider_2->setMinimum(0);
        horizontalSlider_2->setMaximum(200);
        horizontalSlider_2->setOrientation(Qt::Horizontal);

        verticalLayout_13->addWidget(horizontalSlider_2);

        label_29 = new QLabel(scrollAreaWidgetContents_4);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setAlignment(Qt::AlignCenter);

        verticalLayout_13->addWidget(label_29);

        label_28 = new QLabel(scrollAreaWidgetContents_4);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setAlignment(Qt::AlignCenter);

        verticalLayout_13->addWidget(label_28);


        horizontalLayout_4->addLayout(verticalLayout_13);

        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        label_33 = new QLabel(scrollAreaWidgetContents_4);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setFont(font1);
        label_33->setAlignment(Qt::AlignCenter);

        verticalLayout_16->addWidget(label_33);

        horizontalSlider_3 = new QSlider(scrollAreaWidgetContents_4);
        horizontalSlider_3->setObjectName(QString::fromUtf8("horizontalSlider_3"));
        horizontalSlider_3->setMaximumSize(QSize(200, 16777215));
        horizontalSlider_3->setBaseSize(QSize(200, 0));
        horizontalSlider_3->setMaximum(200);
        horizontalSlider_3->setSingleStep(200);
        horizontalSlider_3->setValue(100);
        horizontalSlider_3->setOrientation(Qt::Horizontal);

        verticalLayout_16->addWidget(horizontalSlider_3);

        label_32 = new QLabel(scrollAreaWidgetContents_4);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setAlignment(Qt::AlignCenter);

        verticalLayout_16->addWidget(label_32);

        label_31 = new QLabel(scrollAreaWidgetContents_4);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setAlignment(Qt::AlignCenter);

        verticalLayout_16->addWidget(label_31);


        horizontalLayout_4->addLayout(verticalLayout_16);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_36 = new QLabel(scrollAreaWidgetContents_4);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Calibri")});
        font2.setPointSize(11);
        font2.setBold(true);
        label_36->setFont(font2);
        label_36->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_36);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        label_34 = new QLabel(scrollAreaWidgetContents_4);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_34);

        label_35 = new QLabel(scrollAreaWidgetContents_4);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        label_35->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_35);


        horizontalLayout_4->addLayout(verticalLayout);


        verticalLayout_5->addLayout(horizontalLayout_4);

        scrollArea->setWidget(scrollAreaWidgetContents_4);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 870, 22));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menu->addAction(a_open);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        a_open->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\255\320\272\320\262\320\260\320\273\320\270\320\267\320\260\321\206\320\270\321\217 \320\263\320\270\321\201\321\202\320\276\320\263\321\200\320\260\320\274\320\274\321\213 \320\270 \320\233\320\270\320\275\320\265\320\271\320\275\320\276\320\265 \320\272\320\276\320\275\321\202\321\200\320\260\321\201\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\236\321\200\320\270\320\263\320\270\320\275\320\260\320\273", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\320\255\320\272\320\262\320\260\320\273\320\270\320\267\320\260\321\206\320\270\321\217 \320\263\320\270\321\201\321\202\320\276\320\263\321\200\320\260\320\274\320\274\321\213", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "\320\233\320\270\320\275\320\265\320\271\320\275\320\276\320\265 \320\272\320\276\320\275\321\202\321\200\320\260\321\201\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\320\255\320\272\320\262\320\260\320\273\320\270\320\267\320\260\321\206\320\270\320\270 \320\262 RGB \320\270 HSV", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\320\236\321\200\320\270\320\263\320\270\320\275\320\260\320\273", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "\320\255\320\272\320\262\320\260\320\273\320\270\320\267\320\260\321\206\320\270\321\217(RGB)", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "\320\255\320\272\320\262\320\260\320\273\320\270\320\267\320\260\321\206\320\270\321\217(HSV)", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\321\215\320\273\320\265\320\274\320\265\320\275\321\202\320\275\321\213\320\265 \320\276\320\277\320\265\321\200\320\260\321\206\320\270\320\270", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\272\320\276\320\275\321\201\321\202\320\260\320\275\321\202\321\213", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_27->setText(QCoreApplication::translate("MainWindow", "\320\235\320\265\320\263\320\260\321\202\320\270\320\262", nullptr));
        label_26->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_30->setText(QCoreApplication::translate("MainWindow", "\320\243\320\274\320\275\320\276\320\266\320\265\320\275\320\270\320\265 \320\275\320\260 \320\272\320\276\320\275\321\201\321\202\320\260\320\275\321\202\321\203", nullptr));
        label_29->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_28->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_33->setText(QCoreApplication::translate("MainWindow", "\320\241\321\202\320\265\320\277\320\265\320\275\320\275\321\213\320\265 \320\277\321\200\320\265\320\276\320\261\321\200\320\260\320\267\320\276\320\262\320\260\320\275\320\270\321\217", nullptr));
        label_32->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_31->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_36->setText(QCoreApplication::translate("MainWindow", "\320\233\320\276\320\263\320\260\321\200\320\270\321\204\320\274\320\270\321\207\320\265\321\201\320\272\320\276\320\265 \320\277\321\200\320\265\320\276\320\261\321\200\320\260\320\267\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
        label_34->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_35->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
