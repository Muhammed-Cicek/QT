#include "mainwindow.h"
#include "form.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->exit_button,SIGNAL(clicked()),this,SLOT(close()));

    connect(ui->horizontalSlider,SIGNAL(valueChanged(int)),ui->progressBar_2,SLOT(setValue(int)));
}

MainWindow::~MainWindow()
{
    delete ui;

}

void MainWindow::on_pushButton_clicked()
{
    ui->label->setText(" Merhaba Dünya ");
}


void MainWindow::on_pushButton_3_clicked()
{   // 3.DURUM
    muho= new Form();
    muho->show();
}

/*
void MainWindow::on_pushButton_3_clicked()
{   // 1.DURUM

    Form muho;
    muho.show();

    // form açılıyor fakat görünmeyecek kadar hıphızlı kapanıyor
}
*/

/*
void MainWindow::on_pushButton_3_clicked()
{   // 2.DURUM

    muho.show();

    // form açılıyor fakat tek seferlik açılıyor (Formu )
}
*/
