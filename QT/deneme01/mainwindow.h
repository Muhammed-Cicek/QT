#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
 #include "form.h" // 2. ve 3. durumlar için

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::MainWindow *ui;
    Form *muho;
   // Form muho; // =>2.DURUM için eklendi
};
#endif // MAINWINDOW_H
