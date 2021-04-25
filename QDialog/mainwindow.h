#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Mainwindow : public QWidget
{
    Q_OBJECT

public:
    Mainwindow(QWidget *parent = nullptr);
    ~Mainwindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Widget *ui;

};
#endif // MAINWINDOW_H
