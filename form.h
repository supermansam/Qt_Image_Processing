#ifndef FORM_H
#define FORM_H

#include <QWidget>
#include "mainwindow.h"
#include "help.h"
namespace Ui {
class Form;
}

class Form : public QWidget
{
    Q_OBJECT

public:
    explicit Form(QWidget *parent = 0);
    ~Form();

private slots:

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Form *ui;
    MainWindow w;
    Help h;
};

#endif // FORM_H
