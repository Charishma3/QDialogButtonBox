#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QFileDialog>
#include<QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QString dir=QFileDialog::getExistingDirectory(this,tr("Open Directory"),"C://",QFileDialog::ShowDirsOnly|QFileDialog::DontResolveSymlinks);
        qDebug()<<"Your chosen Directory is:"<<dir;
    QString fileName = QFileDialog::getOpenFileName(this,tr("Open Image"), "C://", tr("Image Files (*.png *.jpg *.bmp)"));
        qDebug()<<"Your chosen Image is here:"<<fileName;
    QStringList files = QFileDialog::getOpenFileNames(
                                 this,
                                 "Select one or more files to open","C://","Images (*.png *.xpm *.jpg);;Text files (*.txt);;XML files (*.xml)");
        qDebug()<<"Your chosen files are here:"<<files;
    QString filesave = QFileDialog::getSaveFileName(this, tr("Save File"),
                                        "C://untitled",
                                        tr("Images (*.png *.xpm *.jpg);;Text files (*.txt);;XML files (*.xml)"));
        qDebug()<<"Your Saved File is:"<<filesave;

}
