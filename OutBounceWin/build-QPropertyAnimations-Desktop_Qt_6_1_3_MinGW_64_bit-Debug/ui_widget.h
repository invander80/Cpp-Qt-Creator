/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *bg;
    QGridLayout *gridLayout;
    QFrame *navbar;
    QVBoxLayout *verticalLayout_3;
    QPushButton *expandBtn;
    QSpacerItem *verticalSpacer;
    QFrame *optionBar;
    QFrame *mainFrame;
    QVBoxLayout *verticalLayout_2;
    QFrame *win;
    QVBoxLayout *verticalLayout_4;
    QLabel *welcomeLbl;
    QFrame *toolBar;
    QLabel *label;
    QFrame *statusBar;
    QLabel *label_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(1477, 855);
        verticalLayout = new QVBoxLayout(Widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        bg = new QFrame(Widget);
        bg->setObjectName(QString::fromUtf8("bg"));
        bg->setStyleSheet(QString::fromUtf8("QFrame#bg{\n"
"background-color: rgb(35, 36, 44);\n"
"}"));
        bg->setFrameShape(QFrame::StyledPanel);
        bg->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(bg);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        navbar = new QFrame(bg);
        navbar->setObjectName(QString::fromUtf8("navbar"));
        navbar->setMinimumSize(QSize(52, 0));
        navbar->setMaximumSize(QSize(52, 16777215));
        navbar->setStyleSheet(QString::fromUtf8("background-color:rgb(29, 30, 36);\n"
"border:0px;"));
        navbar->setFrameShape(QFrame::StyledPanel);
        navbar->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(navbar);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        expandBtn = new QPushButton(navbar);
        expandBtn->setObjectName(QString::fromUtf8("expandBtn"));
        expandBtn->setMinimumSize(QSize(50, 50));
        expandBtn->setMaximumSize(QSize(50, 50));
        expandBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background:none;\n"
"color:\"white\";\n"
"border:1px solid \"white\";\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: rgb(35, 36, 44);\n"
"}\n"
"\n"
"QPushButton::checked{\n"
"background-color: \"white\";\n"
"color:\"black\";\n"
"}"));
        expandBtn->setCheckable(true);

        verticalLayout_3->addWidget(expandBtn);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        gridLayout->addWidget(navbar, 1, 0, 1, 1);

        optionBar = new QFrame(bg);
        optionBar->setObjectName(QString::fromUtf8("optionBar"));
        optionBar->setMaximumSize(QSize(0, 16777215));
        optionBar->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(35, 36, 44);"));
        optionBar->setFrameShape(QFrame::StyledPanel);
        optionBar->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(optionBar, 1, 1, 1, 1);

        mainFrame = new QFrame(bg);
        mainFrame->setObjectName(QString::fromUtf8("mainFrame"));
        mainFrame->setStyleSheet(QString::fromUtf8("background-color:rgb(29, 30, 36)"));
        mainFrame->setFrameShape(QFrame::StyledPanel);
        mainFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(mainFrame);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(20, 20, 20, 20);
        win = new QFrame(mainFrame);
        win->setObjectName(QString::fromUtf8("win"));
        win->setStyleSheet(QString::fromUtf8("background-color: rgb(35, 36, 44);"));
        win->setFrameShape(QFrame::StyledPanel);
        win->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(win);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        welcomeLbl = new QLabel(win);
        welcomeLbl->setObjectName(QString::fromUtf8("welcomeLbl"));
        welcomeLbl->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 28pt \"Yu Gothic UI\";\n"
"background:none;"));
        welcomeLbl->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(welcomeLbl);


        verticalLayout_2->addWidget(win);


        gridLayout->addWidget(mainFrame, 1, 2, 1, 1);

        toolBar = new QFrame(bg);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setMinimumSize(QSize(0, 35));
        toolBar->setMaximumSize(QSize(16777215, 35));
        toolBar->setStyleSheet(QString::fromUtf8("background-color:rgb(29, 30, 36)"));
        toolBar->setFrameShape(QFrame::StyledPanel);
        toolBar->setFrameShadow(QFrame::Raised);
        label = new QLabel(toolBar);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 111, 16));
        label->setStyleSheet(QString::fromUtf8("color:\"white\";\n"
"font: 11pt \"Yu Gothic UI\";"));

        gridLayout->addWidget(toolBar, 0, 0, 1, 3);

        statusBar = new QFrame(bg);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        statusBar->setMinimumSize(QSize(0, 35));
        statusBar->setMaximumSize(QSize(16777215, 35));
        statusBar->setStyleSheet(QString::fromUtf8("background-color:rgb(29, 30, 36)"));
        statusBar->setFrameShape(QFrame::StyledPanel);
        statusBar->setFrameShadow(QFrame::Raised);
        label_2 = new QLabel(statusBar);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 10, 111, 16));
        label_2->setStyleSheet(QString::fromUtf8("color:\"white\";\n"
"font: 11pt \"Yu Gothic UI\";"));

        gridLayout->addWidget(statusBar, 2, 0, 1, 3);


        verticalLayout->addWidget(bg);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        expandBtn->setText(QCoreApplication::translate("Widget", "H", nullptr));
        welcomeLbl->setText(QCoreApplication::translate("Widget", "Hello AppUser!", nullptr));
        label->setText(QCoreApplication::translate("Widget", "AppName", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "StatusBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
