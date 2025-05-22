#ifndef ADMIN_H
#define ADMIN_H

#include <QDialog>
#include "globaldata.h" // pakai data global

namespace Ui {
class admin;
}

class admin : public QDialog
{
    Q_OBJECT

public:
    explicit admin(QWidget *parent = nullptr);
    ~admin();

private slots:
    void on_pushButton_Tambah_clicked();
    void on_pushButton_Search_clicked();
    void on_pushButton_Edit_clicked();
    void on_pushButton_Delete_clicked();
    void on_pushButton_logout_clicked();

private:
    Ui::admin *ui;

    int binarySearch(const QString &isbn);
    void updateDisplay();
};

#endif // ADMIN_H
