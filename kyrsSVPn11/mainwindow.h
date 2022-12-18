#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
//#include <help.h>
#include <QStandardItemModel>
#include <qstring.h>
#include <QModelIndex>
#include <QPushButton>
#include <vector>
#include <algorithm>
#include <QDate>
#include <QSortFilterProxyModel>
#include <QValidator>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

   QString y;
QDate dZero;
private slots:
    void on_tableView_clicked(const QModelIndex &index);

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();



private:
    Ui::MainWindow *ui;
    QStandardItemModel *model;
    QModelIndex index;
    QModelIndex row;
    int nrow;

    std::vector<QDate> datetooth;
    std::vector<QDate> datetooth2;
    std::vector<int> idtooth_with_date;
    std::vector<int> idtooth_without_date;
    std::vector<int> numberthooth;
    std::vector<int> numberthooth2;

};


#endif // MAINWINDOW_H
