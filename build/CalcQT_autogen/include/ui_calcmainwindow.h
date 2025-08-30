/********************************************************************************
** Form generated from reading UI file 'calcmainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCMAINWINDOW_H
#define UI_CALCMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *OldResult;
    QLabel *NewResult;
    QPushButton *Dot;
    QPushButton *Calc;
    QPushButton *Null;
    QPushButton *Three;
    QPushButton *Plus;
    QPushButton *Two;
    QPushButton *One;
    QPushButton *Five;
    QPushButton *Four;
    QPushButton *Six;
    QPushButton *Minus;
    QPushButton *Mul;
    QPushButton *Nine;
    QPushButton *Eight;
    QPushButton *Seven;
    QPushButton *Del;
    QPushButton *Div;
    QPushButton *Clear;
    QPushButton *Per;
    QButtonGroup *numberGroup;
    QButtonGroup *actionGroup;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setEnabled(true);
        MainWindow->resize(240, 370);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(240, 370));
        MainWindow->setMaximumSize(QSize(240, 370));
        MainWindow->setStyleSheet(QString::fromUtf8("QMainwindow {\n"
"	border: none;\n"
"	border-radius: 10px;\n"
"	background-color: rgb(49, 49, 49);\n"
"}\n"
""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        centralWidget->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"min-width: 65;\n"
"min-height: 40;\n"
"max-width: 65;\n"
"max-height: 40;\n"
"}"));
        OldResult = new QLabel(centralWidget);
        OldResult->setObjectName("OldResult");
        OldResult->setGeometry(QRect(10, 0, 215, 40));
        OldResult->setMinimumSize(QSize(100, 40));
        OldResult->setMaximumSize(QSize(246, 40));
        QFont font;
        font.setFamilies({QString::fromUtf8("Open Sans")});
        font.setBold(false);
        font.setItalic(false);
        font.setKerning(true);
        OldResult->setFont(font);
        OldResult->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        OldResult->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	border: none;\n"
"	border-radius: 10px;\n"
"	background-color: rgb(49,49,49);\n"
"	color: rgb(90,90,90);\n"
"	font-size: 28px;\n"
"}\n"
""));
        OldResult->setScaledContents(true);
        OldResult->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        OldResult->setWordWrap(true);
        OldResult->setTextInteractionFlags(Qt::TextInteractionFlag::TextSelectableByKeyboard|Qt::TextInteractionFlag::TextSelectableByMouse);
        NewResult = new QLabel(centralWidget);
        NewResult->setObjectName("NewResult");
        NewResult->setGeometry(QRect(10, 40, 215, 40));
        NewResult->setMinimumSize(QSize(100, 40));
        NewResult->setMaximumSize(QSize(236, 40));
        NewResult->setFont(font);
        NewResult->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        NewResult->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	border: none;\n"
"	border-radius: 10px;\n"
"	background-color: rgb(49,49,49);\n"
"	color: white;\n"
"	font-size: 38px;\n"
"}\n"
""));
        NewResult->setScaledContents(true);
        NewResult->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        NewResult->setWordWrap(true);
        NewResult->setTextInteractionFlags(Qt::TextInteractionFlag::TextSelectableByKeyboard|Qt::TextInteractionFlag::TextSelectableByMouse);
        Dot = new QPushButton(centralWidget);
        Dot->setObjectName("Dot");
        Dot->setGeometry(QRect(120, 310, 50, 50));
        Dot->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    border-radius: 25px; \n"
"    background-color: rgb(90, 90, 90);\n"
"    color: white;\n"
"    min-width: 50px;\n"
"    min-height: 50px;\n"
"    max-width: 50px;\n"
"    max-height: 50px;\n"
"    padding: 0;\n"
"    font-size: 18px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"        background-color: #b0b0b0; \n"
"    }"));
        Calc = new QPushButton(centralWidget);
        Calc->setObjectName("Calc");
        Calc->setGeometry(QRect(175, 310, 50, 50));
        Calc->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    border-radius: 25px; \n"
"    background-color: rgb(255, 128, 0);\n"
"    color: white;\n"
"    min-width: 50px;\n"
"    min-height: 50px;\n"
"    max-width: 50px;\n"
"    max-height: 50px;\n"
"    padding: 0;\n"
"    font-size: 18px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"        background-color: #b0b0b0; \n"
"    }"));
        Null = new QPushButton(centralWidget);
        numberGroup = new QButtonGroup(MainWindow);
        numberGroup->setObjectName("numberGroup");
        numberGroup->addButton(Null);
        Null->setObjectName("Null");
        Null->setGeometry(QRect(65, 310, 50, 50));
        Null->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    border-radius: 25px; \n"
"    background-color: rgb(90, 90, 90);\n"
"    color: white;\n"
"    min-width: 50px;\n"
"    min-height: 50px;\n"
"    max-width: 50px;\n"
"    max-height: 50px;\n"
"    padding: 0;\n"
"    font-size: 18px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"        background-color: #b0b0b0; \n"
"    }"));
        Three = new QPushButton(centralWidget);
        numberGroup->addButton(Three);
        Three->setObjectName("Three");
        Three->setGeometry(QRect(120, 255, 50, 50));
        sizePolicy.setHeightForWidth(Three->sizePolicy().hasHeightForWidth());
        Three->setSizePolicy(sizePolicy);
        Three->setMaximumSize(QSize(50, 50));
        Three->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    border-radius: 25px; \n"
"    background-color: rgb(90, 90, 90);\n"
"    color: white;\n"
"    min-width: 50px;\n"
"    min-height: 50px;\n"
"    max-width: 50px;\n"
"    max-height: 50px;\n"
"    padding: 0;\n"
"    font-size: 18px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"        background-color: #b0b0b0; \n"
"    }"));
        Plus = new QPushButton(centralWidget);
        actionGroup = new QButtonGroup(MainWindow);
        actionGroup->setObjectName("actionGroup");
        actionGroup->addButton(Plus);
        Plus->setObjectName("Plus");
        Plus->setGeometry(QRect(175, 255, 50, 50));
        Plus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    border-radius: 25px; \n"
"    background-color: rgb(255, 128, 0);\n"
"    color: white;\n"
"    min-width: 50px;\n"
"    min-height: 50px;\n"
"    max-width: 50px;\n"
"    max-height: 50px;\n"
"    padding: 0;\n"
"    font-size: 18px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"        background-color: #b0b0b0; \n"
"    }"));
        Two = new QPushButton(centralWidget);
        numberGroup->addButton(Two);
        Two->setObjectName("Two");
        Two->setEnabled(true);
        Two->setGeometry(QRect(65, 255, 50, 50));
        sizePolicy.setHeightForWidth(Two->sizePolicy().hasHeightForWidth());
        Two->setSizePolicy(sizePolicy);
        Two->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    border-radius: 25px; \n"
"    background-color: rgb(90, 90, 90);\n"
"    color: white;\n"
"    min-width: 50px;\n"
"    min-height: 50px;\n"
"    max-width: 50px;\n"
"    max-height: 50px;\n"
"    padding: 0;\n"
"    font-size: 18px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"        background-color: #b0b0b0; \n"
"    }"));
        One = new QPushButton(centralWidget);
        numberGroup->addButton(One);
        One->setObjectName("One");
        One->setGeometry(QRect(10, 255, 50, 50));
        sizePolicy.setHeightForWidth(One->sizePolicy().hasHeightForWidth());
        One->setSizePolicy(sizePolicy);
        One->setMinimumSize(QSize(50, 50));
        One->setMaximumSize(QSize(50, 50));
        One->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    border-radius: 25px; \n"
"    background-color: rgb(90, 90, 90);\n"
"    color: white;\n"
"    min-width: 50px;\n"
"    min-height: 50px;\n"
"    max-width: 50px;\n"
"    max-height: 50px;\n"
"    padding: 0;\n"
"    font-size: 18px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"        background-color: #b0b0b0; \n"
"    }"));
        Five = new QPushButton(centralWidget);
        numberGroup->addButton(Five);
        Five->setObjectName("Five");
        Five->setGeometry(QRect(65, 200, 50, 50));
        Five->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    border-radius: 25px; \n"
"    background-color: rgb(90, 90, 90);\n"
"    color: white;\n"
"    min-width: 50px;\n"
"    min-height: 50px;\n"
"    max-width: 50px;\n"
"    max-height: 50px;\n"
"    padding: 0;\n"
"    font-size: 18px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"        background-color: #b0b0b0; \n"
"    }"));
        Four = new QPushButton(centralWidget);
        numberGroup->addButton(Four);
        Four->setObjectName("Four");
        Four->setGeometry(QRect(10, 200, 50, 50));
        Four->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    border-radius: 25px; \n"
"    background-color: rgb(90, 90, 90);\n"
"    color: white;\n"
"    min-width: 50px;\n"
"    min-height: 50px;\n"
"    max-width: 50px;\n"
"    max-height: 50px;\n"
"    padding: 0;\n"
"    font-size: 18px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"        background-color: #b0b0b0; \n"
"    }"));
        Six = new QPushButton(centralWidget);
        numberGroup->addButton(Six);
        Six->setObjectName("Six");
        Six->setGeometry(QRect(120, 200, 50, 50));
        Six->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    border-radius: 25px; \n"
"    background-color: rgb(90, 90, 90);\n"
"    color: white;\n"
"    min-width: 50px;\n"
"    min-height: 50px;\n"
"    max-width: 50px;\n"
"    max-height: 50px;\n"
"    padding: 0;\n"
"    font-size: 18px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"        background-color: #b0b0b0; \n"
"    }"));
        Minus = new QPushButton(centralWidget);
        actionGroup->addButton(Minus);
        Minus->setObjectName("Minus");
        Minus->setGeometry(QRect(175, 200, 50, 50));
        Minus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    border-radius: 25px; \n"
"    background-color: rgb(255, 128, 0);\n"
"    color: white;\n"
"    min-width: 50px;\n"
"    min-height: 50px;\n"
"    max-width: 50px;\n"
"    max-height: 50px;\n"
"    padding: 0;\n"
"    font-size: 18px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"        background-color: #b0b0b0; \n"
"    }"));
        Mul = new QPushButton(centralWidget);
        actionGroup->addButton(Mul);
        Mul->setObjectName("Mul");
        Mul->setGeometry(QRect(175, 145, 50, 50));
        Mul->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    border-radius: 25px; \n"
"    background-color: rgb(255, 128, 0);\n"
"    color: white;\n"
"    min-width: 50px;\n"
"    min-height: 50px;\n"
"    max-width: 50px;\n"
"    max-height: 50px;\n"
"    padding: 0;\n"
"    font-size: 18px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"        background-color: #b0b0b0; \n"
"    }"));
        Nine = new QPushButton(centralWidget);
        numberGroup->addButton(Nine);
        Nine->setObjectName("Nine");
        Nine->setGeometry(QRect(120, 145, 50, 50));
        Nine->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    border-radius: 25px; \n"
"    background-color: rgb(90, 90, 90);\n"
"    color: white;\n"
"    min-width: 50px;\n"
"    min-height: 50px;\n"
"    max-width: 50px;\n"
"    max-height: 50px;\n"
"    padding: 0;\n"
"    font-size: 18px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"        background-color: #b0b0b0; \n"
"    }"));
        Eight = new QPushButton(centralWidget);
        numberGroup->addButton(Eight);
        Eight->setObjectName("Eight");
        Eight->setGeometry(QRect(65, 145, 50, 50));
        sizePolicy.setHeightForWidth(Eight->sizePolicy().hasHeightForWidth());
        Eight->setSizePolicy(sizePolicy);
        Eight->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    border-radius: 25px; \n"
"    background-color: rgb(90, 90, 90);\n"
"    color: white;\n"
"    min-width: 50px;\n"
"    min-height: 50px;\n"
"    max-width: 50px;\n"
"    max-height: 50px;\n"
"    padding: 0;\n"
"    font-size: 18px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"        background-color: #b0b0b0; \n"
"    }"));
        Seven = new QPushButton(centralWidget);
        numberGroup->addButton(Seven);
        Seven->setObjectName("Seven");
        Seven->setGeometry(QRect(10, 145, 50, 50));
        Seven->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    border-radius: 25px; \n"
"    background-color: rgb(90, 90, 90);\n"
"    color: white;\n"
"    min-width: 50px;\n"
"    min-height: 50px;\n"
"    max-width: 50px;\n"
"    max-height: 50px;\n"
"    padding: 0;\n"
"    font-size: 18px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"        background-color: #b0b0b0; \n"
"    }"));
        Del = new QPushButton(centralWidget);
        Del->setObjectName("Del");
        Del->setGeometry(QRect(65, 90, 50, 50));
        Del->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    border-radius: 25px; \n"
"    background-color: rgb(128, 128, 128);\n"
"    color: white;\n"
"    min-width: 50px;\n"
"    min-height: 50px;\n"
"    max-width: 50px;\n"
"    max-height: 50px;\n"
"    padding: 0;\n"
"    font-size: 18px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"        background-color: #b0b0b0; \n"
"    }"));
        Div = new QPushButton(centralWidget);
        actionGroup->addButton(Div);
        Div->setObjectName("Div");
        Div->setGeometry(QRect(175, 90, 50, 50));
        Div->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    border-radius: 25px; \n"
"    background-color: rgb(255, 128, 0);\n"
"    color: white;\n"
"    min-width: 50px;\n"
"    min-height: 50px;\n"
"    max-width: 50px;\n"
"    max-height: 50px;\n"
"    padding: 0;\n"
"    font-size: 18px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"        background-color: #b0b0b0; \n"
"    }"));
        Clear = new QPushButton(centralWidget);
        Clear->setObjectName("Clear");
        Clear->setGeometry(QRect(10, 90, 50, 50));
        Clear->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    border-radius: 25px; \n"
"    background-color: rgb(128, 128, 128);\n"
"    color: white;\n"
"    min-width: 50px;\n"
"    min-height: 50px;\n"
"    max-width: 50px;\n"
"    max-height: 50px;\n"
"    padding: 0;\n"
"    font-size: 18px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"        background-color: #b0b0b0; \n"
"    }"));
        Per = new QPushButton(centralWidget);
        Per->setObjectName("Per");
        Per->setGeometry(QRect(120, 90, 50, 50));
        Per->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;\n"
"    border-radius: 25px; \n"
"    background-color: rgb(128, 128, 128);\n"
"    color: white;\n"
"    min-width: 50px;\n"
"    min-height: 50px;\n"
"    max-width: 50px;\n"
"    max-height: 50px;\n"
"    padding: 0;\n"
"    font-size: 18px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"        background-color: #b0b0b0; \n"
"    }"));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);
        QObject::connect(Clear, SIGNAL(clicked()), MainWindow, SLOT(Clear()));
        QObject::connect(Del, SIGNAL(clicked()), MainWindow, SLOT(Del()));
        QObject::connect(Per, SIGNAL(clicked()), MainWindow, SLOT(Per()));
        QObject::connect(Div, SIGNAL(clicked()), MainWindow, SLOT(Div()));
        QObject::connect(Seven, SIGNAL(clicked()), MainWindow, SLOT(Seven()));
        QObject::connect(Eight, SIGNAL(clicked()), MainWindow, SLOT(Eight()));
        QObject::connect(Nine, SIGNAL(clicked()), MainWindow, SLOT(Nine()));
        QObject::connect(Mul, SIGNAL(clicked()), MainWindow, SLOT(Multi()));
        QObject::connect(Four, SIGNAL(clicked()), MainWindow, SLOT(Four()));
        QObject::connect(Five, SIGNAL(clicked()), MainWindow, SLOT(Five()));
        QObject::connect(Six, SIGNAL(clicked()), MainWindow, SLOT(Six()));
        QObject::connect(Minus, SIGNAL(clicked()), MainWindow, SLOT(Minus()));
        QObject::connect(One, SIGNAL(clicked()), MainWindow, SLOT(One()));
        QObject::connect(Two, SIGNAL(clicked()), MainWindow, SLOT(Two()));
        QObject::connect(Three, SIGNAL(clicked()), MainWindow, SLOT(Three()));
        QObject::connect(Plus, SIGNAL(clicked()), MainWindow, SLOT(Plus()));
        QObject::connect(Null, SIGNAL(clicked()), MainWindow, SLOT(Null()));
        QObject::connect(Dot, SIGNAL(clicked()), MainWindow, SLOT(Dot()));
        QObject::connect(Calc, SIGNAL(clicked()), MainWindow, SLOT(Equel()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Calculator", nullptr));
        OldResult->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        NewResult->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        Dot->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        Calc->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        Null->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        Three->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        Plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        Two->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        One->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        Five->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        Four->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        Six->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        Minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        Mul->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        Nine->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        Eight->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        Seven->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        Del->setText(QCoreApplication::translate("MainWindow", "Del", nullptr));
        Div->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        Clear->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        Per->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCMAINWINDOW_H
