/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label_2;
    QPushButton *pushButton_5;
    QLabel *label_3;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(985, 536);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow{\n"
"background-color: rgb(255, 255, 255)\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(11, 11, 541, 463));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tableView = new QTableView(groupBox_2);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setEnabled(true);
        tableView->setStyleSheet(QString::fromUtf8("QTableView {\n"
"    color: black;\n"
"    gridline-color: black;\n"
"    border-color: black;\n"
"    font: 10px;\n"
"}\n"
"QHeaderView::section {\n"
"    background-color: black;\n"
"    color: white;\n"
"    height: 35px;\n"
"    font: 14px;\n"
"}\n"
"QTableView::item:focus{\n"
"    border: 2px solid black;\n"
"    background-color: black;\n"
"}\n"
"QScrollBar:vertical {\n"
"    background: black;\n"
"}\n"
" QScrollBar::handle:vertical {\n"
"    background: black;\n"
" }\n"
"QScrollBar:horizontal {\n"
"    background: black;\n"
"}\n"
" QScrollBar::handle:horizontal {\n"
"    background: black;\n"
" }"));

        verticalLayout->addWidget(tableView);

        groupBox = new QGroupBox(groupBox_2);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"  background-color: black;\n"
"  border: 1px solid rgba(27, 31, 35, .15);\n"
"  border-radius: 6px;\n"
"  color: #fff;\n"
"  font-family: -apple-system,system-ui,\"Segoe UI\",Helvetica,Arial,sans-serif,\"Apple Color Emoji\",\"Segoe UI Emoji\";\n"
"  font-size: 14px;\n"
"  font-weight: 600;\n"
"  line-height: 20px;\n"
"  padding: 6px 16px;\n"
"  position: relative;\n"
"  text-align: center;\n"
"  text-decoration: none;\n"
"  vertical-align: middle;\n"
"  white-space: nowrap;\n"
"}\n"
"QPushButton:hover {\n"
"  background-color: rgb(255, 255, 255);\n"
"  border: 1px solid rgba(27, 31, 35, .15);\n"
"  border-radius: 6px;\n"
"  color: black;\n"
"  font-family: -apple-system,system-ui,\"Segoe UI\",Helvetica,Arial,sans-serif,\"Apple Color Emoji\",\"Segoe UI Emoji\";\n"
"  font-size: 14px;\n"
"  font-weight: 600;\n"
"  line-height: 20px;\n"
"  padding: 6px 16px;\n"
"  position: relative;\n"
"  text-align: center;\n"
"  text-decoration: none;\n"
"  vertical-align: middle;\n"
"  white-space: nowr"
                        "ap;\n"
"}\n"
""));

        formLayout->setWidget(4, QFormLayout::LabelRole, pushButton_2);

        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_3->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"  background-color: black;\n"
"  border: 1px solid rgba(27, 31, 35, .15);\n"
"  border-radius: 6px;\n"
"  color: #fff;\n"
"  font-family: -apple-system,system-ui,\"Segoe UI\",Helvetica,Arial,sans-serif,\"Apple Color Emoji\",\"Segoe UI Emoji\";\n"
"  font-size: 14px;\n"
"  font-weight: 600;\n"
"  line-height: 20px;\n"
"  padding: 6px 16px;\n"
"  position: relative;\n"
"  text-align: center;\n"
"  text-decoration: none;\n"
"  vertical-align: middle;\n"
"  white-space: nowrap;\n"
"}\n"
"QPushButton:hover {\n"
"  background-color: rgb(255, 255, 255);\n"
"  border: 1px solid rgba(27, 31, 35, .15);\n"
"  border-radius: 6px;\n"
"  color: black;\n"
"  font-family: -apple-system,system-ui,\"Segoe UI\",Helvetica,Arial,sans-serif,\"Apple Color Emoji\",\"Segoe UI Emoji\";\n"
"  font-size: 14px;\n"
"  font-weight: 600;\n"
"  line-height: 20px;\n"
"  padding: 6px 16px;\n"
"  position: relative;\n"
"  text-align: center;\n"
"  text-decoration: none;\n"
"  vertical-align: middle;\n"
"  white-space: nowr"
                        "ap;\n"
"}\n"
""));

        formLayout->setWidget(4, QFormLayout::FieldRole, pushButton_3);

        pushButton_4 = new QPushButton(groupBox);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_4->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"  background-color: black;\n"
"  border: 1px solid rgba(27, 31, 35, .15);\n"
"  border-radius: 6px;\n"
"  color: #fff;\n"
"  font-family: -apple-system,system-ui,\"Segoe UI\",Helvetica,Arial,sans-serif,\"Apple Color Emoji\",\"Segoe UI Emoji\";\n"
"  font-size: 14px;\n"
"  font-weight: 600;\n"
"  line-height: 20px;\n"
"  padding: 6px 16px;\n"
"  position: relative;\n"
"  text-align: center;\n"
"  text-decoration: none;\n"
"  vertical-align: middle;\n"
"  white-space: nowrap;\n"
"}\n"
"QPushButton:hover {\n"
"  background-color: rgb(255, 255, 255);\n"
"  border: 1px solid rgba(27, 31, 35, .15);\n"
"  border-radius: 6px;\n"
"  color: black;\n"
"  font-family: -apple-system,system-ui,\"Segoe UI\",Helvetica,Arial,sans-serif,\"Apple Color Emoji\",\"Segoe UI Emoji\";\n"
"  font-size: 14px;\n"
"  font-weight: 600;\n"
"  line-height: 20px;\n"
"  padding: 6px 16px;\n"
"  position: relative;\n"
"  text-align: center;\n"
"  text-decoration: none;\n"
"  vertical-align: middle;\n"
"  white-space: nowr"
                        "ap;\n"
"}\n"
""));

        formLayout->setWidget(5, QFormLayout::LabelRole, pushButton_4);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setBold(true);
        font.setItalic(true);
        label_2->setFont(font);

        formLayout->setWidget(5, QFormLayout::FieldRole, label_2);

        pushButton_5 = new QPushButton(groupBox);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_5->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"  background-color: black;\n"
"  border: 1px solid rgba(27, 31, 35, .15);\n"
"  border-radius: 6px;\n"
"  color: #fff;\n"
"  font-family: -apple-system,system-ui,\"Segoe UI\",Helvetica,Arial,sans-serif,\"Apple Color Emoji\",\"Segoe UI Emoji\";\n"
"  font-size: 14px;\n"
"  font-weight: 600;\n"
"  line-height: 20px;\n"
"  padding: 6px 16px;\n"
"  position: relative;\n"
"  text-align: center;\n"
"  text-decoration: none;\n"
"  vertical-align: middle;\n"
"  white-space: nowrap;\n"
"}\n"
"QPushButton:hover {\n"
"  background-color: rgb(255, 255, 255);\n"
"  border: 1px solid rgba(27, 31, 35, .15);\n"
"  border-radius: 6px;\n"
"  color: black;\n"
"  font-family: -apple-system,system-ui,\"Segoe UI\",Helvetica,Arial,sans-serif,\"Apple Color Emoji\",\"Segoe UI Emoji\";\n"
"  font-size: 14px;\n"
"  font-weight: 600;\n"
"  line-height: 20px;\n"
"  padding: 6px 16px;\n"
"  position: relative;\n"
"  text-align: center;\n"
"  text-decoration: none;\n"
"  vertical-align: middle;\n"
"  white-space: nowr"
                        "ap;\n"
"}\n"
""));

        formLayout->setWidget(6, QFormLayout::LabelRole, pushButton_5);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        formLayout->setWidget(6, QFormLayout::FieldRole, label_3);


        verticalLayout->addWidget(groupBox);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(565, 11, 401, 451));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 985, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "GroupBox", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "GroupBox", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\272\320\260 \320\277\320\276 \320\275\320\276\320\274\320\265\321\200\321\203", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\277\320\276 \320\264\320\260\321\202\320\265", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "         \320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\264\320\260\321\202\321\203        ", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "-\321\203\320\264\320\260\320\273\321\217\320\265\321\202 \320\264\320\260\321\202\321\203 \321\201 \320\262\321\213\320\261\321\200\320\260\320\275\320\275\320\276\320\271 \321\201\321\202\321\200\320\276\320\272\320\270", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "         \320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214 \320\267\321\203\320\261        ", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "-\320\277\320\276\320\272\320\260\320\267\321\213\320\262\320\260\320\265\321\202 \320\277\320\276\320\267\320\270\321\206\320\270\321\216 \320\262\321\213\320\261\321\200\320\260\320\275\320\275\320\276\320\263\320\276 \320\267\321\203\320\261\320\260 ", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
