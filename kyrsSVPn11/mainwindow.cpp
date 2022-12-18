#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent): QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    nrow =20;
    model = new QStandardItemModel(nrow,2,this);
    ui->tableView->setModel( model);
    model->setHeaderData(0, Qt::Horizontal, "Позиция зуба");
     model->setHeaderData(1, Qt::Horizontal, "Дата прорезывания");
     int ind = 0;

     for (int i = 5; i <= 8; i++)
     {

         for(int j = 1; j<= 5; j++){
            index = model->index(ind,0);
            model->setData(index, j+10*i);
            ind++;
         }
       }
     index = model->index(0,1);
 dZero = index.data().toDate();
 datetooth.push_back(dZero);
 for(int i = 0 ; i < model->rowCount(); i++){
     index = model->index(i,1);
model->setData(index, datetooth[0] );
 }
 index = model->index(1,1);
 datetooth.clear();

 QPixmap pixx(":/resours/img/cht.png");
 ui->label->setPixmap(pixx.scaled(550, 550, Qt::KeepAspectRatio, Qt::SmoothTransformation));
}
MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_tableView_clicked(const QModelIndex &indexx)
{
    row = indexx;

}


/*void MainWindow::on_pushButton_sort_clicked()
{
    int n = 0, nz=0; // кол-во заполненных и не заполненных строк
    for (int i = 0; i < model->rowCount(); i++)
    {
        index = model->index(i,1); // в переменную индекс 2 стобца
        if (index.data().toInt() == 0){ // проверяет написано ли что-то в строку второго столбца
            nz++;
            index = model->index(i,0);
            idtooth_without_date.push_back(index.data().toString()); // в вектор данные строки первого столбца
        }
        else{
            n++;
            datetooth.push_back(index.data().toString()); // в вектор то что записано в строке второго столбца
            index = model->index(i,0);
            idtooth_with_date.push_back(index.data().toString()); // в вектор данные строки первого столбца
        }
    }
    for (int i = 0; i < n; i++) // циклы с перезаписыванием данных в таблицу
    {
        index = model->index(i,0);
        model->setData(index, idtooth_with_date[i]);
    }
    for (int i = 0; i < n; i++)
    {
        index = model->index(i,1);
        model->setData(index, datetooth[i]);
    }
    for (int i = n; i < n+nz; i++)
    {
        index = model->index(i,0);
        model->setData(index, idtooth_without_date[i-n]);
    }
    for (int i = n; i < n+nz; i++)
    {
        index = model->index(i,1);
        model->setData(index, "");
    }
    idtooth_with_date.clear(); // очискта векторов
    datetooth.clear();
    idtooth_without_date.clear();
}*/





void MainWindow::on_pushButton_2_clicked()
{
ui->tableView->sortByColumn(0, Qt::SortOrder() );
   /* for (int i = 0; i < model->rowCount(); i++){
        index = model->index(i,0);
        numberthooth.push_back(index.data().toInt());
        numberthooth2.push_back(index.data().toInt());
        index = model->index(i,1);
        datetooth.push_back( index.data().toDate());
    }
    sort(numberthooth.begin(), numberthooth.end());
  for(int i = 0 ; i < model->rowCount(); i++){     
      index = model->index(i,0);
      model->setData(index, numberthooth[i] );
  }
  for(int i =0;i < model->rowCount(); i++){
  for(int j = 0; j < model->rowCount(); j++){
      index = model->index(i,1);
      if(numberthooth[i]==numberthooth2[j]){
  model->setData(index, datetooth[j] );
      }
   }
 }
 // qDebug() << datetooth[0];
  numberthooth.clear();
  numberthooth2.clear();
  datetooth.clear();*/
}


void MainWindow::on_pushButton_3_clicked()
{
    ui->tableView->sortByColumn(1, Qt::AscendingOrder );
    //ui->tableView->s
/*
    for (int i = 0; i < model->rowCount(); i++){
        index = model->index(i,1);
        datetooth.push_back(index.data().toDate());
        datetooth2.push_back(index.data().toDate());
        index = model->index(i,0);
        numberthooth.push_back( index.data().toInt());
        numberthooth2.push_back( index.data().toInt());
    }
    sort(datetooth.begin(), datetooth.end());
  for(int i = 0 ; i < model->rowCount(); i++){

      index = model->index(i,1);
      model->setData(index, datetooth[i] );


  }
  for(int i =0;i < model->rowCount(); i++){
  for(int j = 0; j < model->rowCount(); j++){
      index = model->index(i,0);
      if(datetooth[i]==datetooth2[j] && datetooth2[j]!=dZero){//&& datetooth2[j]!=""
  model->setData(index, numberthooth[j] );
  index = model->index(j,0);
   model->setData(index, numberthooth[i]);
   i++;
  //qDebug()<<"u=yra";
      }
   }
 }
  numberthooth.clear();
  numberthooth2.clear();
  datetooth2.clear();
  datetooth.clear();*/
  //
  int n = 0, nz=0; // кол-во заполненных и не заполненных строк
 for (int i = 0; i < model->rowCount(); i++)
  {
      index = model->index(i,1); // в переменную индекс 2 стобца
      if (index.data().toDate() == dZero){ // проверяет написано ли что-то в строку второго столбца
          nz++;
          index = model->index(i,0);
          idtooth_without_date.push_back(index.data().toInt()); // в вектор данные строки первого столбца
      }
      if(index.data().toDate() != dZero){
          n++;
          datetooth.push_back(index.data().toDate()); // в вектор то что записано в строке второго столбца
          index = model->index(i,0);
          idtooth_with_date.push_back(index.data().toInt()); // в вектор данные строки первого столбца
      }
  }
  for (int i = 0; i < n; i++) // циклы с перезаписыванием данных в таблицу
  {
      index = model->index(i,0);
      model->setData(index, idtooth_with_date[i]);
  }
  for (int i = 0; i < n; i++)
  {
      index = model->index(i,1);
      model->setData(index, datetooth[i]);
  }
  for (int i = n; i < n+nz; i++)
  {
      index = model->index(i,0);
      model->setData(index, idtooth_without_date[i-n]);
  }
  for (int i = n; i < n+nz; i++)
  {
      index = model->index(i,1);
      model->setData(index, dZero);
  }
  qDebug()<<"n nz "<< n<<" "<<nz;
  idtooth_with_date.clear(); // очискта векторов
  datetooth.clear();
  idtooth_without_date.clear();
}


void MainWindow::on_pushButton_4_clicked()
{
    model->setData(model->index(row.row(),1), dZero);
}


void MainWindow::on_pushButton_5_clicked()
{

    index = model->index(row.row() , 0);
    QString x = index.data().toString();
    if(x == y){
        x="";
    }
    QPixmap pixx(":/resours/img/cht" + x + ".png");
        ui->label->setPixmap(pixx.scaled(550, 550, Qt::KeepAspectRatio, Qt::SmoothTransformation));
        y = index.data().toString();
}

